// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:32 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GLX_SGIX_pbuffer__
#define __GLUX_GLX_SGIX_pbuffer__

GLUX_NEW_PLUGIN(GLX_SGIX_pbuffer);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GLX_PBUFFER_BIT_SGIX
#  define GLX_PBUFFER_BIT_SGIX 0x00000004
#endif
#ifndef GLX_BUFFER_CLOBBER_MASK_SGIX
#  define GLX_BUFFER_CLOBBER_MASK_SGIX 0x08000000
#endif
#ifndef GLX_FRONT_LEFT_BUFFER_BIT_SGIX
#  define GLX_FRONT_LEFT_BUFFER_BIT_SGIX 0x00000001
#endif
#ifndef GLX_FRONT_RIGHT_BUFFER_BIT_SGIX
#  define GLX_FRONT_RIGHT_BUFFER_BIT_SGIX 0x00000002
#endif
#ifndef GLX_BACK_LEFT_BUFFER_BIT_SGIX
#  define GLX_BACK_LEFT_BUFFER_BIT_SGIX 0x00000004
#endif
#ifndef GLX_BACK_RIGHT_BUFFER_BIT_SGIX
#  define GLX_BACK_RIGHT_BUFFER_BIT_SGIX 0x00000008
#endif
#ifndef GLX_AUX_BUFFERS_BIT_SGIX
#  define GLX_AUX_BUFFERS_BIT_SGIX 0x00000010
#endif
#ifndef GLX_DEPTH_BUFFER_BIT_SGIX
#  define GLX_DEPTH_BUFFER_BIT_SGIX 0x00000020
#endif
#ifndef GLX_STENCIL_BUFFER_BIT_SGIX
#  define GLX_STENCIL_BUFFER_BIT_SGIX 0x00000040
#endif
#ifndef GLX_ACCUM_BUFFER_BIT_SGIX
#  define GLX_ACCUM_BUFFER_BIT_SGIX 0x00000080
#endif
#ifndef GLX_SAMPLE_BUFFERS_BIT_SGIX
#  define GLX_SAMPLE_BUFFERS_BIT_SGIX 0x00000100
#endif
#ifndef GLX_MAX_PBUFFER_WIDTH_SGIX
#  define GLX_MAX_PBUFFER_WIDTH_SGIX 0x8016
#endif
#ifndef GLX_MAX_PBUFFER_HEIGHT_SGIX
#  define GLX_MAX_PBUFFER_HEIGHT_SGIX 0x8017
#endif
#ifndef GLX_MAX_PBUFFER_PIXELS_SGIX
#  define GLX_MAX_PBUFFER_PIXELS_SGIX 0x8018
#endif
#ifndef GLX_OPTIMAL_PBUFFER_WIDTH_SGIX
#  define GLX_OPTIMAL_PBUFFER_WIDTH_SGIX 0x8019
#endif
#ifndef GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX
#  define GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX 0x801A
#endif
#ifndef GLX_PRESERVED_CONTENTS_SGIX
#  define GLX_PRESERVED_CONTENTS_SGIX 0x801B
#endif
#ifndef GLX_LARGEST_PBUFFER_SGIX
#  define GLX_LARGEST_PBUFFER_SGIX 0x801C
#endif
#ifndef GLX_WIDTH_SGIX
#  define GLX_WIDTH_SGIX 0x801D
#endif
#ifndef GLX_HEIGHT_SGIX
#  define GLX_HEIGHT_SGIX 0x801E
#endif
#ifndef GLX_EVENT_MASK_SGIX
#  define GLX_EVENT_MASK_SGIX 0x801F
#endif
#ifndef GLX_DAMAGED_SGIX
#  define GLX_DAMAGED_SGIX 0x8020
#endif
#ifndef GLX_SAVED_SGIX
#  define GLX_SAVED_SGIX 0x8021
#endif
#ifndef GLX_WINDOW_SGIX
#  define GLX_WINDOW_SGIX 0x8022
#endif
#ifndef GLX_PBUFFER_SGIX
#  define GLX_PBUFFER_SGIX 0x8023
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXCreateGLXPbufferSGIX
typedef GLXPbufferSGIX (APIENTRYP PFNXGLUXCREATEGLXPBUFFERSGIXPROC) (Display *dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int *attrib_list);
#endif
#ifndef __GLUX__GLFCT_glXDestroyGLXPbufferSGIX
typedef void (APIENTRYP PFNXGLUXDESTROYGLXPBUFFERSGIXPROC) (Display *dpy, GLXPbufferSGIX pbuf);
#endif
#ifndef __GLUX__GLFCT_glXQueryGLXPbufferSGIX
typedef int (APIENTRYP PFNXGLUXQUERYGLXPBUFFERSGIXPROC) (Display *dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int *value);
#endif
#ifndef __GLUX__GLFCT_glXSelectEventSGIX
typedef void (APIENTRYP PFNXGLUXSELECTEVENTSGIXPROC) (Display *dpy, GLXDrawable drawable, unsigned long mask);
#endif
#ifndef __GLUX__GLFCT_glXGetSelectedEventSGIX
typedef void (APIENTRYP PFNXGLUXGETSELECTEDEVENTSGIXPROC) (Display *dpy, GLXDrawable drawable, unsigned long *mask);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXCreateGLXPbufferSGIX
extern PFNXGLUXCREATEGLXPBUFFERSGIXPROC glXCreateGLXPbufferSGIX;
#endif
#ifndef __GLUX__GLFCT_glXDestroyGLXPbufferSGIX
extern PFNXGLUXDESTROYGLXPBUFFERSGIXPROC glXDestroyGLXPbufferSGIX;
#endif
#ifndef __GLUX__GLFCT_glXQueryGLXPbufferSGIX
extern PFNXGLUXQUERYGLXPBUFFERSGIXPROC glXQueryGLXPbufferSGIX;
#endif
#ifndef __GLUX__GLFCT_glXSelectEventSGIX
extern PFNXGLUXSELECTEVENTSGIXPROC glXSelectEventSGIX;
#endif
#ifndef __GLUX__GLFCT_glXGetSelectedEventSGIX
extern PFNXGLUXGETSELECTEDEVENTSGIXPROC glXGetSelectedEventSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------