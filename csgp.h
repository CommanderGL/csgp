#include "csgp_config.h"

#ifndef CSGP_H
#define CSGP_H

/**
 * \brief Initializes csgp for the given enviroment/OS.
 */
void csgp_init();

/**
 * \brief Destroys csgp if nessasary.
 */
void csgp_destroy();

/**
 * \brief Declares a new update function.
 * \note Supports multiple update functions.
 * \param cb The function that is ran every frame.
 */
void csgp_declareUpdate(void (*cb)(unsigned int delta));

/* ERROR Handling */
#define BIT_AT(x, n) ((x >> n) & 1)
#define CONFIG_CHECK(option) \
  (BIT_AT(CSGP_CONFIG, option) == 1 && BIT_AT(CSGP_SUPPORTED, option) == 0)

#if CONFIG_CHECK(0)
#error "Multi Window unsupported."
#endif
#if CONFIG_CHECK(1)
#error "Audio unsupported."
#endif

#if CSGP_CONFIG_INPUT > 0 && (CSGP_CONFIG_INPUT & CSGP_SUPPORTED_INPUT) == 0
#error "No Viable Input Source"
#endif

#endif
