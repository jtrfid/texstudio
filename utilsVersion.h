#ifndef UTILSVERSION_H
#define UTILSVERSION_H

#define TEXSTUDIO "TeXstudio"
#define TXSVERSION "2.7.1"
#define TXSVERSION_NUMERIC 0x020701

#define IS_DEVELOPMENT_VERSION (TXSVERSION_NUMERIC & 0x000001)

extern const char* TEXSTUDIO_HG_REVISION;

#ifdef QT_NO_DEBUG
#define COMPILED_DEBUG_OR_RELEASE "R"
#else
#define COMPILED_DEBUG_OR_RELEASE "D"
#endif

#endif // UTILSVERSION_H
