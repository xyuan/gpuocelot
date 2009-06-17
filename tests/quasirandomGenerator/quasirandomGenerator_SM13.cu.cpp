# 1 "/tmp/tmpxft_00005971_00000000-4_quasirandomGenerator_SM13.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00005971_00000000-4_quasirandomGenerator_SM13.cudafe1.cpp"
# 1 "quasirandomGenerator_SM13.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 80 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 1 3
# 53 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 54 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 90 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration = 1,
  cudaErrorMemoryAllocation = 2,
  cudaErrorInitializationError = 3,
  cudaErrorLaunchFailure = 4,
  cudaErrorPriorLaunchFailure = 5,
  cudaErrorLaunchTimeout = 6,
  cudaErrorLaunchOutOfResources = 7,
  cudaErrorInvalidDeviceFunction = 8,
  cudaErrorInvalidConfiguration = 9,
  cudaErrorInvalidDevice = 10,
  cudaErrorInvalidValue = 11,
  cudaErrorInvalidPitchValue = 12,
  cudaErrorInvalidSymbol = 13,
  cudaErrorMapBufferObjectFailed = 14,
  cudaErrorUnmapBufferObjectFailed = 15,
  cudaErrorInvalidHostPointer = 16,
  cudaErrorInvalidDevicePointer = 17,
  cudaErrorInvalidTexture = 18,
  cudaErrorInvalidTextureBinding = 19,
  cudaErrorInvalidChannelDescriptor = 20,
  cudaErrorInvalidMemcpyDirection = 21,
  cudaErrorAddressOfConstant = 22,
  cudaErrorTextureFetchFailed = 23,
  cudaErrorTextureNotBound = 24,
  cudaErrorSynchronizationError = 25,
  cudaErrorInvalidFilterSetting = 26,
  cudaErrorInvalidNormSetting = 27,
  cudaErrorMixedDeviceExecution = 28,
  cudaErrorCudartUnloading = 29,
  cudaErrorUnknown = 30,
  cudaErrorNotYetImplemented = 31,
  cudaErrorMemoryValueTooLarge = 32,
  cudaErrorInvalidResourceHandle = 33,
  cudaErrorNotReady = 34,
  cudaErrorInsufficientDriver = 35,
  cudaErrorSetOnActiveProcess = 36,
  cudaErrorNoDevice = 38,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};





struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};





struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};





struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaFuncAttributes
{
   size_t sharedSizeBytes;
   size_t constSizeBytes;
   size_t localSizeBytes;
   int maxThreadsPerBlock;
   int numRegs;
   int __cudaReserved[8];
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};






struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int __cudaReserved[36];
};
# 318 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef int cudaStream_t;





typedef int cudaEvent_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 54 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 54 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct short2
{
  short x, y;
};


struct ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 55 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 80 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern "C" {
# 89 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 102 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);

extern cudaError_t cudaHostAlloc(void **pHost, size_t bytes, unsigned int flags);
extern cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags);
# 120 "/usr/local/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *devPtr, int value, size_t count);
extern cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);
extern cudaError_t cudaSetValidDevices(int *device_arr, int len);
extern cudaError_t cudaSetDeviceFlags( int flags );







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTexture2D(size_t *offset,const struct textureReference *texref,const void *devPtr, const struct cudaChannelFormatDesc *desc,size_t width, size_t height, size_t pitch);
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *entry);
extern cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const char *func);







extern cudaError_t cudaStreamCreate(cudaStream_t *pStream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, int flags);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);







extern cudaError_t cudaDriverGetVersion(int *driverVersion);
extern cudaError_t cudaRuntimeGetVersion(int *runtimeVersion);


}
# 81 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 82 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 90 "/usr/local/cuda/bin/../include/driver_types.h"
# 138 "/usr/local/cuda/bin/../include/driver_types.h"
# 150 "/usr/local/cuda/bin/../include/driver_types.h"
# 163 "/usr/local/cuda/bin/../include/driver_types.h"
# 169 "/usr/local/cuda/bin/../include/driver_types.h"
# 181 "/usr/local/cuda/bin/../include/driver_types.h"
# 193 "/usr/local/cuda/bin/../include/driver_types.h"
# 204 "/usr/local/cuda/bin/../include/driver_types.h"
# 215 "/usr/local/cuda/bin/../include/driver_types.h"
# 233 "/usr/local/cuda/bin/../include/driver_types.h"
# 247 "/usr/local/cuda/bin/../include/driver_types.h"
# 259 "/usr/local/cuda/bin/../include/driver_types.h"
# 318 "/usr/local/cuda/bin/../include/driver_types.h"
# 324 "/usr/local/cuda/bin/../include/driver_types.h"
# 330 "/usr/local/cuda/bin/../include/driver_types.h"
# 54 "/usr/local/cuda/bin/../include/texture_types.h"
# 61 "/usr/local/cuda/bin/../include/texture_types.h"
# 68 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 54 "/usr/local/cuda/bin/../include/vector_types.h"
# 60 "/usr/local/cuda/bin/../include/vector_types.h"
# 66 "/usr/local/cuda/bin/../include/vector_types.h"
# 72 "/usr/local/cuda/bin/../include/vector_types.h"
# 78 "/usr/local/cuda/bin/../include/vector_types.h"
# 84 "/usr/local/cuda/bin/../include/vector_types.h"
# 90 "/usr/local/cuda/bin/../include/vector_types.h"
# 96 "/usr/local/cuda/bin/../include/vector_types.h"
# 102 "/usr/local/cuda/bin/../include/vector_types.h"
# 108 "/usr/local/cuda/bin/../include/vector_types.h"
# 114 "/usr/local/cuda/bin/../include/vector_types.h"
# 120 "/usr/local/cuda/bin/../include/vector_types.h"
# 126 "/usr/local/cuda/bin/../include/vector_types.h"
# 132 "/usr/local/cuda/bin/../include/vector_types.h"
# 138 "/usr/local/cuda/bin/../include/vector_types.h"
# 144 "/usr/local/cuda/bin/../include/vector_types.h"
# 150 "/usr/local/cuda/bin/../include/vector_types.h"
# 156 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 168 "/usr/local/cuda/bin/../include/vector_types.h"
# 174 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 186 "/usr/local/cuda/bin/../include/vector_types.h"
# 192 "/usr/local/cuda/bin/../include/vector_types.h"
# 198 "/usr/local/cuda/bin/../include/vector_types.h"
# 204 "/usr/local/cuda/bin/../include/vector_types.h"
# 216 "/usr/local/cuda/bin/../include/vector_types.h"
# 228 "/usr/local/cuda/bin/../include/vector_types.h"
# 262 "/usr/local/cuda/bin/../include/vector_types.h"
# 268 "/usr/local/cuda/bin/../include/vector_types.h"
# 274 "/usr/local/cuda/bin/../include/vector_types.h"
# 280 "/usr/local/cuda/bin/../include/vector_types.h"
# 286 "/usr/local/cuda/bin/../include/vector_types.h"
# 292 "/usr/local/cuda/bin/../include/vector_types.h"
# 298 "/usr/local/cuda/bin/../include/vector_types.h"
# 304 "/usr/local/cuda/bin/../include/vector_types.h"
# 310 "/usr/local/cuda/bin/../include/vector_types.h"
# 316 "/usr/local/cuda/bin/../include/vector_types.h"
# 328 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 332 "/usr/local/cuda/bin/../include/vector_types.h"
# 334 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 338 "/usr/local/cuda/bin/../include/vector_types.h"
# 340 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 344 "/usr/local/cuda/bin/../include/vector_types.h"
# 346 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 350 "/usr/local/cuda/bin/../include/vector_types.h"
# 352 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 356 "/usr/local/cuda/bin/../include/vector_types.h"
# 358 "/usr/local/cuda/bin/../include/vector_types.h"
# 360 "/usr/local/cuda/bin/../include/vector_types.h"
# 362 "/usr/local/cuda/bin/../include/vector_types.h"
# 364 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 419 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 89 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 102 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
extern "C" cudaError_t cudaMallocHost(void **, size_t);
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
extern "C" cudaError_t cudaFree(void *);
extern "C" cudaError_t cudaFreeHost(void *);
extern "C" cudaError_t cudaFreeArray(cudaArray *);

extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 120 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 137 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 152 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 161 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 170 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
extern "C" cudaError_t cudaSetDevice(int);
extern "C" cudaError_t cudaGetDevice(int *);
extern "C" cudaError_t cudaSetValidDevices(int *, int);
extern "C" cudaError_t cudaSetDeviceFlags(int);
# 184 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 197 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 206 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
extern "C" const char *cudaGetErrorString(cudaError_t);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
extern "C" cudaError_t cudaLaunch(const char *);
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 226 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, int);
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 251 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 260 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
extern "C" cudaError_t cudaThreadSynchronize();
# 269 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
{
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
{
auto int e = (((int)sizeof(char)) * 8);




return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);

}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}
# 337 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
}
# 54 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
{
auto cudaPitchedPtr s;

(s.ptr) = d;
(s.pitch) = p;
(s.xsize) = xsz;
(s.ysize) = ysz;

return s;
}

static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
{
auto cudaPos p;

(p.x) = x;
(p.y) = y;
(p.z) = z;

return p;
}

static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
{
auto cudaExtent e;

(e.width) = w;
(e.height) = h;
(e.depth) = d;

return e;
}
# 54 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
{
auto char1 t; (t.x) = x; return t;
}

static inline uchar1 make_uchar1(unsigned char x)
{
auto uchar1 t; (t.x) = x; return t;
}

static inline char2 make_char2(signed char x, signed char y)
{
auto char2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
{
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
}

static inline char3 make_char3(signed char x, signed char y, signed char z)
{
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
{
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
{
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
{
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline short1 make_short1(short x)
{
auto short1 t; (t.x) = x; return t;
}

static inline ushort1 make_ushort1(unsigned short x)
{
auto ushort1 t; (t.x) = x; return t;
}

static inline short2 make_short2(short x, short y)
{
auto short2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
{
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
}

static inline short3 make_short3(short x, short y, short z)
{
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
{
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline short4 make_short4(short x, short y, short z, short w)
{
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
{
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline int1 make_int1(int x)
{
auto int1 t; (t.x) = x; return t;
}

static inline uint1 make_uint1(unsigned x)
{
auto uint1 t; (t.x) = x; return t;
}

static inline int2 make_int2(int x, int y)
{
auto int2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uint2 make_uint2(unsigned x, unsigned y)
{
auto uint2 t; (t.x) = x; (t.y) = y; return t;
}

static inline int3 make_int3(int x, int y, int z)
{
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
{
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline int4 make_int4(int x, int y, int z, int w)
{
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
{
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline long1 make_long1(long x)
{
auto long1 t; (t.x) = x; return t;
}

static inline ulong1 make_ulong1(unsigned long x)
{
auto ulong1 t; (t.x) = x; return t;
}

static inline long2 make_long2(long x, long y)
{
auto long2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
{
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
}
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
{
auto float1 t; (t.x) = x; return t;
}

static inline float2 make_float2(float x, float y)
{
auto float2 t; (t.x) = x; (t.y) = y; return t;
}

static inline float3 make_float3(float x, float y, float z)
{
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline float4 make_float4(float x, float y, float z, float w)
{
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline longlong1 make_longlong1(long long x)
{
auto longlong1 t; (t.x) = x; return t;
}

static inline ulonglong1 make_ulonglong1(unsigned long long x)
{
auto ulonglong1 t; (t.x) = x; return t;
}

static inline longlong2 make_longlong2(long long x, long long y)
{
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
{
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline double1 make_double1(double x)
{
auto double1 t; (t.x) = x; return t;
}

static inline double2 make_double2(double x, double y)
{
auto double2 t; (t.x) = x; (t.y) = y; return t;
}
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
extern "C" { typedef unsigned short __u_short; }
extern "C" { typedef unsigned __u_int; }
extern "C" { typedef unsigned long __u_long; }


extern "C" { typedef signed char __int8_t; }
extern "C" { typedef unsigned char __uint8_t; }
extern "C" { typedef signed short __int16_t; }
extern "C" { typedef unsigned short __uint16_t; }
extern "C" { typedef signed int __int32_t; }
extern "C" { typedef unsigned __uint32_t; }

extern "C" { typedef signed long __int64_t; }
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
extern "C" { typedef unsigned __uid_t; }
extern "C" { typedef unsigned __gid_t; }
extern "C" { typedef unsigned long __ino_t; }
extern "C" { typedef unsigned long __ino64_t; }
extern "C" { typedef unsigned __mode_t; }
extern "C" { typedef unsigned long __nlink_t; }
extern "C" { typedef long __off_t; }
extern "C" { typedef long __off64_t; }
extern "C" { typedef int __pid_t; }
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
extern "C" { typedef long __clock_t; }
extern "C" { typedef unsigned long __rlim_t; }
extern "C" { typedef unsigned long __rlim64_t; }
extern "C" { typedef unsigned __id_t; }
extern "C" { typedef long __time_t; }
extern "C" { typedef unsigned __useconds_t; }
extern "C" { typedef long __suseconds_t; }

extern "C" { typedef int __daddr_t; }
extern "C" { typedef long __swblk_t; }
extern "C" { typedef int __key_t; }


extern "C" { typedef int __clockid_t; }


extern "C" { typedef void *__timer_t; }


extern "C" { typedef long __blksize_t; }




extern "C" { typedef long __blkcnt_t; }
extern "C" { typedef long __blkcnt64_t; }


extern "C" { typedef unsigned long __fsblkcnt_t; }
extern "C" { typedef unsigned long __fsblkcnt64_t; }


extern "C" { typedef unsigned long __fsfilcnt_t; }
extern "C" { typedef unsigned long __fsfilcnt64_t; }

extern "C" { typedef long __ssize_t; }



extern "C" { typedef __off64_t __loff_t; }
extern "C" { typedef __quad_t *__qaddr_t; }
extern "C" { typedef char *__caddr_t; }


extern "C" { typedef long __intptr_t; }


extern "C" { typedef unsigned __socklen_t; }
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {

__time_t tv_sec;
long tv_nsec;
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {

int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;


long tm_gmtoff;
const char *tm_zone;




}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {

timespec it_interval;
timespec it_value;
}; }


struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" time_t time(time_t *) throw();


extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));



extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {


struct locale_data *__locales[13];


const unsigned short *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;


const char *__names[13];
} *__locale_t; }
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();




extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();



extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();




extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();


extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();



extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
extern "C" { extern int __daylight; }
extern "C" { extern long __timezone; }




extern "C" { extern char *tzname[2]; }



extern "C" void tzset() throw();



extern "C" { extern int daylight; }
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();


extern "C" time_t timelocal(tm *) throw();


extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);




extern "C" int clock_getres(clockid_t, timespec *) throw();


extern "C" int clock_gettime(clockid_t, timespec *) throw();


extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);




extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();




extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();




extern "C" int timer_delete(timer_t) throw();


extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();




extern "C" int timer_gettime(timer_t, itimerspec *) throw();



extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" { extern inline __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" { extern inline void *memmove(void *, const void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" { extern inline __attribute__((__weak__)) void *memset(void *, int, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));



extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" { extern inline char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" { extern inline char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));


extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));



extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));


extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));


extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));


extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));



extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));




extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();




extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();


extern "C" { extern inline void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();



extern "C" { extern inline void bcopy(const void *, void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" { extern inline void bzero(void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" char *index(const char *, int) throw() __attribute__((__pure__));



extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));




extern "C" int ffs(int) throw() __attribute__((__const__));




extern "C" int ffsl(long) throw() __attribute__((__const__));

extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));



extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" char *strsignal(int) throw();


extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();

extern "C" { extern inline char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();


extern "C" { extern inline char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" char *strfry(char *) throw();


extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 23 "/usr/include/bits/string3.h" 3
extern "C" void __warn_memset_zero_len();
# 49 "/usr/include/bits/string3.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memmove(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___mempcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }
# 78 "/usr/include/bits/string3.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memset(void *__dest, int __ch, size_t __len) throw()
{
if ((__builtin_constant_p(__len)) && (__len == (0)))
{
__warn_memset_zero_len();
return __dest;
}
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void bcopy(const void *__restrict__ __src, void *__restrict__ __dest, size_t __len) throw()

{
(void)__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void bzero(void *__dest, size_t __len) throw()
{
(void)__builtin___memset_chk(__dest, '\000', __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___stpcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()

{
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
} }


extern "C" char *__stpncpy_chk(char *, const char *, size_t, size_t) throw();

extern "C" char *__stpncpy_alias(char *, const char *, size_t) throw() __asm__("stpncpy");




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *stpncpy(char *__dest, const char *__src, size_t __n) throw()
{
if ((__builtin_object_size(__dest, 2 > 1) != ((size_t)(-1))) && ((!(__builtin_constant_p(__n))) || (__n <= __builtin_object_size(__dest, 2 > 1)))) {

return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }
return __stpncpy_alias(__dest, __src, __n);
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()

{
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
} }
# 56 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" { extern inline __attribute__((__weak__)) void *memset(void *, int, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 65 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int min(int, int);

extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fminf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmin(double, double) throw();


extern "C" __attribute__((__weak__)) int max(int, int);

extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double sin(double) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw();

extern "C" __attribute__((__weak__)) float cosf(float) throw();


extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();

extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();


extern "C" __attribute__((__weak__)) double tan(double) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw();

extern "C" __attribute__((__weak__)) float sqrtf(float) throw();


extern "C" __attribute__((__weak__)) double rsqrt(double);

extern "C" __attribute__((__weak__)) float rsqrtf(float);


extern "C" __attribute__((__weak__)) double exp2(double) throw();

extern "C" __attribute__((__weak__)) float exp2f(float) throw();


extern "C" __attribute__((__weak__)) double exp10(double) throw();

extern "C" __attribute__((__weak__)) float exp10f(float) throw();


extern "C" __attribute__((__weak__)) double expm1(double) throw();

extern "C" __attribute__((__weak__)) float expm1f(float) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw();

extern "C" __attribute__((__weak__)) float log2f(float) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw();

extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) double log(double) throw();

extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw();

extern "C" __attribute__((__weak__)) float log1pf(float) throw();


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double exp(double) throw();

extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) double cosh(double) throw();

extern "C" __attribute__((__weak__)) float coshf(float) throw();


extern "C" __attribute__((__weak__)) double sinh(double) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw();


extern "C" __attribute__((__weak__)) double tanh(double) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw();


extern "C" __attribute__((__weak__)) double acosh(double) throw();

extern "C" __attribute__((__weak__)) float acoshf(float) throw();


extern "C" __attribute__((__weak__)) double asinh(double) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw();


extern "C" __attribute__((__weak__)) double atanh(double) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();

extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw();

extern "C" __attribute__((__weak__)) float logbf(float) throw();


extern "C" __attribute__((__weak__)) int ilogb(double) throw();

extern "C" __attribute__((__weak__)) int ilogbf(float) throw();


extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();

extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();


extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();

extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();

extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) long lround(double) throw();

extern "C" __attribute__((__weak__)) long lroundf(float) throw();


extern "C" __attribute__((__weak__)) long long llround(double) throw();

extern "C" __attribute__((__weak__)) long long llroundf(float) throw();


extern "C" __attribute__((__weak__)) double rint(double) throw();

extern "C" __attribute__((__weak__)) float rintf(float) throw();


extern "C" __attribute__((__weak__)) long lrint(double) throw();

extern "C" __attribute__((__weak__)) long lrintf(float) throw();


extern "C" __attribute__((__weak__)) long long llrint(double) throw();

extern "C" __attribute__((__weak__)) long long llrintf(float) throw();


extern "C" __attribute__((__weak__)) double nearbyint(double) throw();

extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();


extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fdim(double, double) throw();

extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) double atan2(double, double) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) double atan(double) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw();


extern "C" __attribute__((__weak__)) double asin(double) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw();


extern "C" __attribute__((__weak__)) double acos(double) throw();

extern "C" __attribute__((__weak__)) float acosf(float) throw();


extern "C" __attribute__((__weak__)) double hypot(double, double) throw();

extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();


extern "C" __attribute__((__weak__)) double cbrt(double) throw();

extern "C" __attribute__((__weak__)) float cbrtf(float) throw();


extern "C" __attribute__((__weak__)) double pow(double, double) throw();

extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw();

extern "C" __attribute__((__weak__)) float modff(float, float *) throw();


extern "C" __attribute__((__weak__)) double fmod(double, double) throw();

extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();


extern "C" __attribute__((__weak__)) double remainder(double, double) throw();

extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();


extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();

extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();


extern "C" __attribute__((__weak__)) double erf(double) throw();

extern "C" __attribute__((__weak__)) float erff(float) throw();


extern "C" __attribute__((__weak__)) double erfinv(double) throw();

extern "C" __attribute__((__weak__)) float erfinvf(float) throw();


extern "C" __attribute__((__weak__)) double erfc(double) throw();

extern "C" __attribute__((__weak__)) float erfcf(float) throw();


extern "C" __attribute__((__weak__)) double erfcinv(double) throw();

extern "C" __attribute__((__weak__)) float erfcinvf(float) throw();


extern "C" __attribute__((__weak__)) double lgamma(double) throw();

extern "C" __attribute__((__weak__)) float lgammaf(float) throw();


extern "C" __attribute__((__weak__)) double tgamma(double) throw();

extern "C" __attribute__((__weak__)) float tgammaf(float) throw();


extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));

extern "C" { extern inline __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" { extern inline __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }


extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();

extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();

extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();

extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();

extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();

extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();

extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();




extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();

extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();

extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();




extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();

extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();

extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();


extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();




extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();

extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();




extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));


extern "C" int finite(double) throw() __attribute__((__const__));


extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();



extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));



extern "C" int isnan(double) throw() __attribute__((__const__));


extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));

extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();



extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();



extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();




extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();



extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();



extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();



extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();



extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();


extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();



extern "C" int __fpclassify(double) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) float cosf(float) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();




extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();




extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();




extern "C" __attribute__((__weak__)) float exp10f(float) throw();

extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();


extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();


extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();


extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();




extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));


extern "C" int finitef(float) throw() __attribute__((__const__));


extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();



extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));



extern "C" int isnanf(float) throw() __attribute__((__const__));


extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();


extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));

extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();



extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();



extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();




extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();



extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();



extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();



extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();



extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();


extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();



extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();

extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();

extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();

extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();


extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();

extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();

extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();




extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();

extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();

extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();




extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();

extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();

extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();


extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();


extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();


extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();


extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();


extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();




extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();

extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();


extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();


extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();


extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();


extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));


extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));


extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));


extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();




extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));


extern "C" int finitel(long double) throw() __attribute__((__const__));


extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();



extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));



extern "C" int isnanl(long double) throw() __attribute__((__const__));


extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();


extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));

extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));



extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();



extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();



extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();




extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();



extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();



extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));



extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));




extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();



extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();



extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();


extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();


extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();



extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL

};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_
} _LIB_VERSION_TYPE; }




extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {




int type;
char *name;
double arg1;
double arg2;
double retval;
}; }


extern "C" int matherr(__exception *) throw();
# 36 "/usr/include/bits/mathinline.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw()
{
auto union { float __f; int __i; } __u = {__f: __x};
return (__u.__i) < 0;
} }

extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbit(double __x) throw()
{
auto union { double __d; int __i[2]; } __u = {__d: __x};
return ((__u.__i)[1]) < 0;
} }

extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw()
{
auto union { long double __l; int __i[3]; } __u = {__l: __x};
return (((__u.__i)[2]) & 32768) != 0;
} }
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {

int w_status;

struct {

unsigned __w_termsig:7;
unsigned __w_coredump:1;
unsigned __w_retcode:8;
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;

struct {

unsigned __w_stopval:8;
unsigned __w_stopsig:8;
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct div_t {
int quot;
int rem;
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
long quot;
long rem;
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
long long quot;
long long rem;
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();




extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }
# 158 "/usr/include/stdlib.h" 3
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();


extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();



extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();



extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();




extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 279 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) double atof(const char *__nptr) throw()
{
return strtod(__nptr, (char **)__null);
} }

extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) int atoi(const char *__nptr) throw()
{
return (int)strtol(__nptr, (char **)__null, 10);
} }

extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) long atol(const char *__nptr) throw()
{
return strtol(__nptr, (char **)__null, 10);
} }
# 298 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) long long atoll(const char *__nptr) throw()
{
return strtoll(__nptr, (char **)__null, 10);
} }
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();


extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
extern "C" { typedef __u_short u_short; }
extern "C" { typedef __u_int u_int; }
extern "C" { typedef __u_long u_long; }
extern "C" { typedef __quad_t quad_t; }
extern "C" { typedef __u_quad_t u_quad_t; }
extern "C" { typedef __fsid_t fsid_t; }




extern "C" { typedef __loff_t loff_t; }



extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }




extern "C" { typedef __dev_t dev_t; }




extern "C" { typedef __gid_t gid_t; }




extern "C" { typedef __mode_t mode_t; }




extern "C" { typedef __nlink_t nlink_t; }




extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }




extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }



extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
extern "C" { typedef unsigned short ushort; }
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
extern "C" { typedef short int16_t; }
extern "C" { typedef int int32_t; }
extern "C" { typedef long int64_t; }


extern "C" { typedef unsigned char u_int8_t; }
extern "C" { typedef unsigned short u_int16_t; }
extern "C" { typedef unsigned u_int32_t; }
extern "C" { typedef unsigned long u_int64_t; }

extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {



__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)); }


extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)); }


extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)); }
# 43 "/usr/include/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_major(unsigned long long __dev) throw()
{
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095));
} }


extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_minor(unsigned long long __dev) throw()
{
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255));
} }


extern "C" { inline __attribute__((__gnu_inline__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
{
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32);


} }
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }



extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }



extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
char __size[56];
long __align;
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

__pthread_internal_list *__prev;
__pthread_internal_list *__next;
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
struct __pthread_mutex_s {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
char __size[40];
long __align;
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutexattr_t {
char __size[4];
int __align;
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {

struct {
int __lock;
unsigned __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void *__mutex;
unsigned __nwaiters;
unsigned __broadcast_seq;
} __data;
char __size[48];
long long __align;
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
char __size[4];
int __align;
} pthread_condattr_t; }



extern "C" { typedef unsigned pthread_key_t; }



extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlock_t {


struct {
int __lock;
unsigned __nr_readers;
unsigned __readers_wakeup;
unsigned __writer_wakeup;
unsigned __nr_readers_queued;
unsigned __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;


unsigned __flags;
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
long __align;
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlockattr_t {
char __size[8];
long __align;
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrier_t {
char __size[32];
long __align;
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
char __size[4];
int __align;
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();


extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();




extern "C" char *setstate(char *) throw();
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {

int32_t *fptr;
int32_t *rptr;
int32_t *state;
int rand_type;
int rand_deg;
int rand_sep;
int32_t *end_ptr;
}; }

extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();


extern "C" int srandom_r(unsigned, random_data *) throw();


extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();




extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();

extern "C" void srand(unsigned) throw();




extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
extern "C" double erand48(unsigned short [3]) throw();


extern "C" long lrand48() throw();
extern "C" long nrand48(unsigned short [3]) throw();



extern "C" long mrand48() throw();
extern "C" long jrand48(unsigned short [3]) throw();



extern "C" void srand48(long) throw();
extern "C" unsigned short *seed48(unsigned short [3]) throw();

extern "C" void lcong48(unsigned short [7]) throw();
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {

unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
}; }


extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();

extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();




extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();


extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();


extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));

extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();


extern "C" void free(void *) throw();




extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));




extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));



extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();




extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();



extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" { extern inline char *realpath(const char *__restrict__, char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }


extern "C" { typedef __compar_fn_t comparison_fn_t; }



extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);


extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));

extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();


extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();


extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();



extern "C" { extern inline int wctomb(char *, wchar_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" { extern inline size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();



extern "C" int unlockpt(int) throw();




extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" { extern inline int ptsname_r(int, char *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 24 "/usr/include/bits/stdlib.h" 3
extern "C" char *__realpath_chk(const char *__restrict__, char *__restrict__, size_t) throw();


extern "C" char *__realpath_alias(const char *__restrict__, char *__restrict__) throw() __asm__("realpath");


extern "C" char *__realpath_chk_warn(const char *__restrict__, char *__restrict__, size_t) throw() __asm__("__realpath_chk");
# 38 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw()
{
if (__builtin_object_size(__resolved, 2 > 1) != ((size_t)(-1)))
{

if (__builtin_object_size(__resolved, 2 > 1) < (4096)) {
return __realpath_chk_warn(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); }

return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
}

return __realpath_alias(__name, __resolved);
} }


extern "C" int __ptsname_r_chk(int, char *, size_t, size_t) throw();

extern "C" int __ptsname_r_alias(int, char *, size_t) throw() __asm__("ptsname_r");


extern "C" int __ptsname_r_chk_warn(int, char *, size_t, size_t) throw() __asm__("__ptsname_r_chk");
# 65 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int ptsname_r(int __fd, char *__buf, size_t __buflen) throw()
{
if (__builtin_object_size(__buf, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__buflen))) {
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
if (__buflen > __builtin_object_size(__buf, 2 > 1)) {
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
}
return __ptsname_r_alias(__fd, __buf, __buflen);
} }


extern "C" int __wctomb_chk(char *, wchar_t, size_t) throw();

extern "C" int __wctomb_alias(char *, wchar_t) throw() __asm__("wctomb");



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int wctomb(char *__s, wchar_t __wchar) throw()
{
# 93 "/usr/include/bits/stdlib.h" 3
if ((__builtin_object_size(__s, 2 > 1) != ((size_t)(-1))) && ((16) > __builtin_object_size(__s, 2 > 1))) {
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1)); }
return __wctomb_alias(__s, __wchar);
} }


extern "C" size_t __mbstowcs_chk(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw();


extern "C" size_t __mbstowcs_alias(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __asm__("mbstowcs");



extern "C" size_t __mbstowcs_chk_warn(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw() __asm__("__mbstowcs_chk");
# 114 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t mbstowcs(wchar_t *__restrict__ __dst, const char *__restrict__ __src, size_t __len) throw()

{
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__len))) {
return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }


if (__len > (__builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t))) {
return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }

}
return __mbstowcs_alias(__dst, __src, __len);
} }


extern "C" size_t __wcstombs_chk(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw();


extern "C" size_t __wcstombs_alias(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __asm__("wcstombs");



extern "C" size_t __wcstombs_chk_warn(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw() __asm__("__wcstombs_chk");
# 145 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t wcstombs(char *__restrict__ __dst, const wchar_t *__restrict__ __src, size_t __len) throw()

{
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__len))) {
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
if (__len > __builtin_object_size(__dst, 2 > 1)) {
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
}
return __wcstombs_alias(__dst, __src, __len);
} }
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template<class _Iterator, class _Container> class __normal_iterator;


}

namespace std __attribute__((visibility("default"))) {

struct __true_type { };
struct __false_type { };

template<bool __T0>
struct __truth_type {
typedef __false_type __type; };


template<> struct __truth_type< true> {
typedef __true_type __type; };



template<class _Sp, class _Tp>
struct __traitor {

enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
};



template<class _Sp, class _Tp>
struct __traitand {

enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
};


template<class , class >
struct __are_same {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __are_same< _Tp, _Tp> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_void {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_void< void> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_integer {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< int> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_floating {

enum __cuda___value { __value};
typedef __false_type __type;
};



template<> struct __is_floating< float> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< long double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_pointer {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __is_pointer< _Tp *> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_normal_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Iterator, class _Container>
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {


enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {

};




template<class _Tp>
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {

};




template<class _Tp>
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {

};




template<class _Tp>
struct __is_char {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_char< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_char< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_byte {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_byte< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_move_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


template<bool __T1, class >
struct __enable_if {
};

template<class _Tp>
struct __enable_if< true, _Tp> {
typedef _Tp __type; };



template<bool _Cond, class _Iftrue, class _Iffalse>
struct __conditional_type {
typedef _Iftrue __type; };

template<class _Iftrue, class _Iffalse>
struct __conditional_type< false, _Iftrue, _Iffalse> {
typedef _Iffalse __type; };



template<class _Tp>
struct __add_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __add_unsigned< char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< signed char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< short> {
typedef unsigned short __type; };


template<> struct __add_unsigned< int> {
typedef unsigned __type; };


template<> struct __add_unsigned< long> {
typedef unsigned long __type; };


template<> struct __add_unsigned< long long> {
typedef unsigned long long __type; };



template<> struct __add_unsigned< bool> ;


template<> struct __add_unsigned< wchar_t> ;



template<class _Tp>
struct __remove_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __remove_unsigned< char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned short> {
typedef short __type; };


template<> struct __remove_unsigned< unsigned> {
typedef int __type; };


template<> struct __remove_unsigned< unsigned long> {
typedef long __type; };


template<> struct __remove_unsigned< unsigned long long> {
typedef long long __type; };



template<> struct __remove_unsigned< bool> ;


template<> struct __remove_unsigned< wchar_t> ;



template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }

template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }



template<class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
struct __promote {
typedef double __type; };

template<class _Tp>
struct __promote< _Tp, false> {
typedef _Tp __type; };

template<class _Tp, class _Up>
struct __promote_2 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;


public: typedef __typeof__((__type1() + __type2())) __type;
};

template<class _Tp, class _Up, class _Vp>
struct __promote_3 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;


public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
};

template<class _Tp, class _Up, class _Vp, class _Wp>
struct __promote_4 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;


public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
};

}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {



template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );

template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }


inline double abs(double __x)
{ return __builtin_fabs(__x); }


inline float abs(float __x)
{ return __builtin_fabsf(__x); }


inline long double abs(long double __x)
{ return __builtin_fabsl(__x); }

using ::acos;


inline float acos(float __x)
{ return __builtin_acosf(__x); }


inline long double acos(long double __x)
{ return __builtin_acosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }

using ::asin;


inline float asin(float __x)
{ return __builtin_asinf(__x); }


inline long double asin(long double __x)
{ return __builtin_asinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }

using ::atan;


inline float atan(float __x)
{ return __builtin_atanf(__x); }


inline long double atan(long double __x)
{ return __builtin_atanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }

using ::atan2;


inline float atan2(float __y, float __x)
{ return __builtin_atan2f(__y, __x); }


inline long double atan2(long double __y, long double __x)
{ return __builtin_atan2l(__y, __x); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }

using ::ceil;


inline float ceil(float __x)
{ return __builtin_ceilf(__x); }


inline long double ceil(long double __x)
{ return __builtin_ceill(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }

using ::cos;


inline float cos(float __x)
{ return __builtin_cosf(__x); }


inline long double cos(long double __x)
{ return __builtin_cosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }

using ::cosh;


inline float cosh(float __x)
{ return __builtin_coshf(__x); }


inline long double cosh(long double __x)
{ return __builtin_coshl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }

using ::exp;


inline float exp(float __x)
{ return __builtin_expf(__x); }


inline long double exp(long double __x)
{ return __builtin_expl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }

using ::fabs;


inline float fabs(float __x)
{ return __builtin_fabsf(__x); }


inline long double fabs(long double __x)
{ return __builtin_fabsl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }

using ::floor;


inline float floor(float __x)
{ return __builtin_floorf(__x); }


inline long double floor(long double __x)
{ return __builtin_floorl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }

using ::fmod;


inline float fmod(float __x, float __y)
{ return __builtin_fmodf(__x, __y); }


inline long double fmod(long double __x, long double __y)
{ return __builtin_fmodl(__x, __y); }

using ::frexp;


inline float frexp(float __x, int *__exp)
{ return __builtin_frexpf(__x, __exp); }


inline long double frexp(long double __x, int *__exp)
{ return __builtin_frexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }

using ::ldexp;


inline float ldexp(float __x, int __exp)
{ return __builtin_ldexpf(__x, __exp); }


inline long double ldexp(long double __x, int __exp)
{ return __builtin_ldexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }

using ::log;


inline float log(float __x)
{ return __builtin_logf(__x); }


inline long double log(long double __x)
{ return __builtin_logl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }

using ::log10;


inline float log10(float __x)
{ return __builtin_log10f(__x); }


inline long double log10(long double __x)
{ return __builtin_log10l(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }

using ::modf;


inline float modf(float __x, float *__iptr)
{ return __builtin_modff(__x, __iptr); }


inline long double modf(long double __x, long double *__iptr)
{ return __builtin_modfl(__x, __iptr); }

using ::pow;


inline float pow(float __x, float __y)
{ return __builtin_powf(__x, __y); }


inline long double pow(long double __x, long double __y)
{ return __builtin_powl(__x, __y); }



inline double pow(double __x, int __i)
{ return __builtin_powi(__x, __i); }


inline float pow(float __x, int __n)
{ return __builtin_powif(__x, __n); }


inline long double pow(long double __x, int __n)
{ return __builtin_powil(__x, __n); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }

using ::sin;


inline float sin(float __x)
{ return __builtin_sinf(__x); }


inline long double sin(long double __x)
{ return __builtin_sinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }

using ::sinh;


inline float sinh(float __x)
{ return __builtin_sinhf(__x); }


inline long double sinh(long double __x)
{ return __builtin_sinhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }

using ::sqrt;


inline float sqrt(float __x)
{ return __builtin_sqrtf(__x); }


inline long double sqrt(long double __x)
{ return __builtin_sqrtl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }

using ::tan;


inline float tan(float __x)
{ return __builtin_tanf(__x); }


inline long double tan(long double __x)
{ return __builtin_tanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }

using ::tanh;


inline float tanh(float __x)
{ return __builtin_tanhf(__x); }


inline long double tanh(long double __x)
{ return __builtin_tanhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }

}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template < typename _Tp >
    inline int
    __capture_fpclassify ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __fpclassifyf ( __f ) : sizeof ( __f ) == sizeof ( double ) ? __fpclassify ( __f ) : __fpclassifyl ( __f ) ); }

}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return :: __gnu_cxx :: __capture_fpclassify ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }

}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }

}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {

using ::ptrdiff_t;
using ::size_t;

}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {

using ::div_t;
using ::ldiv_t;

using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::getenv;
using ::labs;
using ::ldiv;
using ::malloc;

using ::mblen;
using ::mbstowcs;
using ::mbtowc;

using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::system;

using ::wcstombs;
using ::wctomb;



inline long abs(long __i) { return labs(__i); }


inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }

}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;



inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }


using ::llabs;


inline lldiv_t div(long long __n, long long __d)
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }

using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
using ::strtoll;
using ::strtoull;

using ::strtof;
using ::strtold;

}

namespace std __attribute__((visibility("default"))) {


using __gnu_cxx::lldiv_t;

using __gnu_cxx::_Exit;
using __gnu_cxx::abs;

using __gnu_cxx::llabs;
using __gnu_cxx::div;
using __gnu_cxx::lldiv;

using __gnu_cxx::atoll;
using __gnu_cxx::strtof;
using __gnu_cxx::strtoll;
using __gnu_cxx::strtoull;
using __gnu_cxx::strtold;

}
# 434 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" { extern inline __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }

extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 448 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 473 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {

extern inline long long abs(long long) __attribute__((visibility("default")));
}

namespace std {

template<class T> extern inline T __pow_helper(T, int);
template<class T> extern inline T __cmath_power(T, unsigned);
}

using std::abs;
using std::fabs;
using std::ceil;
using std::floor;
using std::sqrt;
using std::pow;
using std::log;
using std::log10;
using std::fmod;
using std::modf;
using std::exp;
using std::frexp;
using std::ldexp;
using std::asin;
using std::sin;
using std::sinh;
using std::acos;
using std::cos;
using std::cosh;
using std::atan;
using std::atan2;
using std::tan;
using std::tanh;
# 560 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {


extern inline long abs(long) __attribute__((visibility("default")));
extern inline float abs(float) __attribute__((visibility("default")));
extern inline double abs(double) __attribute__((visibility("default")));
extern inline float fabs(float) __attribute__((visibility("default")));
extern inline float ceil(float) __attribute__((visibility("default")));
extern inline float floor(float) __attribute__((visibility("default")));
extern inline float sqrt(float) __attribute__((visibility("default")));
extern inline float pow(float, float) __attribute__((visibility("default")));
extern inline float pow(float, int) __attribute__((visibility("default")));
extern inline double pow(double, int) __attribute__((visibility("default")));
extern inline float log(float) __attribute__((visibility("default")));
extern inline float log10(float) __attribute__((visibility("default")));
extern inline float fmod(float, float) __attribute__((visibility("default")));
extern inline float modf(float, float *) __attribute__((visibility("default")));
extern inline float exp(float) __attribute__((visibility("default")));
extern inline float frexp(float, int *) __attribute__((visibility("default")));
extern inline float ldexp(float, int) __attribute__((visibility("default")));
extern inline float asin(float) __attribute__((visibility("default")));
extern inline float sin(float) __attribute__((visibility("default")));
extern inline float sinh(float) __attribute__((visibility("default")));
extern inline float acos(float) __attribute__((visibility("default")));
extern inline float cos(float) __attribute__((visibility("default")));
extern inline float cosh(float) __attribute__((visibility("default")));
extern inline float atan(float) __attribute__((visibility("default")));
extern inline float atan2(float, float) __attribute__((visibility("default")));
extern inline float tan(float) __attribute__((visibility("default")));
extern inline float tanh(float) __attribute__((visibility("default")));


}


static inline float logb(float a)
{
return logbf(a);
}

static inline int ilogb(float a)
{
return ilogbf(a);
}

static inline float scalbn(float a, int b)
{
return scalbnf(a, b);
}

static inline float scalbln(float a, long b)
{
return scalblnf(a, b);
}

static inline float exp2(float a)
{
return exp2f(a);
}

static inline float exp10(float a)
{
return exp10f(a);
}

static inline float expm1(float a)
{
return expm1f(a);
}

static inline float log2(float a)
{
return log2f(a);
}

static inline float log1p(float a)
{
return log1pf(a);
}

static inline float rsqrt(float a)
{
return rsqrtf(a);
}

static inline float acosh(float a)
{
return acoshf(a);
}

static inline float asinh(float a)
{
return asinhf(a);
}

static inline float atanh(float a)
{
return atanhf(a);
}

static inline float hypot(float a, float b)
{
return hypotf(a, b);
}

static inline float cbrt(float a)
{
return cbrtf(a);
}

static inline void sincos(float a, float *sptr, float *cptr)
{
sincosf(a, sptr, cptr);
}

static inline float erf(float a)
{
return erff(a);
}

static inline float erfinv(float a)
{
return erfinvf(a);
}

static inline float erfc(float a)
{
return erfcf(a);
}

static inline float erfcinv(float a)
{
return erfcinvf(a);
}

static inline float lgamma(float a)
{
return lgammaf(a);
}

static inline float tgamma(float a)
{
return tgammaf(a);
}

static inline float copysign(float a, float b)
{
return copysignf(a, b);
}

static inline double copysign(double a, float b)
{
return copysign(a, (double)b);
}

static inline float copysign(float a, double b)
{
return copysignf(a, (float)b);
}

static inline float nextafter(float a, float b)
{
return nextafterf(a, b);
}

static inline float remainder(float a, float b)
{
return remainderf(a, b);
}

static inline float remquo(float a, float b, int *quo)
{
return remquof(a, b, quo);
}

static inline float round(float a)
{
return roundf(a);
}

static inline long lround(float a)
{
return lroundf(a);
}

static inline long long llround(float a)
{
return llroundf(a);
}

static inline float trunc(float a)
{
return truncf(a);
}

static inline float rint(float a)
{
return rintf(a);
}

static inline long lrint(float a)
{
return lrintf(a);
}

static inline long long llrint(float a)
{
return llrintf(a);
}

static inline float nearbyint(float a)
{
return nearbyintf(a);
}

static inline float fdim(float a, float b)
{
return fdimf(a, b);
}

static inline float fma(float a, float b, float c)
{
return fmaf(a, b, c);
}

static inline unsigned min(unsigned a, unsigned b)
{
return umin(a, b);
}

static inline unsigned min(int a, unsigned b)
{
return umin((unsigned)a, b);
}

static inline unsigned min(unsigned a, int b)
{
return umin(a, (unsigned)b);
}

static inline float min(float a, float b)
{
return fminf(a, b);
}

static inline double min(double a, double b)
{
return fmin(a, b);
}

static inline double min(float a, double b)
{
return fmin((double)a, b);
}

static inline double min(double a, float b)
{
return fmin(a, (double)b);
}

static inline unsigned max(unsigned a, unsigned b)
{
return umax(a, b);
}

static inline unsigned max(int a, unsigned b)
{
return umax((unsigned)a, b);
}

static inline unsigned max(unsigned a, int b)
{
return umax(a, (unsigned)b);
}

static inline float max(float a, float b)
{
return fmaxf(a, b);
}

static inline double max(double a, double b)
{
return fmax(a, b);
}

static inline double max(float a, double b)
{
return fmax((double)a, b);
}

static inline double max(double a, float b)
{
return fmax(a, (double)b);
}
# 59 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
struct texture : public textureReference {

texture(int norm = 0, cudaTextureFilterMode
fMode = cudaFilterModePoint, cudaTextureAddressMode
aMode = cudaAddressModeClamp)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = cudaCreateChannelDesc< T> ();
}

texture(int norm, cudaTextureFilterMode
fMode, cudaTextureAddressMode
aMode, cudaChannelFormatDesc
desc)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = desc;
}
};
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
# 98 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaSetupArgument(T
arg, size_t
offset)

{
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
}
# 120 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbol(const T &
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
}

static inline cudaError_t cudaMemcpyToSymbolAsync(char *
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbolAsync(const T &
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
}
# 174 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
dst, char *
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbol(void *
dst, const T &
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
}

static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
dst, char *
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbolAsync(void *
dst, const T &
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
}

static inline cudaError_t cudaGetSymbolAddress(void **
devPtr, char *
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
}
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolAddress(void **
devPtr, const T &
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
}
# 267 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
size, char *
symbol)

{
return cudaGetSymbolSize(size, (const char *)symbol);
}
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolSize(size_t *
size, const T &
symbol)

{
return cudaGetSymbolSize(size, (const char *)(&symbol));
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
}
# 396 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
}
# 451 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture2D(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
width, size_t
height, size_t
pitch)

{
return cudaBindTexture2D(offset, &tex, devPtr, (&desc), width, height, pitch);
}
# 493 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array, const cudaChannelFormatDesc &
desc)

{
return cudaBindTextureToArray(&tex, array, (&desc));
}
# 530 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array)

{
auto cudaChannelFormatDesc desc;
auto cudaError_t err = cudaGetChannelDesc(&desc, array);

return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
}
# 568 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaUnbindTexture(const texture< T, dim, readMode> &
tex)

{
return cudaUnbindTexture(&tex);
}
# 607 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaGetTextureAlignmentOffset(size_t *
offset, const texture< T, dim, readMode> &
tex)

{
return cudaGetTextureAlignmentOffset(offset, &tex);
}
# 649 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaLaunch(T *
entry)

{
return cudaLaunch((const char *)entry);
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;

union {

unsigned __wch;



char __wchb[4];
} __value;
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
__off_t __pos;
__mbstate_t __state;
} _G_fpos_t; }




extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
__off64_t __pos;
__mbstate_t __state;
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
extern "C" { typedef int _G_int32_t; }
extern "C" { typedef unsigned short _G_uint16_t; }
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
_IO_marker *_next;
_IO_FILE *_sbuf;



int _pos;
# 203 "/usr/include/libio.h" 3
}; }


enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
int _flags;




char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;

char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;

_IO_marker *_markers;

_IO_FILE *_chain;

int _fileno;



int _flags2;

__off_t _old_offset;



unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];



_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
void *__pad2;
void *__pad3;
void *__pad4;
size_t __pad5;

int _mode;

char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];

}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;

extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }


extern "C" { typedef int __io_close_fn(void *); }




extern "C" { typedef __io_read_fn cookie_read_function_t; }
extern "C" { typedef __io_write_fn cookie_write_function_t; }
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
__io_read_fn *read;
__io_write_fn *write;
__io_seek_fn *seek;
__io_close_fn *close;
} _IO_cookie_io_functions_t; }
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }

struct _IO_cookie_file;


extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
extern "C" int __uflow(_IO_FILE *);
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
extern "C" int _IO_putc(int, _IO_FILE *);
extern "C" int _IO_feof(_IO_FILE *) throw();
extern "C" int _IO_ferror(_IO_FILE *) throw();

extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);

extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);

extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);

extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);

extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
extern "C" { extern _IO_FILE *stdout; }
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();

extern "C" int rename(const char *, const char *) throw();




extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();



extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);




extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);

extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();




extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();



extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();



extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" { extern inline int fprintf(FILE *__restrict__, const char *__restrict__, ...) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 337 "/usr/include/stdio.h" 3
extern "C" { extern inline int printf(const char *__restrict__, ...) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }

extern "C" { extern inline int sprintf(char *__restrict__, const char *__restrict__, ...) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 346 "/usr/include/stdio.h" 3
extern "C" { extern inline int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 352 "/usr/include/stdio.h" 3
extern "C" { extern inline int vprintf(const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }

extern "C" { extern inline int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 361 "/usr/include/stdio.h" 3
extern "C" { extern inline int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" { extern inline int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 374 "/usr/include/stdio.h" 3
extern "C" { extern inline int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int __asprintf(char **__restrict__, const char *__restrict__, ...) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int asprintf(char **__restrict__, const char *__restrict__, ...) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 390 "/usr/include/stdio.h" 3
extern "C" { extern inline int vdprintf(int, const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int dprintf(int, const char *__restrict__, ...) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);

extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);



extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" { extern inline int getchar() __attribute__((__gnu_inline__)); }
# 528 "/usr/include/stdio.h" 3
extern "C" { extern inline int getc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
extern "C" { extern inline int getchar_unlocked() __attribute__((__gnu_inline__)); }
# 539 "/usr/include/stdio.h" 3
extern "C" { extern inline int fgetc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" { extern inline int putchar(int) __attribute__((__gnu_inline__)); }
# 572 "/usr/include/stdio.h" 3
extern "C" { extern inline int fputc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
# 580 "/usr/include/stdio.h" 3
extern "C" { extern inline int putc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
extern "C" { extern inline int putchar_unlocked(int) __attribute__((__gnu_inline__)); }
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);


extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" { extern inline char *fgets(char *__restrict__, int, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 608 "/usr/include/stdio.h" 3
extern "C" { extern inline char *gets(char *) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 618 "/usr/include/stdio.h" 3
extern "C" { extern inline char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);


extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" { extern inline __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__) __attribute__((__gnu_inline__)); }
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" { extern inline size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" { extern inline size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }

extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);




extern "C" long ftell(FILE *);




extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);




extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);




extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
extern "C" __off64_t ftello64(FILE *);
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
extern "C" int fsetpos64(FILE *, const fpos64_t *);




extern "C" void clearerr(FILE *) throw();

extern "C" int feof(FILE *) throw();

extern "C" int ferror(FILE *) throw();




extern "C" void clearerr_unlocked(FILE *) throw();
extern "C" { extern inline int feof_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
extern "C" { extern inline int ferror_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
extern "C" { extern const char *const sys_errlist[]; }


extern "C" { extern int _sys_nerr; }
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();




extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);




struct obstack;


extern "C" { extern inline int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();



extern "C" int ftrylockfile(FILE *) throw();


extern "C" void funlockfile(FILE *) throw();
# 45 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getchar()
{
return _IO_getc(stdin);
} }
# 54 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fgetc_unlocked(FILE *__fp)
{
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
} }
# 64 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getc_unlocked(FILE *__fp)
{
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
} }



extern "C" { inline __attribute__((__gnu_inline__)) int getchar_unlocked()
{
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++)));
} }
# 80 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putchar(int __c)
{
return _IO_putc(__c, stdout);
} }
# 89 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fputc_unlocked(int __c, FILE *__stream)
{
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
} }
# 99 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putc_unlocked(int __c, FILE *__stream)
{
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
} }



extern "C" { inline __attribute__((__gnu_inline__)) int putchar_unlocked(int __c)
{
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c));
} }
# 116 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream)
{
return __getdelim(__lineptr, __n, '\n', __stream);
} }
# 126 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int feof_unlocked(FILE *__stream) throw()
{
return ((__stream->_flags) & 16) != 0;
} }



extern "C" { inline __attribute__((__gnu_inline__)) int ferror_unlocked(FILE *__stream) throw()
{
return ((__stream->_flags) & 32) != 0;
} }
# 24 "/usr/include/bits/stdio2.h" 3
extern "C" int __sprintf_chk(char *__restrict__, int, size_t, const char *__restrict__, ...) throw();

extern "C" int __vsprintf_chk(char *__restrict__, int, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 32 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int sprintf(char *__restrict__ __s, const char *__restrict__ __fmt, ...) throw()
{
return __builtin___sprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());

} }
# 44 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vsprintf(char *__restrict__ __s, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);

} }



extern "C" int __snprintf_chk(char *__restrict__, size_t, int, size_t, const char *__restrict__, ...) throw();


extern "C" int __vsnprintf_chk(char *__restrict__, size_t, int, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 62 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int snprintf(char *__restrict__ __s, size_t __n, const char *__restrict__ __fmt, ...) throw()

{
return __builtin___snprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __builtin_va_arg_pack());

} }
# 75 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vsnprintf(char *__restrict__ __s, size_t __n, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);

} }
# 86 "/usr/include/bits/stdio2.h" 3
extern "C" int __fprintf_chk(FILE *__restrict__, int, const char *__restrict__, ...);

extern "C" int __printf_chk(int, const char *__restrict__, ...);
extern "C" int __vfprintf_chk(FILE *__restrict__, int, const char *__restrict__, __gnuc_va_list);

extern "C" int __vprintf_chk(int, const char *__restrict__, __gnuc_va_list);




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int fprintf(FILE *__restrict__ __stream, const char *__restrict__ __fmt, ...)
{
return __fprintf_chk(__stream, 2 - 1, __fmt, __builtin_va_arg_pack());

} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int printf(const char *__restrict__ __fmt, ...)
{
return __printf_chk(2 - 1, __fmt, __builtin_va_arg_pack());
} }
# 115 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vprintf(const char *__restrict__ __fmt, __gnuc_va_list __ap)
{

return __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);



} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vfprintf(FILE *__restrict__ __stream, const char *__restrict__
__fmt, __gnuc_va_list __ap)
{
return __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
} }



extern "C" int __asprintf_chk(char **__restrict__, int, const char *__restrict__, ...) throw();


extern "C" int __vasprintf_chk(char **__restrict__, int, const char *__restrict__, __gnuc_va_list) throw();


extern "C" int __dprintf_chk(int, int, const char *__restrict__, ...);

extern "C" int __vdprintf_chk(int, int, const char *__restrict__, __gnuc_va_list);


extern "C" int __obstack_printf_chk(obstack *__restrict__, int, const char *__restrict__, ...) throw();



extern "C" int __obstack_vprintf_chk(obstack *__restrict__, int, const char *__restrict__, __gnuc_va_list) throw();
# 156 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()
{
return __asprintf_chk(__ptr, 2 - 1, __fmt, __builtin_va_arg_pack());

} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int __asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()

{
return __asprintf_chk(__ptr, 2 - 1, __fmt, __builtin_va_arg_pack());

} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int dprintf(int __fd, const char *__restrict__ __fmt, ...)
{
return __dprintf_chk(__fd, 2 - 1, __fmt, __builtin_va_arg_pack());

} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int obstack_printf(obstack *__restrict__ __obstack, const char *__restrict__ __fmt, ...) throw()

{
return __obstack_printf_chk(__obstack, 2 - 1, __fmt, __builtin_va_arg_pack());

} }
# 196 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vasprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __vasprintf_chk(__ptr, 2 - 1, __fmt, __ap);
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vdprintf(int __fd, const char *__restrict__ __fmt, __gnuc_va_list __ap)
{
return __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int obstack_vprintf(obstack *__restrict__ __obstack, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __obstack_vprintf_chk(__obstack, 2 - 1, __fmt, __ap);

} }
# 220 "/usr/include/bits/stdio2.h" 3
extern "C" char *__gets_chk(char *, size_t);
extern "C" char *__gets_warn(char *) __asm__("gets");




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *gets(char *__str)
{
if (__builtin_object_size(__str, 2 > 1) != ((size_t)(-1))) {
return __gets_chk(__str, __builtin_object_size(__str, 2 > 1)); }
return __gets_warn(__str);
} }

extern "C" char *__fgets_chk(char *__restrict__, size_t, int, FILE *__restrict__);

extern "C" char *__fgets_alias(char *__restrict__, int, FILE *__restrict__) __asm__("fgets");


extern "C" char *__fgets_chk_warn(char *__restrict__, size_t, int, FILE *__restrict__) __asm__("__fgets_chk");
# 245 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *fgets(char *__restrict__ __s, int __n, FILE *__restrict__ __stream)
{
if (__builtin_object_size(__s, 2 > 1) != ((size_t)(-1)))
{
if ((!(__builtin_constant_p(__n))) || (__n <= 0)) {
return __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }

if (((unsigned long)__n) > __builtin_object_size(__s, 2 > 1)) {
return __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }
}
return __fgets_alias(__s, __n, __stream);
} }

extern "C" size_t __fread_chk(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__);


extern "C" size_t __fread_alias(void *__restrict__, size_t, size_t, FILE *__restrict__) __asm__("fread");



extern "C" size_t __fread_chk_warn(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__) __asm__("__fread_chk");
# 274 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t fread(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__
__stream)
{
if (__builtin_object_size(__ptr, 0) != ((size_t)(-1)))
{
if (((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) {


return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }

if ((__size * __n) > __builtin_object_size(__ptr, 0)) {
return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }
}
return __fread_alias(__ptr, __size, __n, __stream);
} }


extern "C" char *__fgets_unlocked_chk(char *__restrict__, size_t, int, FILE *__restrict__);

extern "C" char *__fgets_unlocked_alias(char *__restrict__, int, FILE *__restrict__) __asm__("fgets_unlocked");


extern "C" char *__fgets_unlocked_chk_warn(char *__restrict__, size_t, int, FILE *__restrict__) __asm__("__fgets_unlocked_chk");
# 303 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *fgets_unlocked(char *__restrict__ __s, int __n, FILE *__restrict__ __stream)
{
if (__builtin_object_size(__s, 2 > 1) != ((size_t)(-1)))
{
if ((!(__builtin_constant_p(__n))) || (__n <= 0)) {
return __fgets_unlocked_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }

if (((unsigned long)__n) > __builtin_object_size(__s, 2 > 1)) {
return __fgets_unlocked_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }
}
return __fgets_unlocked_alias(__s, __n, __stream);
} }




extern "C" size_t __fread_unlocked_chk(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__);


extern "C" size_t __fread_unlocked_alias(void *__restrict__, size_t, size_t, FILE *__restrict__) __asm__("fread_unlocked");



extern "C" size_t __fread_unlocked_chk_warn(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__) __asm__("__fread_unlocked_chk");
# 335 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t fread_unlocked(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__
__stream)
{
if (__builtin_object_size(__ptr, 0) != ((size_t)(-1)))
{
if (((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) {


return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }


if ((__size * __n) > __builtin_object_size(__ptr, 0)) {
return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }

}


if ((((__builtin_constant_p(__size)) && (__builtin_constant_p(__n))) && ((__size | __n) < (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) && ((__size * __n) <= (8)))



{
auto size_t __cnt = (__size * __n);
auto char *__cptr = ((char *)__ptr);
if (__cnt == (0)) {
return 0; }

for (; __cnt > (0); --__cnt)
{
auto int __c = ((__builtin_expect((__stream->_IO_read_ptr) >= (__stream->_IO_read_end), 0)) ? __uflow(__stream) : (*((unsigned char *)((__stream->_IO_read_ptr)++))));
if (__c == (-1)) {
break; }
(*(__cptr++)) = __c;
}
return (__cptr - (char *)__ptr) / __size;
}

return __fread_unlocked_alias(__ptr, __size, __n, __stream);
} }
# 62 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }

extern "C" { typedef int CUdevice; }
extern "C" { typedef struct CUctx_st *CUcontext; }
extern "C" { typedef struct CUmod_st *CUmodule; }
extern "C" { typedef struct CUfunc_st *CUfunction; }
extern "C" { typedef struct CUarray_st *CUarray; }
extern "C" { typedef struct CUtexref_st *CUtexref; }
extern "C" { typedef struct CUevent_st *CUevent; }
extern "C" { typedef struct CUstream_st *CUstream; }
# 90 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 82 "/usr/local/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
CU_CTX_SCHED_AUTO,
CU_CTX_SCHED_SPIN,
CU_CTX_SCHED_YIELD,
CU_CTX_SCHED_MASK,
CU_CTX_BLOCKING_SYNC,
CU_CTX_MAP_HOST = 8,
CU_CTX_FLAGS_MASK = 15
} CUctx_flags; }
# 98 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 95 "/usr/local/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
CU_EVENT_DEFAULT,
CU_EVENT_BLOCKING_SYNC
} CUevent_flags; }
# 112 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 103 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
CU_AD_FORMAT_UNSIGNED_INT16,
CU_AD_FORMAT_UNSIGNED_INT32,
CU_AD_FORMAT_SIGNED_INT8 = 8,
CU_AD_FORMAT_SIGNED_INT16,
CU_AD_FORMAT_SIGNED_INT32,
CU_AD_FORMAT_HALF = 16,
CU_AD_FORMAT_FLOAT = 32
} CUarray_format; }
# 121 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 117 "/usr/local/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
CU_TR_ADDRESS_MODE_WRAP,
CU_TR_ADDRESS_MODE_CLAMP,
CU_TR_ADDRESS_MODE_MIRROR
} CUaddress_mode; }
# 129 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 126 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
CU_TR_FILTER_MODE_POINT,
CU_TR_FILTER_MODE_LINEAR
} CUfilter_mode; }
# 158 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 134 "/usr/local/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,

CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
CU_DEVICE_ATTRIBUTE_INTEGRATED,
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE
} CUdevice_attribute; }
# 174 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 163 "/usr/local/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
int maxThreadsPerBlock;
int maxThreadsDim[3];
int maxGridSize[3];
int sharedMemPerBlock;
int totalConstantMemory;
int SIMDWidth;
int memPitch;
int regsPerBlock;
int clockRate;
int textureAlign;
} CUdevprop; }
# 211 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 179 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 185 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 192 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 198 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_NUM_REGS,

CU_FUNC_ATTRIBUTE_MAX
} CUfunction_attribute; }
# 220 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 216 "/usr/local/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
CU_MEMORYTYPE_HOST = 1,
CU_MEMORYTYPE_DEVICE,
CU_MEMORYTYPE_ARRAY
} CUmemorytype; }
# 229 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 225 "/usr/local/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
CU_COMPUTEMODE_DEFAULT,
CU_COMPUTEMODE_EXCLUSIVE,
CU_COMPUTEMODE_PROHIBITED
} CUcomputemode; }
# 308 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 234 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {




CU_JIT_MAX_REGISTERS,
# 251 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 257 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 263 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 270 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 276 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 283 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 289 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 295 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,




CU_JIT_TARGET,
# 306 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY

} CUjit_option; }
# 319 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 313 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {

CU_TARGET_COMPUTE_10,
CU_TARGET_COMPUTE_11,
CU_TARGET_COMPUTE_12,
CU_TARGET_COMPUTE_13
} CUjit_target; }
# 332 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 324 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {


CU_PREFER_PTX,


CU_PREFER_BINARY

} CUjit_fallback; }
# 380 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 343 "/usr/local/cuda/bin/../include/cuda.h"
enum cudaError_enum {

CUDA_SUCCESS,
CUDA_ERROR_INVALID_VALUE,
CUDA_ERROR_OUT_OF_MEMORY,
CUDA_ERROR_NOT_INITIALIZED,
CUDA_ERROR_DEINITIALIZED,

CUDA_ERROR_NO_DEVICE = 100,
CUDA_ERROR_INVALID_DEVICE,

CUDA_ERROR_INVALID_IMAGE = 200,
CUDA_ERROR_INVALID_CONTEXT,
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
CUDA_ERROR_MAP_FAILED = 205,
CUDA_ERROR_UNMAP_FAILED,
CUDA_ERROR_ARRAY_IS_MAPPED,
CUDA_ERROR_ALREADY_MAPPED,
CUDA_ERROR_NO_BINARY_FOR_GPU,
CUDA_ERROR_ALREADY_ACQUIRED,
CUDA_ERROR_NOT_MAPPED,

CUDA_ERROR_INVALID_SOURCE = 300,
CUDA_ERROR_FILE_NOT_FOUND,

CUDA_ERROR_INVALID_HANDLE = 400,

CUDA_ERROR_NOT_FOUND = 500,

CUDA_ERROR_NOT_READY = 600,

CUDA_ERROR_LAUNCH_FAILED = 700,
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
CUDA_ERROR_LAUNCH_TIMEOUT,
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,

CUDA_ERROR_UNKNOWN = 999
} CUresult; }
# 426 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 406 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {

unsigned srcXInBytes;
unsigned srcY;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
unsigned srcPitch;

unsigned dstXInBytes;
unsigned dstY;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
unsigned dstPitch;

unsigned WidthInBytes;
unsigned Height;
} CUDA_MEMCPY2D; }
# 460 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 431 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {

unsigned srcXInBytes;
unsigned srcY;
unsigned srcZ;
unsigned srcLOD;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
void *reserved0;
unsigned srcPitch;
unsigned srcHeight;

unsigned dstXInBytes;
unsigned dstY;
unsigned dstZ;
unsigned dstLOD;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
void *reserved1;
unsigned dstPitch;
unsigned dstHeight;

unsigned WidthInBytes;
unsigned Height;
unsigned Depth;
} CUDA_MEMCPY3D; }
# 473 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 466 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
unsigned Width;
unsigned Height;

CUarray_format Format;

unsigned NumChannels;
} CUDA_ARRAY_DESCRIPTOR; }
# 489 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 479 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
unsigned Width;
unsigned Height;
unsigned Depth;

CUarray_format Format;

unsigned NumChannels;

unsigned Flags;
} CUDA_ARRAY3D_DESCRIPTOR; }
# 528 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);




extern "C" CUresult cuDriverGetVersion(int *);
# 541 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
extern "C" CUresult cuDeviceGetCount(int *);
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 555 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
extern "C" CUresult cuCtxDestroy(CUcontext);
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
extern "C" CUresult cuCtxDetach(CUcontext);
extern "C" CUresult cuCtxPushCurrent(CUcontext);
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
extern "C" CUresult cuCtxGetDevice(CUdevice *);
extern "C" CUresult cuCtxSynchronize();
# 571 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
extern "C" CUresult cuModuleUnload(CUmodule);
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 586 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);

extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 597 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);

extern "C" CUresult cuMemAllocHost(void **, unsigned);
extern "C" CUresult cuMemFreeHost(void *);

extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);

extern "C" CUresult cuMemHostGetDevicePointer(CUdeviceptr *, void *, unsigned);
# 618 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);



extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);



extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 657 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);



extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);



extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);


extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 679 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);

extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 694 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 704 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
extern "C" CUresult cuArrayDestroy(CUarray);

extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 717 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
extern "C" CUresult cuTexRefDestroy(CUtexref);

extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetAddress2D(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);

extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 741 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
extern "C" CUresult cuParamSetf(CUfunction, int, float);
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 753 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 762 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
extern "C" CUresult cuEventRecord(CUevent, CUstream);
extern "C" CUresult cuEventQuery(CUevent);
extern "C" CUresult cuEventSynchronize(CUevent);
extern "C" CUresult cuEventDestroy(CUevent);
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 774 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
extern "C" CUresult cuStreamQuery(CUstream);
extern "C" CUresult cuStreamSynchronize(CUstream);
extern "C" CUresult cuStreamDestroy(CUstream);
# 64 "../../sdk/cutil.h"
enum CUTBoolean {

CUTFalse,
CUTTrue
};
# 76 "../../sdk/cutil.h"
extern "C" void cutFree(void *);
# 94 "../../sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "../../sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "../../sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "../../sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "../../sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "../../sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "../../sdk/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
bdimx, unsigned bdimy, unsigned bdimz, char *
aname, int index, char *file, int line)
{
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
}
# 162 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }

extern "C" { static inline float cuCrealf(cuFloatComplex x)
{
return x.x;
} }

extern "C" { static inline float cuCimagf(cuFloatComplex x)
{
return x.y;
} }

extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
r, float i)
{
auto cuFloatComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
{
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
} }
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));

} }

extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));

} }
# 206 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex prod;
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));



return prod;
} }
# 222 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex quot;
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));

auto float oos = ((1.0F) / s);
auto float ars = (cuCrealf(x) * oos);
auto float ais = (cuCimagf(x) * oos);
auto float brs = (cuCrealf(y) * oos);
auto float bis = (cuCimagf(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0F) / s;
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 248 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
{
auto float a = cuCrealf(x);
auto float b = cuCimagf(x);
auto float v; auto float w; auto float t;
a = (float)fabs(a);
b = (float)fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0F) + t * t;
t = v * (float)sqrt(t);
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
t = v + w;
}
return t;
} }


extern "C" { typedef double2 cuDoubleComplex; }

extern "C" { static inline double cuCreal(cuDoubleComplex x)
{
return x.x;
} }

extern "C" { static inline double cuCimag(cuDoubleComplex x)
{
return x.y;
} }

extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
r, double i)
{
auto cuDoubleComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
{
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
} }

extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));

} }

extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));

} }
# 317 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex prod;
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));



return prod;
} }
# 333 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex quot;
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
auto double oos = ((1.0) / s);
auto double ars = (cuCreal(x) * oos);
auto double ais = (cuCimag(x) * oos);
auto double brs = (cuCreal(y) * oos);
auto double bis = (cuCimag(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0) / s;
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 356 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
{
auto double a = cuCreal(x);
auto double b = cuCimag(x);
auto double v; auto double w; auto double t;
a = fabs(a);
b = fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0) + t * t;
t = v * sqrt(t);
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
{
t = v + w;
}
return t;
} }
# 387 "/usr/local/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
static inline cuComplex make_cuComplex(float x, float
y)
{
return make_cuFloatComplex(x, y);
}


static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
c)
{
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
}

static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
c)
{
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
}
# 69 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 59 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftResult_t {
CUFFT_SUCCESS,
CUFFT_INVALID_PLAN,
CUFFT_ALLOC_FAILED,
CUFFT_INVALID_TYPE,
CUFFT_INVALID_VALUE,
CUFFT_INTERNAL_ERROR,
CUFFT_EXEC_FAILED,
CUFFT_SETUP_FAILED,
CUFFT_INVALID_SIZE
} cufftResult; }




extern "C" { typedef unsigned cufftHandle; }


extern "C" { typedef float cufftReal; }




extern "C" { typedef cuComplex cufftComplex; }
# 93 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 89 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftType_t {
CUFFT_R2C = 42,
CUFFT_C2R = 44,
CUFFT_C2C = 41
} cufftType; }

extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);




extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);



extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);



extern "C" cufftResult cufftDestroy(cufftHandle);

extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);




extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);



extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 22 "../../sdk/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
{
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
exit(1);
}
}

inline void __cutilExit(int argc, char **argv)
{
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
printf("\nPress ENTER to exit...\n");
fflush(stdout);
fflush(stderr);
getchar();
}
exit(0);
}


inline int cutGetMaxGflopsDeviceId()
{
auto int device_count = 0;
cudaGetDeviceCount(&device_count);

auto cudaDeviceProp device_properties;
auto int max_gflops_device = 0;
auto int max_gflops = 0;

auto int current_device = 0;
cudaGetDeviceProperties(&device_properties, current_device);
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
++current_device;

while (current_device < device_count)
{
cudaGetDeviceProperties(&device_properties, current_device);
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
if (gflops > max_gflops)
{
max_gflops = gflops;
max_gflops_device = current_device;
}
++current_device;
}

return max_gflops_device;
}

inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
{
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cudaSafeCall(cudaError err, const char *file, const int line)
{
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cudaSafeThreadSync(const char *file, const int line)
{
auto cudaError err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
{
if ((CUFFT_SUCCESS) != err) {
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}

inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
{
if ((CUTTrue) != err) {
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}

inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
{
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
# 132 "../../sdk/cutil_inline_runtime.h"
}
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
{
if (!(pointer)) {
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);

exit(-1);
}
}


inline void cutilDeviceInit(int ARGC, char **ARGV) { }
# 171 "../../sdk/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
}
# 16 "../../sdk/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
{
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}
inline void __cuSafeCall(CUresult err, const char *file, const int line)
{
__cuSafeCallNoSync(err, file, line);
}

inline void __cuCtxSync(const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}

inline void __cuCheckMsg(const char *msg, const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}



inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV) { }
# 78 "../../sdk/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
}
# 12 "../../sdk/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
{
printf("CUDA %d.%02d Toolkit built this project.\n", 2020 / 1000, 2020 % 100);
printf("  [ %s ] requirements:\n", sSDKsample);
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
}
# 52 "realtype.h"
typedef double real;
# 46 "quasirandomGenerator_common.h"
typedef long long INT64;
# 58 "quasirandomGenerator_kernel.cuh"
static unsigned __shadow_c_Table[3][31];

static void quasirandomGeneratorKernel__entry(float *
d_Output, unsigned
seed, unsigned
N);
# 81 "quasirandomGenerator_kernel.cuh"
static void initTableGPU(unsigned tableCPU[3][31]) {
__cudaSafeCall(cudaMemcpyToSymbol(__shadow_c_Table, tableCPU, (3 * 31) * sizeof(unsigned)), "quasirandomGenerator_kernel.cuh", 86);




}


static void quasirandomGeneratorGPU(float *d_Output, unsigned seed, unsigned N) {
auto dim3 threads(128, 3);
cudaConfigureCall(128, threads) ? ((void)0) : quasirandomGeneratorKernel__entry(d_Output, seed, N);
__cutilCheckMsg("quasirandomGeneratorKernel() execution failed.\n", "quasirandomGenerator_kernel.cuh", 93);
}
# 292 "quasirandomGenerator_kernel.cuh"
static void inverseCNDKernel__entry(float *
d_Output, float *
d_Input, unsigned
pathN);
# 318 "quasirandomGenerator_kernel.cuh"
static void inverseCNDgpu(float *d_Output, float *d_Input, unsigned N) {
cudaConfigureCall(128, 128) ? ((void)0) : inverseCNDKernel__entry(d_Output, d_Input, N);
__cutilCheckMsg("inverseCNDKernel() execution failed.\n", "quasirandomGenerator_kernel.cuh", 320);
}
# 43 "quasirandomGenerator_SM13.cu"
extern "C" void initTable_SM13(unsigned tableCPU[3][31]) {
initTableGPU(tableCPU);
}

extern "C" void quasirandomGenerator_SM13(float *d_Output, unsigned seed, unsigned N) {
quasirandomGeneratorGPU(d_Output, seed, N);
}

extern "C" void inverseCND_SM13(float *d_Output, float *d_Input, unsigned N) {
inverseCNDgpu(d_Output, d_Input, N);
}

# 1 "/tmp/tmpxft_00005971_00000000-4_quasirandomGenerator_SM13.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_00005971_00000000-6_quasirandomGenerator_SM13.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 158 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
} __cudaFatCudaBinary;
# 194 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 217 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 228 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_00005971_00000000-6_quasirandomGenerator_SM13.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x74736e6f630a7d6eull,
0x616e09090a7b2073ull,0x203d20202020656dull,0x0a656c6261545f63ull,0x6d616e6765730909ull,
0x736e6f63203d2065ull,0x6e67657309090a74ull,0x0a30203d20206d75ull,0x74657366666f0909ull,
0x09090a30203d2020ull,0x2020207365747962ull,0x0a7d0a323733203dull,0x090a7b2065646f63ull,
0x5f203d20656d616eull,0x697361757136325aull,0x65476d6f646e6172ull,0x4b726f746172656eull,
0x6a66506c656e7265ull,0x206d656d6c090a6aull,0x656d73090a30203dull,0x090a3233203d206dull,
0x37203d2020676572ull,0x3d2020726162090aull,0x736e6f63090a3020ull,0x730909090a7b2074ull,
0x3d20656d616e6765ull,0x090a74736e6f6320ull,0x6d756e6765730909ull,0x09090a31203d2020ull,
0x2074657366666f09ull,0x0909090a30203d20ull,0x2020207365747962ull,0x656d09090a38203dull,
0x300909090a7b206dull,0x6633303030303078ull,0x3030303078302066ull,0x09090a2031303030ull,
0x6962090a7d090a7dull,0x0a7b2065646f636eull,0x3030303178300909ull,0x3078302035303030ull,
0x2030383763333034ull,0x3234303030617830ull,0x3234307830203930ull,0x090a203038373030ull,
0x3430303061783009ull,0x3430783020313063ull,0x3020303837303032ull,0x3034303030306178ull,
0x3030343078302064ull,0x09090a2030383730ull,0x3430303030367830ull,0x3030367830203130ull,
0x7830203038376330ull,0x6466666330303033ull,0x6330323436783020ull,0x3009090a20386337ull,
0x3030303030303378ull,0x3030303078302033ull,0x6478302030383230ull,0x2039303630303830ull,
0x3730303430307830ull,0x783009090a203038ull,0x3530343030303061ull,0x3030303430783020ull,
0x3033783020303837ull,0x3020353132303730ull,0x3837303031346378ull,0x33783009090a2030ull,
0x2039313230323030ull,0x3730303134637830ull,0x3030617830203038ull,0x7830203131383430ull,
0x3038373030323430ull,0x3036783009090a20ull,0x3020643065633130ull,0x3837303032303678ull,
0x3634303278302030ull,0x3478302034316138ull,0x2034303430343430ull,0x303033783009090aull,
0x7830203131363032ull,0x3038373030313463ull,0x3030303030783020ull,0x3063783020353061ull,
0x0a20303837303030ull,0x3030303278300909ull,0x3078302064306363ull,0x2030383730303234ull,
0x3230323030337830ull,0x3134637830203930ull,0x090a203038373030ull,0x6330303032783009ull,
0x3430783020313138ull,0x3020303837303132ull,0x6637303138306478ull,0x3034343078302064ull,
0x09090a2038633730ull,0x3030303034317830ull,0x3034327830203531ull,0x7830203038366330ull,
0x3531386630303031ull,0x6333303430783020ull,0x3009090a20303031ull,0x3136306531303378ull,
0x3031346378302039ull,0x3378302030383730ull,0x2064666430663130ull,0x3730303134657830ull,
0x783009090a203863ull,0x3531613031383464ull,0x3830303430783020ull,0x3033783020303836ull,
0x3020393136306431ull,0x3837303031346378ull,0x33783009090a2030ull,0x2064666430663130ull,
0x3730303134657830ull,0x3834647830203863ull,0x7830203531613032ull,0x3038363830303430ull,
0x3033783009090a20ull,0x3020393136306331ull,0x3837303031346378ull,0x6631303378302030ull,
0x6578302064666430ull,0x2038633730303134ull,0x383464783009090aull,0x7830203531613033ull,
0x3038363830303430ull,0x3062313033783020ull,0x3463783020393136ull,0x0a20303837303031ull,
0x6631303378300909ull,0x6578302064666430ull,0x2038633730303134ull,0x6130343834647830ull,
0x3034307830203531ull,0x090a203038363830ull,0x3061313033783009ull,0x3463783020393136ull,
0x3020303837303031ull,0x6664306631303378ull,0x3031346578302064ull,0x09090a2038633730ull,
0x6130353834647830ull,0x3034307830203531ull,0x7830203038363830ull,0x3931363039313033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x6664306631303378ull,0x3031346578302064ull,
0x6478302038633730ull,0x2035316130363834ull,0x3638303034307830ull,0x783009090a203038ull,
0x3931363038313033ull,0x3030313463783020ull,0x3033783020303837ull,0x3020646664306631ull,
0x6337303031346578ull,0x64783009090a2038ull,0x2035316130373834ull,0x3638303034307830ull,
0x3130337830203038ull,0x7830203931363037ull,0x3038373030313463ull,0x3033783009090a20ull,
0x3020646664306631ull,0x6337303031346578ull,0x3838346478302038ull,0x3078302035316130ull,
0x2030383638303034ull,0x313033783009090aull,0x7830203931363036ull,0x3038373030313463ull,
0x3066313033783020ull,0x3465783020646664ull,0x0a20386337303031ull,0x3938346478300909ull,
0x3078302035316130ull,0x2030383638303034ull,0x3630353130337830ull,0x3134637830203931ull,
0x090a203038373030ull,0x3066313033783009ull,0x3465783020646664ull,0x3020386337303031ull,
0x3161306138346478ull,0x3030343078302035ull,0x09090a2030383638ull,0x3630343130337830ull,
0x3134637830203931ull,0x7830203038373030ull,0x6466643066313033ull,0x3030313465783020ull,
0x3009090a20386337ull,0x3161306238346478ull,0x3030343078302035ull,0x3378302030383638ull,
0x2039313630333130ull,0x3730303134637830ull,0x783009090a203038ull,0x6466643066313033ull,
0x3030313465783020ull,0x3464783020386337ull,0x3020353161306338ull,0x3836383030343078ull,
0x33783009090a2030ull,0x2039313630323130ull,0x3730303134637830ull,0x3130337830203038ull,
0x7830206466643066ull,0x3863373030313465ull,0x3464783009090a20ull,0x3020353161306438ull,
0x3836383030343078ull,0x3131303378302030ull,0x6378302039313630ull,0x2030383730303134ull,
0x313033783009090aull,0x7830206466643066ull,0x3863373030313465ull,0x3065383464783020ull,
0x3430783020353161ull,0x0a20303836383030ull,0x3031303378300909ull,0x6378302039313630ull,
0x2030383730303134ull,0x6430663130337830ull,0x3134657830206466ull,0x090a203863373030ull,
0x3066383464783009ull,0x3430783020353161ull,0x3020303836383030ull,0x3136306630303378ull,
0x3031346378302039ull,0x09090a2030383730ull,0x6430663130337830ull,0x3134657830206466ull,
0x7830203863373030ull,0x3531613030393464ull,0x3830303430783020ull,0x3009090a20303836ull,
0x3136306530303378ull,0x3031346378302039ull,0x3378302030383730ull,0x2064666430663130ull,
0x3730303134657830ull,0x783009090a203863ull,0x3531613031393464ull,0x3830303430783020ull,
0x3033783020303836ull,0x3020393136306430ull,0x3837303031346378ull,0x33783009090a2030ull,
0x2064666430663130ull,0x3730303134657830ull,0x3934647830203863ull,0x7830203531613032ull,
0x3038363830303430ull,0x3033783009090a20ull,0x3020393136306330ull,0x3837303031346378ull,
0x6631303378302030ull,0x6578302064666430ull,0x2038633730303134ull,0x393464783009090aull,
0x7830203531613033ull,0x3038363830303430ull,0x3062303033783020ull,0x3463783020393136ull,
0x0a20303837303031ull,0x6631303378300909ull,0x6578302064666430ull,0x2038633730303134ull,
0x6130343934647830ull,0x3034307830203531ull,0x090a203038363830ull,0x3061303033783009ull,
0x3463783020393136ull,0x3020303837303031ull,0x6664306631303378ull,0x3031346578302064ull,
0x09090a2038633730ull,0x6130353934647830ull,0x3034307830203531ull,0x7830203038363830ull,
0x3931363039303033ull,0x3030313463783020ull,0x3009090a20303837ull,0x6664306631303378ull,
0x3031346578302064ull,0x6478302038633730ull,0x2035316130363934ull,0x3638303034307830ull,
0x783009090a203038ull,0x3931363038303033ull,0x3030313463783020ull,0x3033783020303837ull,
0x3020646664306631ull,0x6337303031346578ull,0x64783009090a2038ull,0x2035316130373934ull,
0x3638303034307830ull,0x3030337830203038ull,0x7830203931363037ull,0x3038373030313463ull,
0x3033783009090a20ull,0x3020646664306631ull,0x6337303031346578ull,0x3839346478302038ull,
0x3078302035316130ull,0x2030383638303034ull,0x303033783009090aull,0x7830203931363036ull,
0x3038373030313463ull,0x3066313033783020ull,0x3465783020646664ull,0x0a20386337303031ull,
0x3939346478300909ull,0x3078302035316130ull,0x2030383638303034ull,0x3630353030337830ull,
0x3134637830203931ull,0x090a203038373030ull,0x3066313033783009ull,0x3465783020646664ull,
0x3020386337303031ull,0x3161306139346478ull,0x3030343078302035ull,0x09090a2030383638ull,
0x3630343030337830ull,0x3134637830203931ull,0x7830203038373030ull,0x6466643066313033ull,
0x3030313465783020ull,0x3009090a20386337ull,0x3161306239346478ull,0x3030343078302035ull,
0x3378302030383638ull,0x2039313630333030ull,0x3730303134637830ull,0x783009090a203038ull,
0x6466643066313033ull,0x3030313465783020ull,0x3464783020386337ull,0x3020353161306339ull,
0x3836383030343078ull,0x33783009090a2030ull,0x2039313630323030ull,0x3730303134637830ull,
0x3130337830203038ull,0x7830206466643066ull,0x3863373030313465ull,0x3464783009090a20ull,
0x3020353161306439ull,0x3836383030343078ull,0x3130303378302030ull,0x6378302039313630ull,
0x2030383730303134ull,0x313033783009090aull,0x7830206466643066ull,0x3863373030313465ull,
0x3065393464783020ull,0x3430783020353161ull,0x0a20303836383030ull,0x3030303278300909ull,
0x3078302031303230ull,0x2030383730303034ull,0x6138313030327830ull,0x3030307830203531ull,
0x090a203330303030ull,0x3030303061783009ull,0x3434783020353161ull,0x3020303837343030ull,
0x3161303030306378ull,0x3030333078302035ull,0x09090a2033303030ull,0x3830653030647830ull,
0x6330617830203531ull,0x7830203038373030ull,0x6466666330303033ull,0x3031323436783020ull,
0x3009090a20386337ull,0x3032383330303278ull,0x3430303278302063ull,0x3178302030313438ull,
0x2033303033313030ull,0x3230303030307830ull,0x783009090a203038ull,0x3130303030303066ull,
0x3030303065783020ull,0x0a7d090a20313030ull,0x7b2065646f630a7dull,0x3d20656d616e090aull,
0x766e6936315a5f20ull,0x4b444e4365737265ull,0x5366506c656e7265ull,0x6d656d6c090a6a5full,
0x6d73090a30203d20ull,0x0a3633203d206d65ull,0x203d202067657209ull,0x20726162090a3532ull,
0x6f63090a30203d20ull,0x09090a7b2074736eull,0x656d616e67657309ull,0x74736e6f63203d20ull,
0x6e6765730909090aull,0x0a31203d20206d75ull,0x657366666f090909ull,0x090a30203d202074ull,
0x2073657479620909ull,0x090a3235203d2020ull,0x090a7b206d656d09ull,0x6630303078300909ull,
0x3078302066666666ull,0x2066663730303030ull,0x6666663030387830ull,0x6666337830206666ull,
0x090a203030303030ull,0x3666663378300909ull,0x6678302065393061ull,0x2031306366666666ull,
0x3030303030307830ull,0x3533347830203030ull,0x090a203030303030ull,0x6666666678300909ull,
0x6678302062636266ull,0x2030303030306666ull,0x3030303030307830ull,0x3030307830203130ull,
0x090a203030303030ull,0x3866666678300909ull,0x09090a2030303030ull,0x6962090a7d090a7dull,
0x0a7b2065646f636eull,0x6337303378300909ull,0x3678302064666463ull,0x2038633738303234ull,
0x6663633730337830ull,0x3234367830206466ull,0x090a203863323830ull,0x3430303061783009ull,
0x3430783020353063ull,0x3020303837303032ull,0x3332343030306178ull,0x3032343078302031ull,
0x09090a2030383730ull,0x3030303030617830ull,0x3034307830203130ull,0x7830203038373030ull,
0x3330303530323031ull,0x3030303030783020ull,0x3009090a20303832ull,0x3438313130303678ull,
0x3030303678302031ull,0x3378302030383730ull,0x2064663164303130ull,0x3763303234367830ull,
0x783009090a203863ull,0x3330303030303033ull,0x3030303030783020ull,0x3061783020303832ull,
0x3020353038343030ull,0x3837303032343078ull,0x33783009090a2030ull,0x2031303032323030ull,
0x3730303134637830ull,0x3430347830203038ull,0x7830203035383131ull,0x3834636530303132ull,
0x3032783009090a20ull,0x3020353438633030ull,0x3837303032343078ull,0x3230303378302030ull,
0x6378302064343832ull,0x2030383730303134ull,0x303064783009090aull,0x7830203130343265ull,
0x3038373030633038ull,0x3830303031783020ull,0x3030783020313130ull,0x0a20333030303030ull,
0x3030303178300909ull,0x3078302035313038ull,0x2033303030666633ull,0x3030303030617830ull,
0x3434637830203930ull,0x090a203038373030ull,0x3034303065783009ull,0x3065783020646635ull,
0x3020386337383130ull,0x3030383030303178ull,0x3030303078302031ull,0x09090a2033303030ull,
0x3038303030317830ull,0x3030307830203530ull,0x7830203330303030ull,0x6466353030303065ull,
0x6330303065783020ull,0x3009090a20383431ull,0x3030656631306178ull,0x3030303078302033ull,
0x3178302030303030ull,0x2033303062313030ull,0x3130303030307830ull,0x783009090a203030ull,
0x3130303830303031ull,0x3030303030783020ull,0x3031783020333030ull,0x3020353030383030ull,
0x3030386666663078ull,0x31783009090a2033ull,0x2033303065663130ull,0x3730303030307830ull,
0x3030317830203038ull,0x7830203130303830ull,0x3330303030303030ull,0x3031783009090a20ull,
0x3020353030383030ull,0x3030306566623078ull,0x3132303178302033ull,0x3078302031313038ull,
0x2066613734316561ull,0x303031783009090aull,0x7830203531303837ull,0x3731656164663330ull,
0x3030303065783020ull,0x3036783020313334ull,0x0a20303837303030ull,0x3430306578300909ull,
0x6578302064663931ull,0x2038633734303130ull,0x3064663130617830ull,0x3030307830203330ull,
0x090a203030303030ull,0x3234303031783009ull,0x3030783020333030ull,0x3020303031303030ull,
0x3038316330306578ull,0x3030303878302031ull,0x09090a2030383730ull,0x3038383330317830ull,
0x3735307830203930ull,0x7830203737373733ull,0x6430303839323031ull,0x3933306330783020ull,
0x3009090a20663037ull,0x3130386333303178ull,0x3734633078302031ull,0x3178302066366333ull,
0x2035313038323130ull,0x6234343034307830ull,0x783009090a203332ull,0x3132303837303031ull,
0x3535303230783020ull,0x3031783020376138ull,0x3020353230383033ull,0x6230393030343078ull,
0x31783009090a2066ull,0x2039313038643330ull,0x6531303730307830ull,0x3230317830203735ull,
0x7830206431303866ull,0x6666303533306330ull,0x3065783009090a20ull,0x3020393030303230ull,
0x3837303130303478ull,0x3830306578302030ull,0x3478302031323030ull,0x2030383738313030ull,
0x313031783009090aull,0x7830203131303865ull,0x6633613435656130ull,0x3830333031783020ull,
0x6330783020353130ull,0x0a20376439323330ull,0x6332303178300909ull,0x3078302039313038ull,
0x2033303531383139ull,0x3038373130317830ull,0x3034307830206431ull,0x090a203735313733ull,
0x3032303065783009ull,0x3034783020393030ull,0x3020303837303130ull,0x3230303830306578ull,
0x3130303478302031ull,0x09090a2030383738ull,0x3038643030317830ull,0x6231307830203131ull,
0x7830203332363832ull,0x3531303833313031ull,0x3430303430783020ull,0x3009090a20626430ull,
0x3130386432303178ull,0x3536303078302039ull,0x3178302033373035ull,0x2064313038303330ull,
0x6630323063307830ull,0x783009090a203732ull,0x3930303032303065ull,0x3031303034783020ull,
0x3065783020303837ull,0x3020393130303830ull,0x3837383130303478ull,0x31783009090a2030ull,
0x2031313038303030ull,0x3030303030307830ull,0x3030317830203330ull,0x7830203531303830ull,
0x3330303066663330ull,0x3065783009090a20ull,0x3020393038313230ull,0x3837303030303878ull,
0x3630306578302030ull,0x3478302031313030ull,0x2030383730313030ull,0x303031783009090aull,
0x7830203030343832ull,0x3430363830303031ull,0x3832303031783020ull,0x3031783020383038ull,
0x0a20633061383030ull,0x3034303278300909ull,0x3078302033303061ull,0x2030383730303030ull,
0x3064663130317830ull,0x3030307830203330ull,0x090a203038373030ull,0x3830303031783009ull,
0x3030783020313030ull,0x3020333030303030ull,0x3030383030303178ull,0x3030303078302035ull,
0x09090a2033303030ull,0x3931303030657830ull,0x3030657830206466ull,0x7830203863373031ull,
0x3330306464313061ull,0x3030303030783020ull,0x3009090a20303030ull,0x3030343131303178ull,
0x3030303078302033ull,0x3178302030303130ull,0x2031303038303030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3530303830303031ull,0x3066663330783020ull,0x3065783020333030ull,
0x3020393034303030ull,0x3837303030343678ull,0x31783009090a2030ull,0x2031303038303030ull,
0x3030303030307830ull,0x3030317830203330ull,0x7830203530303830ull,0x3330303030303030ull,
0x3065783009090a20ull,0x3020646635303030ull,0x6337303130306578ull,0x3030303178302038ull,
0x3078302031313038ull,0x2033303030303030ull,0x303031783009090aull,0x7830203531303830ull,
0x3330303066663730ull,0x3832303031783020ull,0x3031783020303034ull,0x0a20343036383030ull,
0x3430306578300909ull,0x6578302064663530ull,0x2038633234303030ull,0x3063613030617830ull,
0x3030307830203330ull,0x090a203030303030ull,0x3030303031783009ull,0x3630783020313132ull,
0x3020303837633330ull,0x3030613930303178ull,0x3030303078302033ull,0x09090a2030303130ull,
0x3930303830337830ull,0x3434367830206466ull,0x7830203863373031ull,0x3130633030303031ull,
0x6330343432783020ull,0x3009090a20303035ull,0x3065303030303178ull,0x3034343278302035ull,
0x6578302030303563ull,0x2031303430303030ull,0x3530303030387830ull,0x783009090a203030ull,
0x3930303130303031ull,0x6330343432783020ull,0x3031783020303035ull,0x3020393061303030ull,
0x3832633034343278ull,0x33783009090a2030ull,0x2064303230343130ull,0x3730303163657830ull,
0x3830647830203038ull,0x7830203530323032ull,0x3038373030343430ull,0x3064783009090a20ull,
0x3020643036303138ull,0x3837303034343078ull,0x3338306478302030ull,0x3078302035303230ull,
0x2030383734303434ull,0x303032783009090aull,0x7830203535343030ull,0x3038376330303430ull,
0x3034383033783020ull,0x3436783020646633ull,0x0a20386337633034ull,0x3030303178300909ull,
0x3178302038333038ull,0x2063333238323030ull,0x6531303031327830ull,0x3434307830206433ull,
0x090a203030353432ull,0x3230303132783009ull,0x3430783020353561ull,0x3020303035383234ull,
0x3030383030303178ull,0x3030303078302031ull,0x09090a2033303030ull,0x3038303030317830ull,
0x6633307830203530ull,0x7830203330303066ull,0x3130633130303065ull,0x3030303036783020ull,
0x3009090a20303837ull,0x3030383030303178ull,0x3230303178302030ull,0x3278302034303238ull,
0x2033303063653430ull,0x3730303030307830ull,0x783009090a203038ull,0x3930303830303031ull,
0x3030303030783020ull,0x3031783020333030ull,0x3020643030383030ull,0x3030306666623078ull,
0x65783009090a2033ull,0x2031316331303030ull,0x3738303030367830ull,0x3030317830203038ull,
0x7830203830303830ull,0x6330323832303031ull,0x3065783009090a20ull,0x3020313038303230ull,
0x3837303030303878ull,0x3030306578302030ull,0x3678302039313030ull,0x2030383730303030ull,
0x313031783009090aull,0x7830203130303865ull,0x3366303865613330ull,0x3862303031783020ull,
0x3330783020353030ull,0x0a20333833316265ull,0x3430303178300909ull,0x3078302039323038ull,
0x2033623861376238ull,0x3038353230317830ull,0x6533307830206432ull,0x090a203365653064ull,
0x3036303065783009ull,0x3038783020313263ull,0x3020303837303030ull,0x3030313030306578ull,
0x3230303478302031ull,0x09090a2030383738ull,0x3038663230317830ull,0x6639307830203932ull,
0x7830203737363230ull,0x6432303836323031ull,0x3366653330783020ull,0x3009090a20373262ull,
0x3030313030306578ull,0x3230303478302031ull,0x3178302030383738ull,0x2039323038363130ull,
0x3062613961307830ull,0x783009090a203739ull,0x6432303862303031ull,0x3731663330783020ull,
0x3065783020663534ull,0x3020313030313030ull,0x3837383230303478ull,0x31783009090a2030ull,
0x2039323038343130ull,0x3562316432307830ull,0x3030317830203731ull,0x7830206432303837ull,
0x6631376333663330ull,0x3065783009090a20ull,0x3020393230313030ull,0x3837383230303478ull,
0x6432303178302030ull,0x3078302039333038ull,0x2033376562333239ull,0x323031783009090aull,
0x7830206433303834ull,0x3339343236663330ull,0x3030303065783020ull,0x3436783020313063ull,
0x0a20303837303130ull,0x6130306578300909ull,0x3478302039323031ull,0x2030383738333030ull,
0x3038343030317830ull,0x3939307830203933ull,0x090a206633613939ull,0x3839313031783009ull,
0x3330783020643330ull,0x3020623939393866ull,0x3230316130306578ull,0x3330303478302039ull,
0x09090a2030383738ull,0x3038343130317830ull,0x3535307830203933ull,0x7830203735353535ull,
0x6433303835313031ull,0x3562663330783020ull,0x3009090a20373535ull,0x3032383030303278ull,
0x3130303078302035ull,0x6578302033303030ull,0x2039323031613030ull,0x3738333030347830ull,
0x783009090a203038ull,0x3132303161303065ull,0x3030303038783020ull,0x3065783020303837ull,
0x3020313063303430ull,0x3837303030343478ull,0x61783009090a2030ull,0x2031316132303030ull,
0x3730313434347830ull,0x3030657830203038ull,0x7830203132633038ull,0x3038373030303038ull,
0x3033783009090a20ull,0x3020393361613030ull,0x3030303030303078ull,0x6632303178302033ull,
0x3078302039323038ull,0x2066393361666566ull,0x303031783009090aull,0x7830206432303832ull,
0x3765323665663330ull,0x3030303065783020ull,0x3034783020393034ull,0x0a20303837303230ull,
0x3030306178300909ull,0x3478302031326331ull,0x2030383730313434ull,0x3830613030657830ull,
0x3030347830203130ull,0x090a203038373831ull,0x3161303065783009ull,0x3034783020313230ull,
0x3020303837303030ull,0x3163303030306578ull,0x3230343678302039ull,0x09090a2030383730ull,
0x3430303030657830ull,0x3038367830203931ull,0x7830203038373831ull,0x3930303866333031ull,
0x3933623330783020ull,0x3009090a20333038ull,0x3030386531303178ull,0x3763333078302064ull,
0x6578302062636261ull,0x2039303830323030ull,0x3738313030347830ull,0x783009090a203038ull,
0x3930303030303065ull,0x3830303036783020ull,0x3031783020303837ull,0x3020333030636130ull,
0x3837303030303078ull,0x31783009090a2030ull,0x2031303038303030ull,0x3030303030307830ull,
0x3030317830203330ull,0x7830203530303830ull,0x3330303066663730ull,0x3065783009090a20ull,
0x3020646635303030ull,0x6337633031306578ull,0x6130303178302038ull,0x3078302033303030ull,
0x2030383230303030ull,0x303065783009090aull,0x7830203930343030ull,0x3038373830303036ull,
0x6361303031783020ull,0x3030783020333030ull,0x0a20303837303030ull,0x3030303178300909ull,
0x3078302031303038ull,0x2033303030303030ull,0x3038303030317830ull,0x3030307830203530ull,
0x090a203330303030ull,0x3030303065783009ull,0x3065783020646635ull,0x3020386337383030ull,
0x3030376130303178ull,0x3030303078302033ull,0x09090a2030303130ull,0x3038303030317830ull,
0x3030307830203930ull,0x7830203330303030ull,0x6430303830303031ull,0x3066666630783020ull,
0x3009090a20333030ull,0x3030636130303178ull,0x3030303078302033ull,0x3178302030383730ull,
0x2031303038303030ull,0x3030303030307830ull,0x783009090a203330ull,0x3530303830303031ull,
0x3066663730783020ull,0x3065783020333030ull,0x3020646635303030ull,0x6337383030306578ull,
0x31783009090a2038ull,0x2039303631303030ull,0x3163303434327830ull,0x3030317830203030ull,
0x7830206430383130ull,0x3030316330343432ull,0x3061783009090a20ull,0x3020313134303030ull,
0x3837343034346578ull,0x3030303178302032ull,0x3078302031303038ull,0x2033303030303030ull,
0x303031783009090aull,0x7830203530303830ull,0x3330303030303030ull,0x3030303065783020ull,
0x3065783020646639ull,0x0a20386337303130ull,0x3030303178300909ull,0x3078302039313038ull,
0x2033303030303030ull,0x3038303030317830ull,0x6637307830206431ull,0x090a203330303066ull,
0x3830303031783009ull,0x3031783020303038ull,0x3020343061383230ull,0x6639303630306578ull,
0x3030306578302064ull,0x09090a2038633234ull,0x3032313130617830ull,0x3030307830203330ull,
0x7830203030303030ull,0x3931323030303031ull,0x6333303430783020ull,0x3009090a20303837ull,
0x3030646630303178ull,0x3030303078302033ull,0x3378302030303130ull,0x2064666430303830ull,
0x3730313434367830ull,0x783009090a203863ull,0x3130633030303031ull,0x6330343432783020ull,
0x3031783020303035ull,0x3020353065303030ull,0x3035633034343278ull,0x65783009090a2030ull,
0x2031303830303030ull,0x3530303030387830ull,0x3030317830203030ull,0x7830203930303130ull,
0x3030356330343432ull,0x3031783009090a20ull,0x3020393061303030ull,0x3832633034343278ull,
0x3431303378302030ull,0x6578302064303230ull,0x2030383730303163ull,0x383064783009090aull,
0x7830203530323032ull,0x3038373030343430ull,0x3031383064783020ull,0x3430783020643036ull,
0x0a20303837303034ull,0x3338306478300909ull,0x3078302035303230ull,0x2030383734303434ull,
0x3430303030327830ull,0x3034307830203535ull,0x090a203038376330ull,0x3034383033783009ull,
0x3436783020646633ull,0x3020386337633034ull,0x3330383230303178ull,0x3030303178302038ull,
0x09090a2063333238ull,0x6531303031327830ull,0x3434307830206433ull,0x7830203030353432ull,
0x3535613230303132ull,0x3832343430783020ull,0x3009090a20303035ull,0x3030383030303178ull,
0x3030303078302031ull,0x3178302033303030ull,0x2035303038303030ull,0x3030666633307830ull,
0x783009090a203330ull,0x3130633130303065ull,0x3030303036783020ull,0x3031783020303837ull,
0x3020303030383230ull,0x3032383030303178ull,0x32783009090a2034ull,0x2033303063653430ull,
0x3730303030307830ull,0x3030317830203038ull,0x7830203930303830ull,0x3330303030303030ull,
0x3031783009090a20ull,0x3020643030383030ull,0x3030306666623078ull,0x3030306578302033ull,
0x3678302031316331ull,0x2030383738303030ull,0x303031783009090aull,0x7830203830303832ull,
0x6330323830303031ull,0x3032303065783020ull,0x3038783020313038ull,0x0a20303837303030ull,
0x3030306578300909ull,0x3678302039313030ull,0x2030383730303030ull,0x3038653130317830ull,
0x6133307830203130ull,0x090a203366303865ull,0x3862303031783009ull,0x3330783020353030ull,
0x3020333833316265ull,0x3230383430303178ull,0x3762383078302039ull,0x09090a2033623861ull,
0x3038353230317830ull,0x6533307830206432ull,0x7830203365653064ull,0x3132633036303065ull,
0x3030303038783020ull,0x3009090a20303837ull,0x3030313030306578ull,0x3230303478302031ull,
0x3178302030383738ull,0x2039323038663230ull,0x3632306639307830ull,0x783009090a203737ull,
0x6432303836323031ull,0x3366653330783020ull,0x3065783020373262ull,0x3020313030313030ull,
0x3837383230303478ull,0x31783009090a2030ull,0x2039323038363130ull,0x3062613961307830ull,
0x3030317830203739ull,0x7830206432303862ull,0x6635343731663330ull,0x3065783009090a20ull,
0x3020313030313030ull,0x3837383230303478ull,0x3431303178302030ull,0x3078302039323038ull,
0x2037313562316432ull,0x303031783009090aull,0x7830206432303837ull,0x6631376333663330ull,
0x3130303065783020ull,0x3034783020393230ull,0x0a20303837383230ull,0x6432303178300909ull,
0x3078302039333038ull,0x2033376562333239ull,0x3038343230317830ull,0x6633307830206433ull,
0x090a203339343236ull,0x3030303065783009ull,0x3436783020313063ull,0x3020303837303130ull,
0x3230316130306578ull,0x3330303478302039ull,0x09090a2030383738ull,0x3038343030317830ull,
0x3939307830203933ull,0x7830206633613939ull,0x6433303839313031ull,0x3938663330783020ull,
0x3009090a20623939ull,0x3230316130306578ull,0x3330303478302039ull,0x3178302030383738ull,
0x2039333038343130ull,0x3535353535307830ull,0x783009090a203735ull,0x6433303835313031ull,
0x3562663330783020ull,0x3032783020373535ull,0x3020353032383030ull,0x3030303130303078ull,
0x65783009090a2033ull,0x2039323031613030ull,0x3738333030347830ull,0x3030657830203038ull,
0x7830203132303161ull,0x3038373030303038ull,0x3065783009090a20ull,0x3020313063303430ull,
0x3837303030343478ull,0x3030306178302030ull,0x3478302031316132ull,0x2030383730313434ull,
0x303065783009090aull,0x7830203132633038ull,0x3038373030303038ull,0x6130303033783020ull,
0x3030783020393361ull,0x0a20333030303030ull,0x6632303178300909ull,0x3078302039323038ull,
0x2066393361666566ull,0x3038323030317830ull,0x6633307830206432ull,0x090a203765323665ull,
0x3030303065783009ull,0x3034783020393034ull,0x3020303837303230ull,0x3263313030306178ull,
0x3134343478302031ull,0x09090a2030383730ull,0x3830613030657830ull,0x3030347830203130ull,
0x7830203038373831ull,0x3132303161303065ull,0x3030303034783020ull,0x3009090a20303837ull,
0x3163303030306578ull,0x3230343678302039ull,0x6578302030383730ull,0x2039313430303030ull,
0x3738313038367830ull,0x783009090a203038ull,0x3930303866333031ull,0x3933623330783020ull,
0x3031783020333038ull,0x3020643030386531ull,0x6362613763333078ull,0x65783009090a2062ull,
0x2039303830323030ull,0x3738313030347830ull,0x3030657830203038ull,0x7830203130303030ull,
0x3038373830303036ull,0x3031783009090a20ull,0x3020333030323131ull,0x3837303030303078ull,
0x3030303178302030ull,0x3078302031303038ull,0x2033303030303030ull,0x303031783009090aull,
0x7830203530303830ull,0x3330303066663730ull,0x3030303065783020ull,0x3065783020646635ull,
0x0a20386337633031ull,0x3031303178300909ull,0x3078302033303034ull,0x2030383230303030ull,
0x3430303030657830ull,0x3030367830203130ull,0x090a203038373830ull,0x3030303061783009ull,
0x3465783020313030ull,0x3020303837343034ull,0x3030323131303178ull,0x3030303078302033ull,
0x09090a2030383730ull,0x3038303030317830ull,0x3030307830203130ull,0x7830203330303030ull,
0x3530303830303031ull,0x3030303030783020ull,0x3009090a20333030ull,0x6639303030306578ull,
0x3030306578302064ull,0x3178302038633738ull,0x2033303062303130ull,0x3130303030307830ull,
0x783009090a203030ull,0x3130303830303031ull,0x3030303030783020ull,0x3031783020333030ull,
0x3020353030383030ull,0x3030306666663078ull,0x31783009090a2033ull,0x2033303032313130ull,
0x3730303030307830ull,0x3030317830203038ull,0x7830203130303830ull,0x3330303030303030ull,
0x3031783009090a20ull,0x3020353030383030ull,0x3030306666373078ull,0x3030306578302033ull,
0x6578302064663930ull,0x2038633738303030ull,0x303031783009090aull,0x7830203130383030ull,
0x3038366333303630ull,0x3030303031783020ull,0x3430783020353061ull,0x0a20303836633330ull,
0x3030303178300909ull,0x3278302031303631ull,0x2030303163303434ull,0x3831303030317830ull,
0x3434327830203530ull,0x090a203030316330ull,0x3030303066783009ull,0x3065783020313030ull,
0x3020323030303030ull,0x3030646431303178ull,0x3030303078302033ull,0x09090a2030383730ull,
0x3038303030317830ull,0x3030307830203130ull,0x7830203330303030ull,0x3530303830303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x6635303030306578ull,0x3130306578302064ull,
0x3178302038633730ull,0x2031313038303030ull,0x3030303030307830ull,0x783009090a203330ull,
0x3531303830303031ull,0x3066663730783020ull,0x3031783020333030ull,0x3020303034383230ull,
0x3036383030303178ull,0x65783009090a2034ull,0x2064663530343030ull,0x3234303030657830ull,
0x3130617830203863ull,0x7830203330303637ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020313132303030ull,0x3837633330363078ull,0x3631303178302030ull,0x3078302033303034ull,
0x2030303130303030ull,0x383033783009090aull,0x7830206466393030ull,0x3863373031343436ull,
0x3030303031783020ull,0x3432783020313063ull,0x0a20303035633034ull,0x3030303178300909ull,
0x3278302035306530ull,0x2030303563303434ull,0x3430303030657830ull,0x3030387830203130ull,
0x090a203030353030ull,0x3130303031783009ull,0x3432783020393030ull,0x3020303035633034ull,
0x3061303030303178ull,0x3034343278302039ull,0x09090a2030383263ull,0x3230343130337830ull,
0x3163657830206430ull,0x7830203038373030ull,0x3530323032383064ull,0x3030343430783020ull,
0x3009090a20303837ull,0x3036303138306478ull,0x3034343078302064ull,0x6478302030383730ull,
0x2035303230333830ull,0x3734303434307830ull,0x783009090a203038ull,0x3535343030303032ull,
0x6330303430783020ull,0x3033783020303837ull,0x3020646633303438ull,0x6337633034343678ull,
0x31783009090a2038ull,0x2038333038303030ull,0x3238323030317830ull,0x3031327830206333ull,
0x7830206433653130ull,0x3030353432343430ull,0x3132783009090a20ull,0x3020353561323030ull,
0x3035383234343078ull,0x3030303178302030ull,0x3078302031303038ull,0x2033303030303030ull,
0x303031783009090aull,0x7830203530303830ull,0x3330303066663330ull,0x3130303065783020ull,
0x3036783020313063ull,0x0a20303837303030ull,0x3030303178300909ull,0x3178302030303038ull,
0x2034303238323030ull,0x3063653430327830ull,0x3030307830203330ull,0x090a203038373030ull,
0x3830303031783009ull,0x3030783020393030ull,0x3020333030303030ull,0x3030383030303178ull,
0x6666623078302064ull,0x09090a2033303030ull,0x6331303030657830ull,0x3030367830203131ull,
0x7830203038373830ull,0x3830303830303031ull,0x3832303031783020ull,0x3009090a20633032ull,
0x3038303230306578ull,0x3030303878302031ull,0x6578302030383730ull,0x2039313030303030ull,
0x3730303030367830ull,0x783009090a203038ull,0x3130303865313031ull,0x3865613330783020ull,
0x3031783020336630ull,0x3020353030386230ull,0x3833316265333078ull,0x31783009090a2033ull,
0x2039323038343030ull,0x3861376238307830ull,0x3230317830203362ull,0x7830206432303835ull,
0x3365653064653330ull,0x3065783009090a20ull,0x3020313263303630ull,0x3837303030303878ull,
0x3030306578302030ull,0x3478302031303031ull,0x2030383738323030ull,0x323031783009090aull,
0x7830203932303866ull,0x3737363230663930ull,0x3836323031783020ull,0x3330783020643230ull,
0x0a20373262336665ull,0x3030306578300909ull,0x3478302031303031ull,0x2030383738323030ull,
0x3038363130317830ull,0x3961307830203932ull,0x090a203739306261ull,0x3862303031783009ull,
0x3330783020643230ull,0x3020663534373166ull,0x3030313030306578ull,0x3230303478302031ull,
0x09090a2030383738ull,0x3038343130317830ull,0x6432307830203932ull,0x7830203731356231ull,
0x6432303837303031ull,0x6333663330783020ull,0x3009090a20663137ull,0x3230313030306578ull,
0x3230303478302039ull,0x3178302030383738ull,0x2039333038643230ull,0x6562333239307830ull,
0x783009090a203337ull,0x6433303834323031ull,0x3236663330783020ull,0x3065783020333934ull,
0x3020313063303030ull,0x3837303130343678ull,0x65783009090a2030ull,0x2039323031613030ull,
0x3738333030347830ull,0x3030317830203038ull,0x7830203933303834ull,0x6633613939393930ull,
0x3031783009090a20ull,0x3020643330383931ull,0x3939393866333078ull,0x6130306578302062ull,
0x3478302039323031ull,0x2030383738333030ull,0x313031783009090aull,0x7830203933303834ull,
0x3735353535353530ull,0x3835313031783020ull,0x3330783020643330ull,0x0a20373535356266ull,
0x3030303278300909ull,0x3078302035303238ull,0x2033303030313030ull,0x3031613030657830ull,
0x3030347830203932ull,0x090a203038373833ull,0x3161303065783009ull,0x3038783020313230ull,
0x3020303837303030ull,0x3063303430306578ull,0x3030343478302031ull,0x09090a2030383730ull,
0x6132303030617830ull,0x3434347830203131ull,0x7830203038373031ull,0x3132633038303065ull,
0x3030303038783020ull,0x3009090a20303837ull,0x3361613030303378ull,0x3030303078302039ull,
0x3178302033303030ull,0x2039323038663230ull,0x3361666566307830ull,0x783009090a206639ull,
0x6432303832303031ull,0x3665663330783020ull,0x3065783020376532ull,0x3020393034303030ull,
0x3837303230303478ull,0x61783009090a2030ull,0x2031326331303030ull,0x3730313434347830ull,
0x3030657830203038ull,0x7830203130383061ull,0x3038373831303034ull,0x3065783009090a20ull,
0x3020313230316130ull,0x3837303030303478ull,0x3030306578302030ull,0x3678302039316330ull,
0x2030383730323034ull,0x303065783009090aull,0x7830203931343030ull,0x3038373831303836ull,
0x3866333031783020ull,0x3330783020393030ull,0x0a20333038393362ull,0x6531303178300909ull,
0x3078302064303038ull,0x2062636261376333ull,0x3830323030657830ull,0x3030347830203930ull,
0x090a203038373831ull,0x3030303065783009ull,0x3036783020393030ull,0x3020303837383030ull,
0x3030363731303178ull,0x3030303078302033ull,0x09090a2030383730ull,0x3038303030317830ull,
0x3030307830203130ull,0x7830203330303030ull,0x3530303830303031ull,0x3066663730783020ull,
0x3009090a20333030ull,0x6635303030306578ull,0x3031306578302064ull,0x3178302038633763ull,
0x2033303061363130ull,0x3230303030307830ull,0x783009090a203038ull,0x3930343030303065ull,
0x3830303036783020ull,0x3031783020303837ull,0x3020333030363731ull,0x3837303030303078ull,
0x31783009090a2030ull,0x2031303038303030ull,0x3030303030307830ull,0x3030317830203330ull,
0x7830203530303830ull,0x3330303030303030ull,0x3065783009090a20ull,0x3020646635303030ull,
0x6337383030306578ull,0x3731303178302038ull,0x3078302033303031ull,0x2030303130303030ull,
0x303031783009090aull,0x7830203930303830ull,0x3330303030303030ull,0x3830303031783020ull,
0x6630783020643030ull,0x0a20333030306666ull,0x3731303178300909ull,0x3078302033303036ull,
0x2030383730303030ull,0x3038303030317830ull,0x3030307830203130ull,0x090a203330303030ull,
0x3830303031783009ull,0x3730783020353030ull,0x3020333030306666ull,0x6635303030306578ull,
0x3030306578302064ull,0x09090a2038633738ull,0x3631303030317830ull,0x3434327830203930ull,
0x7830203030316330ull,0x6430383130303031ull,0x6330343432783020ull,0x3009090a20303031ull,
0x3134303030306178ull,0x3034346578302031ull,0x3178302032383734ull,0x2031303038303030ull,
0x3030303030307830ull,0x783009090a203330ull,0x3530303830303031ull,0x3030303030783020ull,
0x3065783020333030ull,0x3020646639303030ull,0x6337303130306578ull,0x31783009090a2038ull,
0x2039313038303030ull,0x3030303030307830ull,0x3030317830203330ull,0x7830206431303830ull,
0x3330303066663730ull,0x3031783009090a20ull,0x3020303038383030ull,0x3061383230303178ull,
0x3630306578302034ull,0x6578302064663930ull,0x2038633234303030ull,0x313061783009090aull,
0x7830203330306364ull,0x3030303030303030ull,0x3030303031783020ull,0x3430783020393132ull,
0x0a20303837633330ull,0x6331303178300909ull,0x3078302033303037ull,0x2030303130303030ull,
0x6430303830337830ull,0x3434367830206466ull,0x090a203863373031ull,0x3030303031783009ull,
0x3432783020313063ull,0x3020303035633034ull,0x3065303030303178ull,0x3034343278302035ull,
0x09090a2030303563ull,0x3830303030657830ull,0x3030387830203130ull,0x7830203030353030ull,
0x3930303130303031ull,0x6330343432783020ull,0x3009090a20303035ull,0x3061303030303178ull,
0x3034343278302039ull,0x3378302030383263ull,0x2064303230343130ull,0x3730303163657830ull,
0x783009090a203038ull,0x3530323032383064ull,0x3030343430783020ull,0x3064783020303837ull,
0x3020643036303138ull,0x3837303034343078ull,0x64783009090a2030ull,0x2035303230333830ull,
0x3734303434307830ull,0x3030327830203038ull,0x7830203535343030ull,0x3038376330303430ull,
0x3033783009090a20ull,0x3020646633303438ull,0x6337633034343678ull,0x3230303178302038ull,
0x3178302038333038ull,0x2063333238303030ull,0x303132783009090aull,0x7830206433653130ull,
0x3030353432343430ull,0x3230303132783020ull,0x3430783020353561ull,0x0a20303035383234ull,
0x3030303178300909ull,0x3078302031303038ull,0x2033303030303030ull,0x3038303030317830ull,
0x6633307830203530ull,0x090a203330303066ull,0x3130303065783009ull,0x3036783020313063ull,
0x3020303837303030ull,0x3030383230303178ull,0x3030303178302030ull,0x09090a2034303238ull,
0x3063653430327830ull,0x3030307830203330ull,0x7830203038373030ull,0x3930303830303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3030383030303178ull,0x6666623078302064ull,
0x6578302033303030ull,0x2031316331303030ull,0x3738303030367830ull,0x783009090a203038ull,
0x3830303832303031ull,0x3830303031783020ull,0x3065783020633032ull,0x3020313038303230ull,
0x3837303030303878ull,0x65783009090a2030ull,0x2039313030303030ull,0x3730303030367830ull,
0x3130317830203038ull,0x7830203130303865ull,0x3366303865613330ull,0x3031783009090a20ull,
0x3020353030386230ull,0x3833316265333078ull,0x3430303178302033ull,0x3078302039323038ull,
0x2033623861376238ull,0x323031783009090aull,0x7830206432303835ull,0x3365653064653330ull,
0x3036303065783020ull,0x3038783020313263ull,0x0a20303837303030ull,0x3030306578300909ull,
0x3478302031303031ull,0x2030383738323030ull,0x3038663230317830ull,0x6639307830203932ull,
0x090a203737363230ull,0x3836323031783009ull,0x3330783020643230ull,0x3020373262336665ull,
0x3030313030306578ull,0x3230303478302031ull,0x09090a2030383738ull,0x3038363130317830ull,
0x3961307830203932ull,0x7830203739306261ull,0x6432303862303031ull,0x3731663330783020ull,
0x3009090a20663534ull,0x3030313030306578ull,0x3230303478302031ull,0x3178302030383738ull,
0x2039323038343130ull,0x3562316432307830ull,0x783009090a203731ull,0x6432303837303031ull,
0x6333663330783020ull,0x3065783020663137ull,0x3020393230313030ull,0x3837383230303478ull,
0x31783009090a2030ull,0x2039333038643230ull,0x6562333239307830ull,0x3230317830203337ull,
0x7830206433303834ull,0x3339343236663330ull,0x3065783009090a20ull,0x3020313063303030ull,
0x3837303130343678ull,0x6130306578302030ull,0x3478302039323031ull,0x2030383738333030ull,
0x303031783009090aull,0x7830203933303834ull,0x6633613939393930ull,0x3839313031783020ull,
0x3330783020643330ull,0x0a20623939393866ull,0x6130306578300909ull,0x3478302039323031ull,
0x2030383738333030ull,0x3038343130317830ull,0x3535307830203933ull,0x090a203735353535ull,
0x3835313031783009ull,0x3330783020643330ull,0x3020373535356266ull,0x3032383030303278ull,
0x3130303078302035ull,0x09090a2033303030ull,0x3031613030657830ull,0x3030347830203932ull,
0x7830203038373833ull,0x3132303161303065ull,0x3030303038783020ull,0x3009090a20303837ull,
0x3063303430306578ull,0x3030343478302031ull,0x6178302030383730ull,0x2031316132303030ull,
0x3730313434347830ull,0x783009090a203038ull,0x3132633038303065ull,0x3030303038783020ull,
0x3033783020303837ull,0x3020393361613030ull,0x3030303030303078ull,0x31783009090a2033ull,
0x2039323038663230ull,0x3361666566307830ull,0x3030317830206639ull,0x7830206432303832ull,
0x3765323665663330ull,0x3065783009090a20ull,0x3020393034303030ull,0x3837303230303478ull,
0x3030306178302030ull,0x3478302031326331ull,0x2030383730313434ull,0x303065783009090aull,
0x7830203130383061ull,0x3038373831303034ull,0x3161303065783020ull,0x3034783020313230ull,
0x0a20303837303030ull,0x3030306578300909ull,0x3678302039316330ull,0x2030383730323034ull,
0x3430303030657830ull,0x3038367830203931ull,0x090a203038373831ull,0x3866333031783009ull,
0x3330783020393030ull,0x3020333038393362ull,0x3030386531303178ull,0x3763333078302064ull,
0x09090a2062636261ull,0x3830323030657830ull,0x3030347830203930ull,0x7830203038373831ull,
0x3130303030303065ull,0x3830303036783020ull,0x3009090a20303837ull,0x3030636431303178ull,
0x3030303078302033ull,0x3178302030383730ull,0x2031303038303030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3530303830303031ull,0x3066663730783020ull,0x3065783020333030ull,
0x3020646635303030ull,0x6337633031306578ull,0x31783009090a2038ull,0x2033303065633130ull,
0x3230303030307830ull,0x3030657830203038ull,0x7830203130343030ull,0x3038373830303036ull,
0x3061783009090a20ull,0x3020313030303030ull,0x3837343034346578ull,0x6431303178302030ull,
0x3078302033303063ull,0x2030383730303030ull,0x303031783009090aull,0x7830203130303830ull,
0x3330303030303030ull,0x3830303031783020ull,0x3030783020353030ull,0x0a20333030303030ull,
0x3030306578300909ull,0x6578302064663930ull,0x2038633738303030ull,0x3035643130317830ull,
0x3030307830203330ull,0x090a203030313030ull,0x3830303031783009ull,0x3030783020313030ull,
0x3020333030303030ull,0x3030383030303178ull,0x6666663078302035ull,0x09090a2033303030ull,
0x3063643130317830ull,0x3030307830203330ull,0x7830203038373030ull,0x3130303830303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3030383030303178ull,0x6666373078302035ull,
0x6578302033303030ull,0x2064663930303030ull,0x3738303030657830ull,0x783009090a203863ull,
0x3130383030303031ull,0x6333303630783020ull,0x3031783020303836ull,0x3020353061303030ull,
0x3836633330343078ull,0x31783009090a2030ull,0x2031303631303030ull,0x3163303434327830ull,
0x3030317830203030ull,0x7830203530383130ull,0x3030316330343432ull,0x3066783009090a20ull,
0x3020313030303030ull,0x3030303030306578ull,0x3030306678302032ull,0x6578302031303030ull,
0x2032303030303030ull,0x323031783009090aull,0x7830203131303864ull,0x6235643230613030ull,
0x3835303031783020ull,0x3330783020353130ull,0x0a20663339613965ull,0x3631303178300909ull,
0x3078302039303038ull,0x2037623762393037ull,0x3038353130317830ull,0x6533307830206430ull,
0x090a206631363339ull,0x3034303065783009ull,0x3034783020313130ull,0x3020303837383030ull,
0x3030383830303178ull,0x6635303078302039ull,0x09090a2033323835ull,0x3038323330317830ull,
0x6633307830206430ull,0x7830206265643030ull,0x3131303034303065ull,0x3830303034783020ull,
0x3009090a20303837ull,0x3030383630303178ull,0x6130613078302039ull,0x3178302037383839ull,
0x2064303038653230ull,0x6539336633307830ull,0x783009090a203336ull,0x3131303034303065ull,
0x3830303034783020ull,0x3031783020303837ull,0x3020393030383530ull,0x3736653335653078ull,
0x31783009090a2062ull,0x2064303038333030ull,0x3766366633307830ull,0x3030657830203736ull,
0x7830203131303034ull,0x3038373830303034ull,0x3031783009090a20ull,0x3020393030383733ull,
0x3234346533373078ull,0x6432303178302033ull,0x3078302064303038ull,0x2062653463396633ull,
0x303065783009090aull,0x7830203131303034ull,0x3038373830303034ull,0x3836303031783020ull,
0x3230783020393030ull,0x0a20623630393636ull,0x3730303178300909ull,0x3078302064303038ull,
0x2033353934636633ull,0x3030343030657830ull,0x3030347830203131ull,0x090a203038373830ull,
0x3831333031783009ull,0x6330783020393030ull,0x3020333163623866ull,0x3030383630303178ull,
0x6566333078302064ull,0x09090a2066633366ull,0x3030343030657830ull,0x3030347830203930ull,
0x7830203038373830ull,0x3131303864323031ull,0x3465336330783020ull,0x3009090a20373330ull,
0x3130383233303178ull,0x6466333078302035ull,0x3178302033393935ull,0x2039313038303030ull,
0x3030303030307830ull,0x783009090a203330ull,0x6431303830303031ull,0x3030303030783020ull,
0x3065783020333030ull,0x3020393030303230ull,0x3837303130303478ull,0x65783009090a2030ull,
0x2064663931363030ull,0x3734303030657830ull,0x3030317830203863ull,0x7830203030343832ull,
0x3430363830303031ull,0x3061783009090a20ull,0x3020313034303030ull,0x3832343034346578ull,
0x3030306678302030ull,0x6578302031303030ull,0x2032303030303030ull,0x303061783009090aull,
0x7830203130303030ull,0x3238373430343063ull,0x3230303032783020ull,0x3430783020313438ull,
0x0a20303837303430ull,0x6530306478300909ull,0x6178302031303232ull,0x2030383730306330ull,
0x3164303130337830ull,0x3234367830206466ull,0x090a203863373031ull,0x6133313032783009ull,
0x3032783020383434ull,0x3020343436613131ull,0x3030653030303178ull,0x3030303078302033ull,
0x09090a2030383230ull,0x3030303030337830ull,0x3030307830203330ull,0x7830203038373030ull,
0x3934383131303036ull,0x3030303036783020ull,0x3009090a20303837ull,0x6631643231303378ull,
0x3032343678302064ull,0x3378302038633763ull,0x2033303030303030ull,0x3230303030307830ull,
0x783009090a203038ull,0x3130306631303132ull,0x3030303030783020ull,0x3061783020333030ull,
0x3020313030303030ull,0x3837303034343478ull,0x31783009090a2030ull,0x2030303038323030ull,
0x3238303030317830ull,0x3030617830203430ull,0x7830203533383430ull,0x3038373030323430ull,
0x3032783009090a20ull,0x3020333030636534ull,0x3837303030303078ull,0x6430303478302030ull,
0x3078302035353831ull,0x2030383730313030ull,0x303033783009090aull,0x7830203930343232ull,
0x3038373030313463ull,0x6330303032783020ull,0x3430783020313538ull,0x0a20303837383032ull,
0x3230303378300909ull,0x6378302064346132ull,0x2030383730303134ull,0x3038323030317830ull,
0x3030317830203034ull,0x090a203434323830ull,0x6131303032783009ull,0x3030783020313034ull,
0x3020333030303030ull,0x3030303030306178ull,0x3034343478302031ull,0x09090a2030383730ull,
0x3038303030317830ull,0x3030307830203131ull,0x7830203330303030ull,0x3531303830303031ull,
0x3066663330783020ull,0x3009090a20333030ull,0x3030303031306578ull,0x3030303878302039ull,
0x6578302030383730ull,0x2064663530343030ull,0x3738313030657830ull,0x783009090a203863ull,
0x3130303830303031ull,0x3030303030783020ull,0x3031783020333030ull,0x3020353030383030ull,
0x3030303030303078ull,0x65783009090a2033ull,0x2064663530303030ull,0x3163303030657830ull,
0x3430617830203834ull,0x7830203330303330ull,0x3030303030303030ull,0x3031783009090a20ull,
0x3020333030303232ull,0x3031303030303078ull,0x3030303178302030ull,0x3078302031303038ull,
0x2033303030303030ull,0x303031783009090aull,0x7830203530303830ull,0x3330303866666630ull,
0x3330343031783020ull,0x3030783020333030ull,0x0a20303837303030ull,0x3030303178300909ull,
0x3078302031303038ull,0x2033303030303030ull,0x3038303030317830ull,0x6662307830203530ull,
0x090a203330303065ull,0x3831323031783009ull,0x6130783020313130ull,0x3020666137343165ull,
0x3130383730303178ull,0x6466333078302035ull,0x09090a2037316561ull,0x3430303030657830ull,
0x3030367830203133ull,0x7830203038373030ull,0x6466393134303065ull,0x3430313065783020ull,
0x3009090a20386337ull,0x3030323034306178ull,0x3030303078302033ull,0x3178302030303030ull,
0x2033303037343230ull,0x3130303030307830ull,0x783009090a203030ull,0x3130383163303065ull,
0x3030303038783020ull,0x3031783020303837ull,0x3020393030383833ull,0x3737373337353078ull,
0x31783009090a2037ull,0x2064303038393230ull,0x3739333063307830ull,0x3330317830206630ull,
0x7830203131303863ull,0x6636633337346330ull,0x3031783009090a20ull,0x3020353130383231ull,
0x3262343430343078ull,0x3730303178302033ull,0x3078302031323038ull,0x2037613835353032ull,
0x333031783009090aull,0x7830203532303830ull,0x6662303930303430ull,0x3864333031783020ull,
0x3030783020393130ull,0x0a20373565313037ull,0x6632303178300909ull,0x3078302064313038ull,
0x2066663035333063ull,0x3030323030657830ull,0x3030347830203930ull,0x090a203038373031ull,
0x3038303065783009ull,0x3034783020313230ull,0x3020303837383130ull,0x3130386531303178ull,
0x3565613078302031ull,0x09090a2066336134ull,0x3038303330317830ull,0x3063307830203531ull,
0x7830203764393233ull,0x3931303863323031ull,0x3138313930783020ull,0x3009090a20333035ull,
0x3130383731303178ull,0x3330343078302064ull,0x6578302037353137ull,0x2039303030323030ull,
0x3730313030347830ull,0x783009090a203038ull,0x3132303038303065ull,0x3831303034783020ull,
0x3031783020303837ull,0x3020313130386430ull,0x3236383262313078ull,0x31783009090a2033ull,
0x2035313038333130ull,0x3034303034307830ull,0x3230317830206264ull,0x7830203931303864ull,
0x3337303535363030ull,0x3031783009090a20ull,0x3020643130383033ull,0x3266303230633078ull,
0x3230306578302037ull,0x3478302039303030ull,0x2030383730313030ull,0x303065783009090aull,
0x7830203931303038ull,0x3038373831303034ull,0x3830303031783020ull,0x3030783020313130ull,
0x0a20333030303030ull,0x3030303178300909ull,0x3078302035313038ull,0x2033303030666633ull,
0x3831323030657830ull,0x3030387830203930ull,0x090a203038373030ull,0x3036303065783009ull,
0x3034783020313130ull,0x3020303837303130ull,0x3034383230303178ull,0x3030303178302030ull,
0x09090a2034303638ull,0x3838323030317830ull,0x3030317830203830ull,0x7830206330613830ull,
0x3330306130343032ull,0x3030303030783020ull,0x3009090a20303837ull,0x3030323034303178ull,
0x3030303078302033ull,0x3178302030383730ull,0x2031303038303030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3530303830303031ull,0x3030303030783020ull,0x3065783020333030ull,
0x3020646639313030ull,0x6337303130306578ull,0x61783009090a2038ull,0x2033303032653330ull,
0x3030303030307830ull,0x3330317830203030ull,0x7830203330303931ull,0x3030313030303030ull,
0x3031783009090a20ull,0x3020313030383030ull,0x3030303030303078ull,0x3030303178302033ull,
0x3078302035303038ull,0x2033303030666633ull,0x303065783009090aull,0x7830203930343030ull,
0x3038373030303436ull,0x3830303031783020ull,0x3030783020313030ull,0x0a20333030303030ull,
0x3030303178300909ull,0x3078302035303038ull,0x2033303030303030ull,0x3530303030657830ull,
0x3030657830206466ull,0x090a203863373031ull,0x3830303031783009ull,0x3030783020313130ull,
0x3020333030303030ull,0x3130383030303178ull,0x6666373078302035ull,0x09090a2033303030ull,
0x3438323030317830ull,0x3030317830203030ull,0x7830203430363830ull,0x6466353034303065ull,
0x3430303065783020ull,0x3009090a20386332ull,0x3030316232306178ull,0x3030303078302033ull,
0x3178302030303030ull,0x2031313230303030ull,0x3763333036307830ull,0x783009090a203038ull,
0x3330306639323031ull,0x3030303030783020ull,0x3033783020303031ull,0x3020646639303038ull,
0x6337303134343678ull,0x31783009090a2038ull,0x2031306330303030ull,0x3563303434327830ull,
0x3030317830203030ull,0x7830203530653030ull,0x3030356330343432ull,0x3065783009090a20ull,
0x3020313034303030ull,0x3035303030303878ull,0x3030303178302030ull,0x3278302039303031ull,
0x2030303563303434ull,0x303031783009090aull,0x7830203930613030ull,0x3038326330343432ull,
0x3034313033783020ull,0x6365783020643032ull,0x0a20303837303031ull,0x3238306478300909ull,
0x3078302035303230ull,0x2030383730303434ull,0x3630313830647830ull,0x3434307830206430ull,
0x090a203038373030ull,0x3033383064783009ull,0x3430783020353032ull,0x3020303837343034ull,
0x3634303030303278ull,0x3030343078302031ull,0x09090a2030383763ull,0x3330343830337830ull,
0x3434367830206466ull,0x7830203863376330ull,0x3833303830303031ull,0x3832303031783020ull,
0x3009090a20633332ull,0x3365313030313278ull,0x3234343078302064ull,0x3278302030303534ull,
0x2031363033303031ull,0x3538323434307830ull,0x783009090a203030ull,0x3130303830303031ull,
0x3030303030783020ull,0x3031783020333030ull,0x3020353030383030ull,0x3030306666333078ull,
0x65783009090a2033ull,0x2031306331303030ull,0x3730303030367830ull,0x3030317830203038ull,
0x7830203030303830ull,0x3430323832303031ull,0x3032783009090a20ull,0x3020333030636534ull,
0x3837303030303078ull,0x3030303178302030ull,0x3078302039303038ull,0x2033303030303030ull,
0x303031783009090aull,0x7830206430303830ull,0x3330303066666230ull,0x3130303065783020ull,
0x3036783020313163ull,0x0a20303837383030ull,0x3030303178300909ull,0x3178302038303038ull,
0x2063303238323030ull,0x3830323030657830ull,0x3030387830203130ull,0x090a203038373030ull,
0x3030303065783009ull,0x3036783020393130ull,0x3020303837303030ull,0x3030386531303178ull,
0x6561333078302031ull,0x09090a2033663038ull,0x3038623030317830ull,0x6533307830203530ull,
0x7830203338333162ull,0x3932303834303031ull,0x6137623830783020ull,0x3009090a20336238ull,
0x3230383532303178ull,0x6465333078302064ull,0x6578302033656530ull,0x2031326330363030ull,
0x3730303030387830ull,0x783009090a203038ull,0x3130303130303065ull,0x3832303034783020ull,
0x3031783020303837ull,0x3020393230386632ull,0x3736323066393078ull,0x31783009090a2037ull,
0x2064323038363230ull,0x6233666533307830ull,0x3030657830203732ull,0x7830203130303130ull,
0x3038373832303034ull,0x3031783009090a20ull,0x3020393230383631ull,0x3930626139613078ull,
0x6230303178302037ull,0x3078302064323038ull,0x2066353437316633ull,0x303065783009090aull,
0x7830203130303130ull,0x3038373832303034ull,0x3834313031783020ull,0x3230783020393230ull,
0x0a20373135623164ull,0x3730303178300909ull,0x3078302064323038ull,0x2066313763336633ull,
0x3031303030657830ull,0x3030347830203130ull,0x090a203038373832ull,0x3864323031783009ull,
0x3930783020393230ull,0x3020333765623332ull,0x3230383432303178ull,0x3666333078302064ull,
0x09090a2033393432ull,0x3031303030657830ull,0x3030347830203130ull,0x7830203038373832ull,
0x3932303834303031ull,0x3939393930783020ull,0x3009090a20663361ull,0x3230383931303178ull,
0x3866333078302064ull,0x6578302062393939ull,0x2031303031303030ull,0x3738323030347830ull,
0x783009090a203038ull,0x3932303834313031ull,0x3535353530783020ull,0x3031783020373535ull,
0x3020643230383531ull,0x3535356266333078ull,0x65783009090a2037ull,0x2039323031303030ull,
0x3738323030347830ull,0x3030657830203038ull,0x7830203130633030ull,0x3038373031303436ull,
0x3032783009090a20ull,0x3020353032383030ull,0x3030303130303078ull,0x6130306578302033ull,
0x3878302031323031ull,0x2030383730303030ull,0x303065783009090aull,0x7830203130633034ull,
0x3038373030303434ull,0x3330303061783020ull,0x3434783020313130ull,0x0a20303837303134ull,
0x3830306578300909ull,0x3878302031326330ull,0x2030383730303030ull,0x3062303030337830ull,
0x3030307830203933ull,0x090a203330303030ull,0x3866323031783009ull,0x6630783020393230ull,
0x3020663933616665ull,0x3230383230303178ull,0x6566333078302064ull,0x09090a2037653236ull,
0x3430303030657830ull,0x3030347830203930ull,0x7830203038373032ull,0x3132633130303061ull,
0x3031343434783020ull,0x3009090a20303837ull,0x3038306130306578ull,0x3130303478302031ull,
0x6578302030383738ull,0x2031323031613030ull,0x3730303030347830ull,0x783009090a203038ull,
0x3931633030303065ull,0x3032303436783020ull,0x3065783020303837ull,0x3020393134303030ull,
0x3837383130383678ull,0x31783009090a2030ull,0x2039303038663330ull,0x3839336233307830ull,
0x3130317830203330ull,0x7830206430303865ull,0x6263626137633330ull,0x3065783009090a20ull,
0x3020393038303230ull,0x3837383130303478ull,0x3030306578302030ull,0x3678302039303030ull,
0x2030383738303030ull,0x323031783009090aull,0x7830203330303162ull,0x3038373030303030ull,
0x3830303031783020ull,0x3030783020313030ull,0x0a20333030303030ull,0x3030303178300909ull,
0x3078302035303038ull,0x2033303030666637ull,0x3530303030657830ull,0x3130657830206466ull,
0x090a203863376330ull,0x3561323031783009ull,0x3030783020333030ull,0x3020303832303030ull,
0x3034303030306578ull,0x3030303678302039ull,0x09090a2030383738ull,0x3031623230317830ull,
0x3030307830203330ull,0x7830203038373030ull,0x3130303830303031ull,0x3030303030783020ull,
0x3009090a20333030ull,0x3030383030303178ull,0x3030303078302035ull,0x6578302033303030ull,
0x2064663530303030ull,0x3738303030657830ull,0x783009090a203863ull,0x3330306361323031ull,
0x3030303030783020ull,0x3031783020303031ull,0x3020393030383030ull,0x3030303030303078ull,
0x31783009090a2033ull,0x2064303038303030ull,0x3030666666307830ull,0x3230317830203330ull,
0x7830203330303162ull,0x3038373030303030ull,0x3031783009090a20ull,0x3020313030383030ull,
0x3030303030303078ull,0x3030303178302033ull,0x3078302035303038ull,0x2033303030666637ull,
0x303065783009090aull,0x7830206466353030ull,0x3863373830303065ull,0x3130303031783020ull,
0x3432783020393036ull,0x0a20303031633034ull,0x3030303178300909ull,0x3278302064303831ull,
0x2030303163303434ull,0x3430303030617830ull,0x3434657830203131ull,0x090a203238373430ull,
0x3830303031783009ull,0x3030783020313030ull,0x3020333030303030ull,0x3030383030303178ull,
0x3030303078302035ull,0x09090a2033303030ull,0x3930303030657830ull,0x3030657830206466ull,
0x7830203863373031ull,0x3931303830303031ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3130383030303178ull,0x6666373078302064ull,0x3178302033303030ull,0x2030303838303030ull,
0x6138323030317830ull,0x783009090a203430ull,0x6466393036303065ull,0x3430303065783020ull,
0x3061783020386332ull,0x3020333030373133ull,0x3030303030303078ull,0x31783009090a2030ull,
0x2039313230303030ull,0x3763333034307830ull,0x3330317830203038ull,0x7830203330303230ull,
0x3030313030303030ull,0x3033783009090a20ull,0x3020646664303038ull,0x6337303134343678ull,
0x3030303178302038ull,0x3278302031306330ull,0x2030303563303434ull,0x303031783009090aull,
0x7830203530653030ull,0x3030356330343432ull,0x3030303065783020ull,0x3038783020313038ull,
0x0a20303035303030ull,0x3030303178300909ull,0x3278302039303031ull,0x2030303563303434ull,
0x6130303030317830ull,0x3434327830203930ull,0x090a203038326330ull,0x3034313033783009ull,
0x6365783020643032ull,0x3020303837303031ull,0x3032303238306478ull,0x3034343078302035ull,
0x09090a2030383730ull,0x3630313830647830ull,0x3434307830206430ull,0x7830203038373030ull,
0x3530323033383064ull,0x3430343430783020ull,0x3009090a20303837ull,0x3634303030303278ull,
0x3030343078302031ull,0x3378302030383763ull,0x2064663330343830ull,0x3763303434367830ull,
0x783009090a203863ull,0x3833303832303031ull,0x3830303031783020ull,0x3132783020633332ull,
0x3020643365313030ull,0x3035343234343078ull,0x32783009090a2030ull,0x2031363033303031ull,
0x3538323434307830ull,0x3030317830203030ull,0x7830203130303830ull,0x3330303030303030ull,
0x3031783009090a20ull,0x3020353030383030ull,0x3030306666333078ull,0x3030306578302033ull,
0x3678302031306331ull,0x2030383730303030ull,0x303031783009090aull,0x7830203030303832ull,
0x3430323830303031ull,0x6365343032783020ull,0x3030783020333030ull,0x0a20303837303030ull,
0x3030303178300909ull,0x3078302039303038ull,0x2033303030303030ull,0x3038303030317830ull,
0x6662307830206430ull,0x090a203330303066ull,0x3130303065783009ull,0x3036783020313163ull,
0x3020303837383030ull,0x3030383230303178ull,0x3030303178302038ull,0x09090a2063303238ull,
0x3830323030657830ull,0x3030387830203130ull,0x7830203038373030ull,0x3931303030303065ull,
0x3030303036783020ull,0x3009090a20303837ull,0x3030386531303178ull,0x6561333078302031ull,
0x3178302033663038ull,0x2035303038623030ull,0x3331626533307830ull,0x783009090a203338ull,
0x3932303834303031ull,0x6137623830783020ull,0x3031783020336238ull,0x3020643230383532ull,
0x6565306465333078ull,0x65783009090a2033ull,0x2031326330363030ull,0x3730303030387830ull,
0x3030657830203038ull,0x7830203130303130ull,0x3038373832303034ull,0x3031783009090a20ull,
0x3020393230386632ull,0x3736323066393078ull,0x3632303178302037ull,0x3078302064323038ull,
0x2037326233666533ull,0x303065783009090aull,0x7830203130303130ull,0x3038373832303034ull,
0x3836313031783020ull,0x6130783020393230ull,0x0a20373930626139ull,0x6230303178300909ull,
0x3078302064323038ull,0x2066353437316633ull,0x3031303030657830ull,0x3030347830203130ull,
0x090a203038373832ull,0x3834313031783009ull,0x3230783020393230ull,0x3020373135623164ull,
0x3230383730303178ull,0x3366333078302064ull,0x09090a2066313763ull,0x3031303030657830ull,
0x3030347830203130ull,0x7830203038373832ull,0x3932303864323031ull,0x6233323930783020ull,
0x3009090a20333765ull,0x3230383432303178ull,0x3666333078302064ull,0x6578302033393432ull,
0x2031303031303030ull,0x3738323030347830ull,0x783009090a203038ull,0x3932303834303031ull,
0x3939393930783020ull,0x3031783020663361ull,0x3020643230383931ull,0x3939393866333078ull,
0x65783009090a2062ull,0x2031303031303030ull,0x3738323030347830ull,0x3130317830203038ull,
0x7830203932303834ull,0x3735353535353530ull,0x3031783009090a20ull,0x3020643230383531ull,
0x3535356266333078ull,0x3030306578302037ull,0x3478302039323031ull,0x2030383738323030ull,
0x303065783009090aull,0x7830203130633030ull,0x3038373031303436ull,0x3830303032783020ull,
0x3030783020353032ull,0x0a20333030303130ull,0x6130306578300909ull,0x3878302031323031ull,
0x2030383730303030ull,0x6330343030657830ull,0x3034347830203130ull,0x090a203038373030ull,
0x3330303061783009ull,0x3434783020313130ull,0x3020303837303134ull,0x3263303830306578ull,
0x3030303878302031ull,0x09090a2030383730ull,0x3062303030337830ull,0x3030307830203933ull,
0x7830203330303030ull,0x3932303866323031ull,0x6166656630783020ull,0x3009090a20663933ull,
0x3230383230303178ull,0x6566333078302064ull,0x6578302037653236ull,0x2039303430303030ull,
0x3730323030347830ull,0x783009090a203038ull,0x3132633130303061ull,0x3031343434783020ull,
0x3065783020303837ull,0x3020313038306130ull,0x3837383130303478ull,0x65783009090a2030ull,
0x2031323031613030ull,0x3730303030347830ull,0x3030657830203038ull,0x7830203931633030ull,
0x3038373032303436ull,0x3065783009090a20ull,0x3020393134303030ull,0x3837383130383678ull,
0x6633303178302030ull,0x3078302039303038ull,0x2033303839336233ull,0x313031783009090aull,
0x7830206430303865ull,0x6263626137633330ull,0x3032303065783020ull,0x3034783020393038ull,
0x0a20303837383130ull,0x3030306578300909ull,0x3678302031303030ull,0x2030383738303030ull,
0x3037313330317830ull,0x3030307830203330ull,0x090a203038373030ull,0x3830303031783009ull,
0x3030783020313030ull,0x3020333030303030ull,0x3030383030303178ull,0x6666373078302035ull,
0x09090a2033303030ull,0x3530303030657830ull,0x3130657830206466ull,0x7830203863376330ull,
0x3330303930333031ull,0x3030303030783020ull,0x3009090a20303832ull,0x3034303030306578ull,
0x3030303678302031ull,0x6178302030383738ull,0x2031303030303030ull,0x3734303434657830ull,
0x783009090a203038ull,0x3330303731333031ull,0x3030303030783020ull,0x3031783020303837ull,
0x3020313030383030ull,0x3030303030303078ull,0x31783009090a2033ull,0x2035303038303030ull,
0x3030303030307830ull,0x3030657830203330ull,0x7830206466393030ull,0x3863373830303065ull,
0x3031783009090a20ull,0x3020333030303133ull,0x3031303030303078ull,0x3030303178302030ull,
0x3078302031303038ull,0x2033303030303030ull,0x303031783009090aull,0x7830203530303830ull,
0x3330303066666630ull,0x3731333031783020ull,0x3030783020333030ull,0x0a20303837303030ull,
0x3030303178300909ull,0x3078302031303038ull,0x2033303030303030ull,0x3038303030317830ull,
0x6637307830203530ull,0x090a203330303066ull,0x3030303065783009ull,0x3065783020646639ull,
0x3020386337383030ull,0x3038303030303178ull,0x3330363078302031ull,0x09090a2030383663ull,
0x6130303030317830ull,0x3034307830203530ull,0x7830203038366333ull,0x3130363130303031ull,
0x6330343432783020ull,0x3009090a20303031ull,0x3038313030303178ull,0x3034343278302035ull,
0x6678302030303163ull,0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,
0x3330303265333031ull,0x3030303030783020ull,0x3031783020303837ull,0x3020313030383030ull,
0x3030303030303078ull,0x31783009090a2033ull,0x2035303038303030ull,0x3030303030307830ull,
0x3030657830203330ull,0x7830206466353030ull,0x3863373031303065ull,0x3031783009090a20ull,
0x3020313130383030ull,0x3030303030303078ull,0x3030303178302033ull,0x3078302035313038ull,
0x2033303030666637ull,0x303031783009090aull,0x7830203030343832ull,0x3430363830303031ull,
0x3034303065783020ull,0x3065783020646635ull,0x0a20386332343030ull,0x3733306178300909ull,
0x3078302033303062ull,0x2030303030303030ull,0x3230303030317830ull,0x3036307830203131ull,
0x090a203038376333ull,0x3936333031783009ull,0x3030783020333030ull,0x3020303031303030ull,
0x6639303038303378ull,0x3134343678302064ull,0x09090a2038633730ull,0x6330303030317830ull,
0x3434327830203130ull,0x7830203030356330ull,0x3530653030303031ull,0x6330343432783020ull,
0x3009090a20303035ull,0x3034303030306578ull,0x3030303878302031ull,0x3178302030303530ull,
0x2039303031303030ull,0x3563303434327830ull,0x783009090a203030ull,0x3930613030303031ull,
0x6330343432783020ull,0x3033783020303832ull,0x3020643032303431ull,0x3837303031636578ull,
0x64783009090a2030ull,0x2035303230323830ull,0x3730303434307830ull,0x3830647830203038ull,
0x7830206430363031ull,0x3038373030343430ull,0x3064783009090a20ull,0x3020353032303338ull,
0x3837343034343078ull,0x3030303278302030ull,0x3078302031363430ull,0x2030383763303034ull,
0x383033783009090aull,0x7830206466333034ull,0x3863376330343436ull,0x3830303031783020ull,
0x3031783020383330ull,0x0a20633332383230ull,0x3030313278300909ull,0x3078302064336531ull,
0x2030303534323434ull,0x3033303031327830ull,0x3434307830203136ull,0x090a203030353832ull,
0x3830303031783009ull,0x3030783020313030ull,0x3020333030303030ull,0x3030383030303178ull,
0x6666333078302035ull,0x09090a2033303030ull,0x6331303030657830ull,0x3030367830203130ull,
0x7830203038373030ull,0x3030303830303031ull,0x3832303031783020ull,0x3009090a20343032ull,
0x3030636534303278ull,0x3030303078302033ull,0x3178302030383730ull,0x2039303038303030ull,
0x3030303030307830ull,0x783009090a203330ull,0x6430303830303031ull,0x3066666230783020ull,
0x3065783020333030ull,0x3020313163313030ull,0x3837383030303678ull,0x31783009090a2030ull,
0x2038303038303030ull,0x3238323030317830ull,0x3030657830206330ull,0x7830203130383032ull,
0x3038373030303038ull,0x3065783009090a20ull,0x3020393130303030ull,0x3837303030303678ull,
0x6531303178302030ull,0x3078302031303038ull,0x2033663038656133ull,0x303031783009090aull,
0x7830203530303862ull,0x3338333162653330ull,0x3834303031783020ull,0x3830783020393230ull,
0x0a20336238613762ull,0x3532303178300909ull,0x3078302064323038ull,0x2033656530646533ull,
0x6330363030657830ull,0x3030387830203132ull,0x090a203038373030ull,0x3130303065783009ull,
0x3034783020313030ull,0x3020303837383230ull,0x3230386632303178ull,0x3066393078302039ull,
0x09090a2037373632ull,0x3038363230317830ull,0x6533307830206432ull,0x7830203732623366ull,
0x3130303130303065ull,0x3832303034783020ull,0x3009090a20303837ull,0x3230383631303178ull,
0x6139613078302039ull,0x3178302037393062ull,0x2064323038623030ull,0x3437316633307830ull,
0x783009090a206635ull,0x3130303130303065ull,0x3832303034783020ull,0x3031783020303837ull,
0x3020393230383431ull,0x3135623164323078ull,0x31783009090a2037ull,0x2064323038373030ull,
0x3763336633307830ull,0x3030657830206631ull,0x7830203130303130ull,0x3038373832303034ull,
0x3031783009090a20ull,0x3020393230386432ull,0x3765623332393078ull,0x3432303178302033ull,
0x3078302064323038ull,0x2033393432366633ull,0x303065783009090aull,0x7830203130303130ull,
0x3038373832303034ull,0x3834303031783020ull,0x3930783020393230ull,0x0a20663361393939ull,
0x3931303178300909ull,0x3078302064323038ull,0x2062393939386633ull,0x3031303030657830ull,
0x3030347830203130ull,0x090a203038373832ull,0x3834313031783009ull,0x3530783020393230ull,
0x3020373535353535ull,0x3230383531303178ull,0x6266333078302064ull,0x09090a2037353535ull,
0x3031303030657830ull,0x3030347830203932ull,0x7830203038373832ull,0x3130633030303065ull,
0x3031303436783020ull,0x3009090a20303837ull,0x3032383030303278ull,0x3130303078302035ull,
0x6578302033303030ull,0x2031323031613030ull,0x3730303030387830ull,0x783009090a203038ull,
0x3130633034303065ull,0x3030303434783020ull,0x3061783020303837ull,0x3020313130333030ull,
0x3837303134343478ull,0x65783009090a2030ull,0x2031326330383030ull,0x3730303030387830ull,
0x3030337830203038ull,0x7830203933306230ull,0x3330303030303030ull,0x3031783009090a20ull,
0x3020393230386632ull,0x3933616665663078ull,0x3230303178302066ull,0x3078302064323038ull,
0x2037653236656633ull,0x303065783009090aull,0x7830203930343030ull,0x3038373032303034ull,
0x3130303061783020ull,0x3434783020313263ull,0x0a20303837303134ull,0x6130306578300909ull,
0x3478302031303830ull,0x2030383738313030ull,0x3031613030657830ull,0x3030347830203132ull,
0x090a203038373030ull,0x3030303065783009ull,0x3436783020393163ull,0x3020303837303230ull,
0x3134303030306578ull,0x3130383678302039ull,0x09090a2030383738ull,0x3038663330317830ull,
0x6233307830203930ull,0x7830203330383933ull,0x6430303865313031ull,0x6137633330783020ull,
0x3009090a20626362ull,0x3038303230306578ull,0x3130303478302039ull,0x6578302030383738ull,
0x2039303030303030ull,0x3738303030367830ull,0x783009090a203038ull,0x3330306237333031ull,
0x3030303030783020ull,0x3031783020303837ull,0x3020313030383030ull,0x3030303030303078ull,
0x31783009090a2033ull,0x2035303038303030ull,0x3030666637307830ull,0x3030657830203330ull,
0x7830206466353030ull,0x3863376330313065ull,0x3031783009090a20ull,0x3020333030663633ull,
0x3832303030303078ull,0x3030306578302030ull,0x3678302039303430ull,0x2030383738303030ull,
0x333031783009090aull,0x7830203330306237ull,0x3038373030303030ull,0x3830303031783020ull,
0x3030783020313030ull,0x0a20333030303030ull,0x3030303178300909ull,0x3078302035303038ull,
0x2033303030303030ull,0x3530303030657830ull,0x3030657830206466ull,0x090a203863373830ull,
0x3637333031783009ull,0x3030783020333030ull,0x3020303031303030ull,0x3030383030303178ull,
0x3030303078302039ull,0x09090a2033303030ull,0x3038303030317830ull,0x6666307830206430ull,
0x7830203330303066ull,0x3330306237333031ull,0x3030303030783020ull,0x3009090a20303837ull,
0x3030383030303178ull,0x3030303078302031ull,0x3178302033303030ull,0x2035303038303030ull,
0x3030666637307830ull,0x783009090a203330ull,0x6466353030303065ull,0x3830303065783020ull,
0x3031783020386337ull,0x3020393036313030ull,0x3031633034343278ull,0x31783009090a2030ull,
0x2064303831303030ull,0x3163303434327830ull,0x3030617830203030ull,0x7830203131343030ull,
0x3238373430343465ull,0x3031783009090a20ull,0x3020313030383030ull,0x3030303030303078ull,
0x3030303178302033ull,0x3078302035303038ull,0x2033303030303030ull,0x303065783009090aull,
0x7830206466393030ull,0x3863373031303065ull,0x3830303031783020ull,0x3030783020393130ull,
0x0a20333030303030ull,0x3030303178300909ull,0x3078302064313038ull,0x2033303030666637ull,
0x3838303030317830ull,0x3030317830203030ull,0x090a203430613832ull,0x3036303065783009ull,
0x3065783020646639ull,0x3020386332343030ull,0x3030316533306178ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3230303030317830ull,0x3034307830203931ull,0x7830203038376333ull,
0x3330306363333031ull,0x3030303030783020ull,0x3009090a20303031ull,0x6664303038303378ull,
0x3134343678302064ull,0x3178302038633730ull,0x2031306330303030ull,0x3563303434327830ull,
0x783009090a203030ull,0x3530653030303031ull,0x6330343432783020ull,0x3065783020303035ull,
0x3020313038303030ull,0x3035303030303878ull,0x31783009090a2030ull,0x2039303031303030ull,
0x3563303434327830ull,0x3030317830203030ull,0x7830203930613030ull,0x3038326330343432ull,
0x3033783009090a20ull,0x3020643032303431ull,0x3837303031636578ull,0x3238306478302030ull,
0x3078302035303230ull,0x2030383730303434ull,0x383064783009090aull,0x7830206430363031ull,
0x3038373030343430ull,0x3033383064783020ull,0x3430783020353032ull,0x0a20303837343034ull,
0x3030303278300909ull,0x3078302031363430ull,0x2030383763303034ull,0x3330343830337830ull,
0x3434367830206466ull,0x090a203863376330ull,0x3832303031783009ull,0x3031783020383330ull,
0x3020633332383030ull,0x3365313030313278ull,0x3234343078302064ull,0x09090a2030303534ull,
0x3033303031327830ull,0x3434307830203136ull,0x7830203030353832ull,0x3130303830303031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3030383030303178ull,0x6666333078302035ull,
0x6578302033303030ull,0x2031306331303030ull,0x3730303030367830ull,0x783009090a203038ull,
0x3030303832303031ull,0x3830303031783020ull,0x3032783020343032ull,0x3020333030636534ull,
0x3837303030303078ull,0x31783009090a2030ull,0x2039303038303030ull,0x3030303030307830ull,
0x3030317830203330ull,0x7830206430303830ull,0x3330303066666230ull,0x3065783009090a20ull,
0x3020313163313030ull,0x3837383030303678ull,0x3230303178302030ull,0x3178302038303038ull,
0x2063303238303030ull,0x303065783009090aull,0x7830203130383032ull,0x3038373030303038ull,
0x3030303065783020ull,0x3036783020393130ull,0x0a20303837303030ull,0x6531303178300909ull,
0x3078302031303038ull,0x2033663038656133ull,0x3038623030317830ull,0x6533307830203530ull,
0x090a203338333162ull,0x3834303031783009ull,0x3830783020393230ull,0x3020336238613762ull,
0x3230383532303178ull,0x6465333078302064ull,0x09090a2033656530ull,0x6330363030657830ull,
0x3030387830203132ull,0x7830203038373030ull,0x3130303130303065ull,0x3832303034783020ull,
0x3009090a20303837ull,0x3230386632303178ull,0x3066393078302039ull,0x3178302037373632ull,
0x2064323038363230ull,0x6233666533307830ull,0x783009090a203732ull,0x3130303130303065ull,
0x3832303034783020ull,0x3031783020303837ull,0x3020393230383631ull,0x3930626139613078ull,
0x31783009090a2037ull,0x2064323038623030ull,0x3437316633307830ull,0x3030657830206635ull,
0x7830203130303130ull,0x3038373832303034ull,0x3031783009090a20ull,0x3020393230383431ull,
0x3135623164323078ull,0x3730303178302037ull,0x3078302064323038ull,0x2066313763336633ull,
0x303065783009090aull,0x7830203130303130ull,0x3038373832303034ull,0x3864323031783020ull,
0x3930783020393230ull,0x0a20333765623332ull,0x3432303178300909ull,0x3078302064323038ull,
0x2033393432366633ull,0x3031303030657830ull,0x3030347830203130ull,0x090a203038373832ull,
0x3834303031783009ull,0x3930783020393230ull,0x3020663361393939ull,0x3230383931303178ull,
0x3866333078302064ull,0x09090a2062393939ull,0x3031303030657830ull,0x3030347830203130ull,
0x7830203038373832ull,0x3932303834313031ull,0x3535353530783020ull,0x3009090a20373535ull,
0x3230383531303178ull,0x6266333078302064ull,0x6578302037353535ull,0x2039323031303030ull,
0x3738323030347830ull,0x783009090a203038ull,0x3130633030303065ull,0x3031303436783020ull,
0x3032783020303837ull,0x3020353032383030ull,0x3030303130303078ull,0x65783009090a2033ull,
0x2031323031613030ull,0x3730303030387830ull,0x3030657830203038ull,0x7830203130633034ull,
0x3038373030303434ull,0x3061783009090a20ull,0x3020313130333030ull,0x3837303134343478ull,
0x3830306578302030ull,0x3878302031326330ull,0x2030383730303030ull,0x303033783009090aull,
0x7830203933306230ull,0x3330303030303030ull,0x3866323031783020ull,0x6630783020393230ull,
0x0a20663933616665ull,0x3230303178300909ull,0x3078302064323038ull,0x2037653236656633ull,
0x3430303030657830ull,0x3030347830203930ull,0x090a203038373032ull,0x3130303061783009ull,
0x3434783020313263ull,0x3020303837303134ull,0x3038306130306578ull,0x3130303478302031ull,
0x09090a2030383738ull,0x3031613030657830ull,0x3030347830203132ull,0x7830203038373030ull,
0x3931633030303065ull,0x3032303436783020ull,0x3009090a20303837ull,0x3134303030306578ull,
0x3130383678302039ull,0x3178302030383738ull,0x2039303038663330ull,0x3839336233307830ull,
0x783009090a203330ull,0x6430303865313031ull,0x6137633330783020ull,0x3065783020626362ull,
0x3020393038303230ull,0x3837383130303478ull,0x65783009090a2030ull,0x2031303030303030ull,
0x3738303030367830ull,0x3330317830203038ull,0x7830203330303165ull,0x3038373030303030ull,
0x3031783009090a20ull,0x3020313030383030ull,0x3030303030303078ull,0x3030303178302033ull,
0x3078302035303038ull,0x2033303030666637ull,0x303065783009090aull,0x7830206466353030ull,
0x3863376330313065ull,0x3364333031783020ull,0x3030783020333030ull,0x0a20303832303030ull,
0x3030306578300909ull,0x3678302031303430ull,0x2030383738303030ull,0x3030303030617830ull,
0x3434657830203130ull,0x090a203038373430ull,0x3165333031783009ull,0x3030783020333030ull,
0x3020303837303030ull,0x3030383030303178ull,0x3030303078302031ull,0x09090a2033303030ull,
0x3038303030317830ull,0x3030307830203530ull,0x7830203330303030ull,0x6466393030303065ull,
0x3830303065783020ull,0x3009090a20386337ull,0x3030616433303178ull,0x3030303078302033ull,
0x3178302030303130ull,0x2031303038303030ull,0x3030303030307830ull,0x783009090a203330ull,
0x3530303830303031ull,0x3066666630783020ull,0x3031783020333030ull,0x3020333030316533ull,
0x3837303030303078ull,0x31783009090a2030ull,0x2031303038303030ull,0x3030303030307830ull,
0x3030317830203330ull,0x7830203530303830ull,0x3330303066663730ull,0x3065783009090a20ull,
0x3020646639303030ull,0x6337383030306578ull,0x3030303178302038ull,0x3078302031303830ull,
0x2030383663333036ull,0x303031783009090aull,0x7830203530613030ull,0x3038366333303430ull,
0x3130303031783020ull,0x3432783020313036ull,0x0a20303031633034ull,0x3030303178300909ull,
0x3278302035303831ull,0x2030303163303434ull,0x3030303030667830ull,0x3030657830203130ull,
0x090a203230303030ull,0x3030303066783009ull,0x3065783020313030ull,0x3020323030303030ull,
0x3130386432303178ull,0x3061303078302031ull,0x09090a2062356432ull,0x3038353030317830ull,
0x6533307830203531ull,0x7830206633396139ull,0x3930303836313031ull,0x6239303730783020ull,
0x3009090a20376237ull,0x3030383531303178ull,0x3965333078302064ull,0x6578302066313633ull,
0x2031313030343030ull,0x3738303030347830ull,0x783009090a203038ull,0x3930303838303031ull,
0x3566353030783020ull,0x3031783020333238ull,0x3020643030383233ull,0x6564303066333078ull,
0x65783009090a2062ull,0x2031313030343030ull,0x3738303030347830ull,0x3030317830203038ull,
0x7830203930303836ull,0x3738383961306130ull,0x3031783009090a20ull,0x3020643030386532ull,
0x3665393366333078ull,0x3430306578302033ull,0x3478302031313030ull,0x2030383738303030ull,
0x303031783009090aull,0x7830203930303835ull,0x6237366533356530ull,0x3833303031783020ull,
0x3330783020643030ull,0x0a20373637663666ull,0x3430306578300909ull,0x3478302031313030ull,
0x2030383738303030ull,0x3038373330317830ull,0x3337307830203930ull,0x090a203332343465ull,
0x3864323031783009ull,0x3330783020643030ull,0x3020626534633966ull,0x3130303430306578ull,
0x3030303478302031ull,0x09090a2030383738ull,0x3038363030317830ull,0x3632307830203930ull,
0x7830206236303936ull,0x6430303837303031ull,0x3463663330783020ull,0x3009090a20333539ull,
0x3130303430306578ull,0x3030303478302031ull,0x3178302030383738ull,0x2039303038313330ull,
0x6362386663307830ull,0x783009090a203331ull,0x6430303836303031ull,0x6665663330783020ull,
0x3065783020666333ull,0x3020393030303430ull,0x3837383030303478ull,0x31783009090a2030ull,
0x2031313038643230ull,0x3034653363307830ull,0x3330317830203733ull,0x7830203531303832ull,
0x3339393564663330ull,0x3031783009090a20ull,0x3020393130383030ull,0x3030303030303078ull,
0x3030303178302033ull,0x3078302064313038ull,0x2033303030303030ull,0x303065783009090aull,
0x7830203930303032ull,0x3038373031303034ull,0x3136303065783020ull,0x3065783020646639ull,
0x0a20386337343030ull,0x3230303178300909ull,0x3178302030303438ull,0x2034303638303030ull,
0x3430303030617830ull,0x3434657830203130ull,0x090a203038323430ull,0x3030303066783009ull,
0x3065783020313030ull,0x3020323030303030ull,0x3030303030306178ull,0x3034306378302031ull,
0x09090a2032383734ull,0x6132303030327830ull,0x3034307830203934ull,0x7830203038373834ull,
0x3130383265303064ull,0x3030633061783020ull,0x3009090a20303837ull,0x6631643231303378ull,
0x3132343678302064ull,0x3278302038633730ull,0x2031353832303030ull,0x3763343034307830ull,
0x783009090a203038ull,0x3330303231323031ull,0x3030303030783020ull,0x3033783020303832ull,
0x3020333030303030ull,0x3837303030303078ull,0x31783009090a2030ull,0x2031313430303030ull,
0x3763333036307830ull,0x3030317830203038ull,0x7830203531363030ull,0x3038376333303430ull,
0x3031783009090a20ull,0x3020393130303030ull,0x3837633330363078ull,0x3030303178302030ull,
0x3078302064313230ull,0x2030383763333034ull,0x303031783009090aull,0x7830203932303030ull,
0x3038376333303630ull,0x3030303031783020ull,0x3430783020643232ull,0x0a20303837633330ull,
0x3030303178300909ull,0x3078302031333430ull,0x2030383763333036ull,0x3630303030317830ull,
0x3034307830203533ull,0x090a203038376333ull,0x3034313033783009ull,0x3465783020393036ull,
0x3020303837303031ull,0x3030386633303178ull,0x3030303078302031ull,0x09090a2066373030ull,
0x3430303030647830ull,0x3034307830203930ull,0x7830203038373030ull,0x3933343866333032ull,
0x6666666630783020ull,0x3009090a20666666ull,0x3032303431303378ull,0x3031346578302035ull,
0x6478302030383730ull,0x2031303230303030ull,0x3730303034307830ull,0x783009090a203038ull,
0x6433303866333032ull,0x6666666630783020ull,0x3031783020666666ull,0x3020393530383030ull,
0x3030303030303078ull,0x31783009090a2033ull,0x2031303038653330ull,0x3030303030307830ull,
0x3030337830206637ull,0x7830206466663130ull,0x3863373831303436ull,0x3033783009090a20ull,
0x3020646664313030ull,0x3431383130343678ull,0x3734306178302038ull,0x3078302033303032ull,
0x2030303030303030ull,0x343031783009090aull,0x7830203330303237ull,0x3030313030303030ull,
0x3030303061783020ull,0x3463783020393063ull,0x0a20303837343035ull,0x3030303178300909ull,
0x3078302031303038ull,0x2033303030303030ull,0x3038303030317830ull,0x6637307830203530ull,
0x090a203330303066ull,0x3030303065783009ull,0x3065783020646635ull,0x3020386337633030ull,
0x3030383234303178ull,0x3030303078302033ull,0x09090a2030383230ull,0x3431303030317830ull,
0x3036307830203130ull,0x7830203038376333ull,0x3530303830303031ull,0x3830303030783020ull,
0x3009090a20333030ull,0x3036313130306478ull,0x3030343078302035ull,0x3378302030383734ull,
0x2033303030303030ull,0x3730303030307830ull,0x783009090a203038ull,0x3930383030303061ull,
0x3430353463783020ull,0x3031783020303837ull,0x3020313030383030ull,0x3030303030303078ull,
0x31783009090a2033ull,0x2035303038303030ull,0x3030666637307830ull,0x3030657830203330ull,
0x7830206466353030ull,0x3863376330303065ull,0x3031783009090a20ull,0x3020333030313334ull,
0x3832303030303078ull,0x3030303178302030ull,0x3078302031303831ull,0x2030383763333034ull,
0x303031783009090aull,0x7830203530303830ull,0x3330303830303030ull,0x3131303064783020ull,
0x3430783020353061ull,0x0a20303837343030ull,0x3030303378300909ull,0x3078302033303030ull,
0x2030383730303030ull,0x3038303030317830ull,0x3030307830203130ull,0x090a203330303030ull,
0x3830303031783009ull,0x3030783020353030ull,0x3020333030303030ull,0x3263303030306578ull,
0x3030306578302031ull,0x09090a2030383738ull,0x3038303030317830ull,0x3030307830203130ull,
0x7830203330303030ull,0x3930633030303061ull,0x3430353463783020ull,0x3009090a20303837ull,
0x3030383030303178ull,0x3030303078302035ull,0x6578302033303030ull,0x2031303830303030ull,
0x3738303030657830ull,0x783009090a203038ull,0x3132303130303064ull,0x3030303430783020ull,
0x3031783020303837ull,0x3020313030383030ull,0x3030303030303078ull,0x31783009090a2033ull,
0x2035303038303030ull,0x3030666637307830ull,0x3030657830203330ull,0x7830203532343030ull,
0x3038373830303065ull,0x3061783009090a20ull,0x3020393038303030ull,0x3837343035346378ull,
0x3030306578302030ull,0x6578302031303430ull,0x2030383738303030ull,0x303064783009090aull,
0x7830203130323130ull,0x3038373030303430ull,0x3130303064783020ull,0x3430783020646631ull,
0x0a20386337343030ull,0x3434303178300909ull,0x3078302033303034ull,0x2030303130303030ull,
0x3038303030317830ull,0x3030307830203130ull,0x090a203330303030ull,0x3830303031783009ull,
0x6630783020353030ull,0x3020333030386666ull,0x3030303030303378ull,0x3030303078302033ull,
0x09090a2030383730ull,0x3830303030617830ull,0x3534637830203132ull,0x7830203038373430ull,
0x3130303830303031ull,0x3030303030783020ull,0x3009090a20333030ull,0x3030383030303178ull,
0x3030303078302035ull,0x3178302033303030ull,0x2039303038303030ull,0x3030303030307830ull,
0x783009090a203330ull,0x6430303830303031ull,0x3066663730783020ull,0x3065783020333030ull,
0x3020646631313230ull,0x6337383030306578ull,0x65783009090a2038ull,0x2064666430303030ull,
0x3138303030657830ull,0x3430317830203834ull,0x7830203330303135ull,0x3030313030303030ull,
0x3064783009090a20ull,0x3020313036316430ull,0x3837383030343078ull,0x3030303178302030ull,
0x3078302035303038ull,0x2033303030303038ull,0x303064783009090aull,0x7830203530303031ull,
0x3038373030303430ull,0x3830303031783020ull,0x3030783020313030ull,0x0a20333030303030ull,
0x3030303378300909ull,0x3078302033303030ull,0x2030383730303030ull,0x6330303030617830ull,
0x3534637830203132ull,0x090a203038373430ull,0x3830303031783009ull,0x3030783020313030ull,
0x3020333030303030ull,0x3030383030303178ull,0x3030303078302035ull,0x09090a2033303030ull,
0x3038303030317830ull,0x3030307830203930ull,0x7830203330303030ull,0x6430303830303031ull,
0x3066663730783020ull,0x3009090a20333030ull,0x6631313230306578ull,0x3030306578302064ull,
0x6578302038633738ull,0x2064663930303030ull,0x3138303030657830ull,0x783009090a203834ull,
0x3330303036343031ull,0x3030303030783020ull,0x3064783020303031ull,0x3020313036316430ull,
0x3837383030343078ull,0x31783009090a2030ull,0x2035303038303030ull,0x3030303038307830ull,
0x3030647830203330ull,0x7830203130303031ull,0x3038373030303430ull,0x3031783009090a20ull,
0x3020353030383030ull,0x3030306666373078ull,0x3130306478302033ull,0x3078302035303030ull,
0x2030383734303034ull,0x303031783009090aull,0x7830203130303830ull,0x3330303030303030ull,
0x3030303033783020ull,0x3030783020333030ull,0x0a20303837303030ull,0x3030303178300909ull,
0x3078302031303038ull,0x2033303030303030ull,0x6631303030337830ull,0x3063367830206466ull,
0x090a203863373430ull,0x3836343061783009ull,0x3030783020333030ull,0x3020303030303030ull,
0x3030383634303178ull,0x3030303078302033ull,0x09090a2030303130ull,0x3038303030317830ull,
0x3030307830203130ull,0x7830203330303030ull,0x3530303830303031ull,0x3035333430783020ull,
0x3009090a20333030ull,0x3263303030306578ull,0x3030303878302039ull,0x3178302030383730ull,
0x2039353038613030ull,0x6666666666307830ull,0x783009090a206666ull,0x3130303030303066ull,
0x3030303065783020ull,0x3031783020323030ull,0x3020313030383030ull,0x3030303030303078ull,
0x33783009090a2033ull,0x2064666431303030ull,0x3734303063367830ull,0x3430617830203863ull,
0x7830203330303137ull,0x3030303030303030ull,0x3031783009090a20ull,0x3020333030313734ull,
0x3031303030303078ull,0x3030303178302030ull,0x3078302031303038ull,0x2033303030303030ull,
0x303031783009090aull,0x7830203530303830ull,0x3330303035333430ull,0x3030303065783020ull,
0x3038783020313338ull,0x0a20303837303030ull,0x3633303278300909ull,0x3078302039356361ull,
0x2033303030303030ull,0x3030303030667830ull,0x3030657830203130ull,0x090a203230303030ull,
0x3130303031783009ull,0x3630783020313038ull,0x3020323837633330ull,0x3363393230303278ull,
0x6666663078302031ull,0x09090a2033636666ull,0x3831343130337830ull,0x3134637830203530ull,
0x7830203038373030ull,0x3530613130343032ull,0x3430303430783020ull,0x3009090a20303837ull,
0x3030303030306178ull,0x3634306378302039ull,0x3978302030383734ull,0x2039303430303030ull,
0x3730303030307830ull,0x783009090a203038ull,0x3931343130303031ull,0x6333303430783020ull,
0x3032783020303837ull,0x3020353365393230ull,0x6366666666663078ull,0x61783009090a2033ull,
0x2031313430303030ull,0x3730303434637830ull,0x3030317830203038ull,0x7830203930303830ull,
0x3330303030303030ull,0x3031783009090a20ull,0x3020643030383030ull,0x3030306666333078ull,
0x3030306578302033ull,0x3478302031323830ull,0x2030383738303034ull,0x303065783009090aull,
0x7830203933303138ull,0x3038373030303038ull,0x3038303065783020ull,0x3034783020313238ull,
0x0a20303837303130ull,0x3830306578300909ull,0x3478302031326331ull,0x2030383730323030ull,
0x3030383030657830ull,0x3034347830203930ull,0x090a203038373830ull,0x3132303065783009ull,
0x3034783020393030ull,0x3020303837303230ull,0x3161313431303378ull,0x3031346378302064ull,
0x09090a2030383730ull,0x3631303430327830ull,0x3034307830206431ull,0x7830203038376331ull,
0x3131633034303065ull,0x3030303038783020ull,0x3009090a20303837ull,0x3238303030306578ull,
0x3130343478302039ull,0x6578302030383738ull,0x2031313431383030ull,0x3730313030347830ull,
0x783009090a203038ull,0x3130383030303065ull,0x3831303434783020ull,0x3065783020303837ull,
0x3020393130303230ull,0x3837303130303478ull,0x31783009090a2030ull,0x2031326530303030ull,
0x3763333036307830ull,0x3130337830203038ull,0x7830206431653034ull,0x3038373030313465ull,
0x3031783009090a20ull,0x3020353230386633ull,0x3730303030303078ull,0x3930306478302066ull,
0x3078302064316530ull,0x2030383730303034ull,0x303032783009090aull,0x7830206431653831ull,
0x3363666666666630ull,0x3130303033783020ull,0x3430783020353238ull,0x0a20303837343330ull,
0x3030303278300909ull,0x3078302035326530ull,0x2030383734323034ull,0x3231303030327830ull,
0x3034307830203932ull,0x090a203038373835ull,0x3965333032783009ull,0x3030783020353234ull,
0x3020663330303030ull,0x3230386433303178ull,0x3030303078302064ull,0x09090a2066373030ull,
0x3331623030337830ull,0x3034367830206466ull,0x7830203863376330ull,0x3330303965343061ull,
0x3030303030783020ull,0x3009090a20303030ull,0x3030633934303178ull,0x3030303078302033ull,
0x3178302030303130ull,0x2031306330303030ull,0x3763333034307830ull,0x783009090a203038ull,
0x3530343130343032ull,0x6331303430783020ull,0x3033783020303837ull,0x3020353032303431ull,
0x3837303031346378ull,0x32783009090a2030ull,0x2035303031303030ull,0x3734303034307830ull,
0x3430317830203038ull,0x7830203330303965ull,0x3038373030303030ull,0x3031783009090a20ull,
0x3020393130386633ull,0x3330303030303078ull,0x3630303378302066ull,0x3678302064663531ull,
0x2038633730313063ull,0x343061783009090aull,0x7830203330303865ull,0x3030303030303030ull,
0x3661343031783020ull,0x3030783020333030ull,0x0a20303031303030ull,0x3030303178300909ull,
0x3078302031303038ull,0x2033303030303038ull,0x3031303030647830ull,0x3034307830203130ull,
0x090a203038373030ull,0x3830303031783009ull,0x3730783020353030ull,0x3020333030306666ull,
0x3030303130306478ull,0x3030343078302035ull,0x09090a2030383734ull,0x3038303030317830ull,
0x3030307830203130ull,0x7830203330303030ull,0x3330303865343031ull,0x3030303030783020ull,
0x3009090a20303837ull,0x3130383030303178ull,0x3030383078302039ull,0x6478302033303030ull,
0x2064323031363030ull,0x3730303034307830ull,0x783009090a203038ull,0x3931303863303031ull,
0x6666666630783020ull,0x3033783020666266ull,0x3020646635313630ull,0x6337343030633678ull,
0x61783009090a2038ull,0x2033303037653430ull,0x3030303030307830ull,0x3430317830203030ull,
0x7830203330306661ull,0x3030313030303030ull,0x3031783009090a20ull,0x3020313030383030ull,
0x3030303030303078ull,0x3030303178302033ull,0x3078302035303631ull,0x2030383763333036ull,
0x343031783009090aull,0x7830203330303765ull,0x3038373030303030ull,0x3032303065783020ull,
0x3034783020313230ull,0x0a20303837303138ull,0x3230306578300909ull,0x3478302039313030ull,
0x2030383730313430ull,0x3031363030657830ull,0x3030657830203931ull,0x090a203038373433ull,
0x3030303061783009ull,0x6332783020393163ull,0x3020303837343130ull,0x3030303230306578ull,
0x3163303478302031ull,0x09090a2030383730ull,0x3038663330317830ull,0x3030307830203930ull,
0x7830206666666630ull,0x3530323032303064ull,0x3030303430783020ull,0x3009090a20303837ull,
0x3030383030303178ull,0x3130303078302039ull,0x6478302033303030ull,0x2035303230323030ull,
0x3734303034307830ull,0x783009090a203038ull,0x3930343966333032ull,0x3030303030783020ull,
0x3033783020663330ull,0x3020393034383030ull,0x3030303030303078ull,0x31783009090a2033ull,
0x2064303038303230ull,0x3030303030307830ull,0x3030337830203330ull,0x7830206466353033ull,
0x3863373831306336ull,0x3061783009090a20ull,0x3020333030356334ull,0x3030303030303078ull,
0x6334303178302030ull,0x3078302033303035ull,0x2030303130303030ull,0x303031783009090aull,
0x7830206430303830ull,0x3330303030303030ull,0x3033303033783020ull,0x6336783020313030ull,
0x0a20303837343130ull,0x3030306178300909ull,0x3278302031303030ull,0x2030383734313063ull,
0x6330303030647830ull,0x3034307830203931ull,0x090a203038373430ull,0x3030303031783009ull,
0x3430783020313032ull,0x3020303837633330ull,0x3030383030303178ull,0x3030303078302035ull,
0x09090a2033303030ull,0x3438303230327830ull,0x6666307830203930ull,0x7830206666666666ull,
0x3130303030303066ull,0x3030303065783020ull,0x3009090a20323030ull,0x3030383030303178ull,
0x3030303078302064ull,0x3378302033303030ull,0x2064663530333030ull,0x3734313063367830ull,
0x783009090a203863ull,0x6430343830323033ull,0x3030303030783020ull,0x3033783020333030ull,
0x3020353132303330ull,0x3836303030346378ull,0x33783009090a2030ull,0x2031313030323030ull,
0x3630303034657830ull,0x3030337830203038ull,0x7830206430303033ull,0x3038363030303463ull,
0x3064783009090a20ull,0x3020313038303530ull,0x3836343030343078ull,0x3030303178302030ull,
0x3078302031313038ull,0x2033303030303030ull,0x303033783009090aull,0x7830206430363034ull,
0x3038363431306336ull,0x3030303061783020ull,0x6332783020643036ull,0x0a20303836343130ull,
0x3330306478300909ull,0x3078302039316330ull,0x2030383634303034ull,0x3230323030337830ull,
0x3034657830203530ull,0x090a203038363030ull,0x3831303031783009ull,0x3030783020393030ull,
0x3020333030303030ull,0x3030303230306478ull,0x3030343078302064ull,0x09090a2030383730ull,
0x3030313030337830ull,0x3134657830203130ull,0x7830203038373030ull,0x3131323066313033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3030303430306478ull,0x3030343078302031ull,
0x6478302030383734ull,0x2039303030323030ull,0x3730303034307830ull,0x783009090a203038ull,
0x3930633032303064ull,0x3430303430783020ull,0x3064783020303837ull,0x3020393036303230ull,
0x3837303030343078ull,0x33783009090a2030ull,0x2035303230313030ull,0x3730303134657830ull,
0x3030317830203038ull,0x7830206430303830ull,0x3330303030303030ull,0x3033783009090a20ull,
0x3020646635303330ull,0x6337343130633678ull,0x6534306178302038ull,0x3078302033303036ull,
0x2030303030303030ull,0x343031783009090aull,0x7830203330303665ull,0x3030313030303030ull,
0x3831303032783020ull,0x3030783020313030ull,0x0a20333030303030ull,0x3030303178300909ull,
0x3078302039303038ull,0x2033303030303030ull,0x3130323030337830ull,0x3063367830206466ull,
0x090a203863373830ull,0x3565343061783009ull,0x3030783020333030ull,0x3020303030303030ull,
0x3030356534303178ull,0x3030303078302033ull,0x09090a2030303130ull,0x3238313030327830ull,
0x3030307830203530ull,0x7830203330303030ull,0x3130303030303066ull,0x3030303065783020ull,
0x3009090a20323030ull,0x3032306230306478ull,0x3030343078302035ull,0x6678302032383734ull,
0x2031303030303030ull,0x3030303030657830ull,0x783009090a203230ull,0x3130303030303066ull,
0x3030303065783020ull,0x3066783020323030ull,0x3020313030303030ull,0x3030303030306578ull,
0x33783009090a2032ull,0x2033303030303030ull,0x3730303030307830ull,0x3030667830203038ull,
0x7830203130303030ull,0x3030303030303065ull,0x3031783009090a20ull,0x3020393030383030ull,
0x3030306666373078ull,0x3230306478302033ull,0x3078302039303230ull,0x2030383730303034ull,
0x313033783009090aull,0x7830203935343034ull,0x3038373030313465ull,0x3864333031783020ull,
0x3030783020393030ull,0x0a20663730303030ull,0x6633303278300909ull,0x3078302035326361ull,
0x2066666666666666ull,0x3331323030337830ull,0x3034367830206466ull,0x090a203863376330ull,
0x3138353061783009ull,0x3030783020333030ull,0x3020303030303030ull,0x3030303030303178ull,
0x3330363078302039ull,0x09090a2030383763ull,0x3230303030317830ull,0x3034307830206430ull,
0x7830203038376333ull,0x3132323030303031ull,0x6333303630783020ull,0x3009090a20303837ull,
0x3030613135303178ull,0x3030303078302033ull,0x3178302030383230ull,0x2031313866303030ull,
0x3763333034307830ull,0x783009090a203038ull,0x3531303830303031ull,0x3066663730783020ull,
0x3061783020333030ull,0x3020393134303030ull,0x3837343035346378ull,0x65783009090a2030ull,
0x2064663930363030ull,0x3738313030657830ull,0x3030317830203863ull,0x7830203131386630ull,
0x3038376333303630ull,0x3031783009090a20ull,0x3020353130383030ull,0x3030306666373078ull,
0x3035303178302033ull,0x3078302033303031ull,0x2030383230303030ull,0x303031783009090aull,
0x7830203530303830ull,0x3330303830303030ull,0x3131303064783020ull,0x3430783020353030ull,
0x0a20303837343030ull,0x3835303178300909ull,0x3078302033303031ull,0x2030383730303030ull,
0x3930363030657830ull,0x3030657830206466ull,0x090a203863373830ull,0x3730353031783009ull,
0x3030783020333030ull,0x3020303031303030ull,0x3030383030303178ull,0x3030383078302031ull,
0x09090a2033303030ull,0x3031303030647830ull,0x3034307830203530ull,0x7830203038373030ull,
0x3130386630303031ull,0x6333303430783020ull,0x3009090a20303837ull,0x3030313835303178ull,
0x3030303078302033ull,0x3178302030383730ull,0x2031313866303030ull,0x3763333036307830ull,
0x783009090a203038ull,0x3531386630303031ull,0x6333303430783020ull,0x3065783020303837ull,
0x3020646635303430ull,0x6337383030306578ull,0x31783009090a2038ull,0x2033303031313530ull,
0x3130303030307830ull,0x3030317830203030ull,0x7830203130303830ull,0x3330303030303830ull,
0x3064783009090a20ull,0x3020313030313030ull,0x3837303030343078ull,0x3030303178302030ull,
0x3078302035303038ull,0x2033303030666637ull,0x303064783009090aull,0x7830203530303031ull,
0x3038373430303430ull,0x6630303031783020ull,0x3630783020313038ull,0x0a20303837633330ull,
0x3835303178300909ull,0x3078302033303031ull,0x2030383730303030ull,0x3331633730337830ull,
0x3063367830206466ull,0x090a203863373831ull,0x3831353031783009ull,0x3030783020333030ull,
0x3020303832303030ull,0x3030383030303178ull,0x3030303078302031ull,0x09090a2033303030ull,
0x3038303030317830ull,0x3334307830203530ull,0x7830203330303035ull,0x3130343030303065ull,
0x3030303038783020ull,0x3009090a20303837ull,0x3530383633303178ull,0x3030303078302064ull,
0x3178302033303030ull,0x2033303062313530ull,0x3730303030307830ull,0x783009090a203038ull,
0x6435386630303031ull,0x6333303430783020ull,0x3031783020303837ull,0x3020333030623135ull,
0x3837303030303078ull,0x31783009090a2030ull,0x2064353866303030ull,0x3763333036307830ull,
0x3030327830203038ull,0x7830203930636131ull,0x3363666666666630ull,0x3033783009090a20ull,
0x3020393034303431ull,0x3837303031346378ull,0x3034303278302030ull,0x3078302035303230ull,
0x2030383738303034ull,0x303061783009090aull,0x7830203930303030ull,0x3038373436343063ull,
0x3030303039783020ull,0x3030783020393134ull,0x0a20303837303030ull,0x3030303178300909ull,
0x3078302039303038ull,0x2033303030303030ull,0x3038303030317830ull,0x6633307830206430ull,
0x090a203330303066ull,0x3030303061783009ull,0x3465783020313130ull,0x3020303837343034ull,
0x3063303030306178ull,0x3034346378302031ull,0x09090a2030383730ull,0x3830303030657830ull,
0x3030347830203931ull,0x7830203038373830ull,0x3932633030303065ull,0x3030303034783020ull,
0x3009090a20303837ull,0x3263303630306578ull,0x3030303878302031ull,0x6578302030383730ull,
0x2039323031613030ull,0x3738323030347830ull,0x783009090a203038ull,0x3132383061303065ull,
0x3830303034783020ull,0x3065783020303837ull,0x3020313234313830ull,0x3837383230303478ull,
0x65783009090a2030ull,0x2031306330613030ull,0x3730303030347830ull,0x3030657830203038ull,
0x7830203131383030ull,0x3038373830303034ull,0x3031783009090a20ull,0x3020393130383030ull,
0x3030306666373078ull,0x3830306578302033ull,0x3478302039303830ull,0x2030383730303030ull,
0x303064783009090aull,0x7830203931363036ull,0x3038373030303430ull,0x3034313033783020ull,
0x3465783020393163ull,0x0a20303837303031ull,0x3030303378300909ull,0x3078302064316332ull,
0x2030383738313034ull,0x6530303030327830ull,0x3034307830206432ull,0x090a203038376335ull,
0x3864333031783009ull,0x3030783020393230ull,0x3020663730303030ull,0x3136396533303278ull,
0x3030303078302064ull,0x09090a2066333030ull,0x6630613030337830ull,0x3034367830206466ull,
0x7830203863373031ull,0x3330303038353061ull,0x3030303030783020ull,0x3009090a20303030ull,
0x3030643335303178ull,0x3030303078302033ull,0x3278302030383230ull,0x2031303631303430ull,
0x3738313034307830ull,0x783009090a203038ull,0x3130303866333032ull,0x3030303030783020ull,
0x3033783020663330ull,0x3020313030303431ull,0x3837303031346378ull,0x32783009090a2030ull,
0x2035303630303030ull,0x3730303034307830ull,0x3030317830203038ull,0x7830203130343030ull,
0x3038376333303430ull,0x3031783009090a20ull,0x3020333030303835ull,0x3837303030303078ull,
0x6633303178302030ull,0x3078302039303038ull,0x2066333030303030ull,0x303033783009090aull,
0x7830206466373132ull,0x3863376330306336ull,0x3634353031783020ull,0x3030783020333030ull,
0x0a20303832303030ull,0x3030303178300909ull,0x3078302031303038ull,0x2033303030303038ull,
0x3630303030647830ull,0x3034307830203130ull,0x090a203038373030ull,0x3830303031783009ull,
0x3730783020353030ull,0x3020333030306666ull,0x3030303130306478ull,0x3030343078302035ull,
0x09090a2030383734ull,0x3866303030317830ull,0x3036307830203130ull,0x7830203038376333ull,
0x3330303038353031ull,0x3030303030783020ull,0x3009090a20303837ull,0x3030386330303178ull,
0x6666663078302039ull,0x3178302066626666ull,0x2039313038303030ull,0x3030303038307830ull,
0x783009090a203330ull,0x6466373132303033ull,0x3831306336783020ull,0x3064783020386337ull,
0x3020393236303630ull,0x3837303030343078ull,0x31783009090a2030ull,0x2033303065343530ull,
0x3230303030307830ull,0x3030317830203038ull,0x7830203130386630ull,0x3038376333303430ull,
0x3031783009090a20ull,0x3020353034313030ull,0x3837633330363078ull,0x3835303178302030ull,
0x3078302033303030ull,0x2030383730303030ull,0x303065783009090aull,0x7830203930383038ull,
0x3038373030343034ull,0x3038303065783020ull,0x3034783020393138ull,0x0a20303837303038ull,
0x3830306578300909ull,0x3478302031303830ull,0x2030383730306330ull,0x3038663330317830ull,
0x3030307830203131ull,0x090a206666666630ull,0x3034303064783009ull,0x3430783020353132ull,
0x3020303837303030ull,0x3036393130303378ull,0x6666663078302035ull,0x09090a2033636666ull,
0x3038303030317830ull,0x3030307830203132ull,0x7830203330303031ull,0x3131303866313031ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3034303630306578ull,0x3130306578302064ull,
0x6478302030383734ull,0x2039306130383030ull,0x3734303034307830ull,0x783009090a203038ull,
0x6466333034303033ull,0x6330306336783020ull,0x3061783020386337ull,0x3020333030323635ull,
0x3030303030303078ull,0x61783009090a2030ull,0x2031313630303030ull,0x3734313063327830ull,
0x3530317830203038ull,0x7830203330303236ull,0x3038323030303030ull,0x3033783009090a20ull,
0x3020313030306337ull,0x3837343130633678ull,0x3030306178302030ull,0x3278302031303030ull,
0x2030383734313063ull,0x303064783009090aull,0x7830203131383030ull,0x3038373430303430ull,
0x3830323032783020ull,0x6630783020353032ull,0x0a20666666666666ull,0x3030303178300909ull,
0x3078302031303430ull,0x2030383763333034ull,0x3866303030317830ull,0x3036307830203930ull,
0x090a203038376333ull,0x3063373033783009ull,0x6336783020646633ull,0x3020616337383030ull,
0x3030653635306178ull,0x3030303078302033ull,0x09090a2030303030ull,0x3065363530317830ull,
0x3030307830203330ull,0x7830203038323030ull,0x6430323830323033ull,0x3030303030783020ull,
0x3009090a20333030ull,0x3130303330303378ull,0x3030346378302035ull,0x3378302030383730ull,
0x2035316130633730ull,0x3734313063367830ull,0x783009090a203038ull,0x3931343033303033ull,
0x3030303463783020ull,0x3033783020303837ull,0x3020313030303130ull,0x3837303030346578ull,
0x61783009090a2030ull,0x2064306130303030ull,0x3734313063327830ull,0x3030337830203038ull,
0x7830203930343031ull,0x3038373030303465ull,0x3064783009090a20ull,0x3020313030303630ull,
0x3837343030343078ull,0x3330306478302030ull,0x3078302031313830ull,0x2030383734303034ull,
0x303033783009090aull,0x7830203530303031ull,0x3238373030313465ull,0x3066313033783020ull,
0x3463783020643034ull,0x0a20303837303031ull,0x3330306478300909ull,0x3078302064303230ull,
0x2030383734303034ull,0x3038313030317830ull,0x3030307830203530ull,0x090a203330303030ull,
0x3031303064783009ull,0x3430783020353136ull,0x3020303837303030ull,0x3030303130306478ull,
0x3030343078302031ull,0x09090a2030383730ull,0x3830353030647830ull,0x3034307830203530ull,
0x7830203038373430ull,0x6466313031303064ull,0x3030303430783020ull,0x3009090a20386337ull,
0x3030653735306178ull,0x3030303078302033ull,0x3378302030303030ull,0x2031303430313030ull,
0x3730303134657830ull,0x783009090a203038ull,0x3330306537353031ull,0x3030303030783020ull,
0x3031783020303031ull,0x3020353030383130ull,0x3030303030303078ull,0x32783009090a2033ull,
0x2064303630303030ull,0x3734303034307830ull,0x3030327830203063ull,0x7830203530303831ull,
0x3330303030303030ull,0x3031783009090a20ull,0x3020353030303030ull,0x3836633330343078ull,
0x3030303178302030ull,0x3078302031303230ull,0x2030383763333036ull,0x303064783009090aull,
0x7830203530343130ull,0x3238373430303430ull,0x3030303031783020ull,0x3430783020313036ull,
0x0a20303837633330ull,0x3030306678300909ull,0x6578302031303030ull,0x2032303030303030ull,
0x3030303030667830ull,0x3030657830203130ull,0x090a203230303030ull,0x3030303033783009ull,
0x3030783020333030ull,0x3020303837303030ull,0x3030303030306678ull,0x3030306578302031ull,
0x7d090a2031303030ull,0x00000000000a7d0aull
};


}



extern "C" {


static const unsigned long long __deviceText_$compute_13$[] = {
0x6f69737265762e09ull,0x2e090a342e31206eull,0x7320746567726174ull,0x2f2f090a33315f6dull,
0x656c69706d6f6320ull,0x2f20687469772064ull,0x61636f6c2f727375ull,0x6f2f616475632f6cull,
0x696c2f34366e6570ull,0x2f090a65622f2f62ull,0x6e65706f766e202full,0x746c697562206363ull,
0x39303032206e6f20ull,0x0a0a39302d34302dull,0x752e206765722e09ull,0x313c617225203233ull,
0x65722e090a3b3e37ull,0x25203436752e2067ull,0x3b3e37313c616472ull,0x2e206765722e090aull,
0x3c61662520323366ull,0x722e090a3b3e3731ull,0x203436662e206765ull,0x3e37313c61646625ull,
0x206765722e090a3bull,0x767225203233752eull,0x722e090a3b3e353cull,0x203436752e206765ull,
0x3b3e353c76647225ull,0x2e206765722e090aull,0x3c76662520323366ull,0x65722e090a3b3e35ull,
0x25203436662e2067ull,0x0a3b3e353c766466ull,0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x6d6f43202f2f090aull,0x2f20676e696c6970ull,
0x78706d742f706d74ull,0x35303030305f7466ull,0x303030305f313739ull,0x5f37312d30303030ull,
0x6e61726973617571ull,0x72656e65476d6f64ull,0x314d535f726f7461ull,0x692e337070632e33ull,
0x632f706d742f2820ull,0x5a7a762e23494263ull,0x2f2f090a294c5455ull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f2f090a0a2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x202f2f090a2d2d2dull,0x3a736e6f6974704full,
0x2d2d2d2d2f2f090aull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x0a2d2d2d2d2d2d2dull,
0x72615420202f2f09ull,0x2c7874703a746567ull,0x5f6d733a41534920ull,0x69646e45202c3331ull,
0x6c7474696c3a6e61ull,0x746e696f50202c65ull,0x3a657a6953207265ull,0x20202f2f090a3436ull,
0x74704f2809334f2dull,0x6f6974617a696d69ull,0x296c6576656c206eull,0x672d20202f2f090aull,
0x6775626544280930ull,0x0a296c6576656c20ull,0x326d2d20202f2f09ull,0x74726f7065522809ull,
0x726f736976646120ull,0x2f2f090a29736569ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x662e090a0a2d2d2dull,0x3c22093109656c69ull,0x2d646e616d6d6f63ull,
0x090a223e656e696cull,0x093209656c69662eull,0x6d742f706d742f22ull,0x3030305f74667870ull,
0x30305f3137393530ull,0x312d303030303030ull,0x7269736175715f36ull,0x6e65476d6f646e61ull,
0x535f726f74617265ull,0x616475632e33314dull,0x227570672e326566ull,0x09656c69662e090aull,
0x2f7273752f220933ull,0x2f6363672f62696cull,0x6c2d34365f363878ull,0x756e672d78756e69ull,
0x692f332e332e342full,0x732f6564756c636eull,0x22682e6665646474ull,0x09656c69662e090aull,
0x2f7273752f220934ull,0x75632f6c61636f6cull,0x2e2f6e69622f6164ull,0x64756c636e692f2eull,
0x65642f7472632f65ull,0x6e75725f65636976ull,0x0a22682e656d6974ull,0x3509656c69662e09ull,
0x6c2f7273752f2209ull,0x6475632f6c61636full,0x2e2e2f6e69622f61ull,0x6564756c636e692full,
0x65645f74736f682full,0x22682e73656e6966ull,0x09656c69662e090aull,0x2f7273752f220936ull,
0x75632f6c61636f6cull,0x2e2f6e69622f6164ull,0x64756c636e692f2eull,0x69746c6975622f65ull,
0x2e73657079745f6eull,0x6c69662e090a2268ull,0x73752f2209370965ull,0x2f6c61636f6c2f72ull,
0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x697665642f656475ull,0x73657079745f6563ull,
0x69662e090a22682eull,0x752f22093809656cull,0x6c61636f6c2f7273ull,0x69622f616475632full,
0x636e692f2e2e2f6eull,0x6972642f6564756cull,0x657079745f726576ull,0x662e090a22682e73ull,
0x2f22093909656c69ull,0x61636f6c2f727375ull,0x622f616475632f6cull,0x6e692f2e2e2f6e69ull,
0x65742f6564756c63ull,0x79745f6572757478ull,0x090a22682e736570ull,0x303109656c69662eull,
0x6c2f7273752f2209ull,0x6475632f6c61636full,0x2e2e2f6e69622f61ull,0x6564756c636e692full,
0x5f726f746365762full,0x22682e7365707974ull,0x09656c69662e090aull,0x7273752f22093131ull,
0x632f6c61636f6c2full,0x2f6e69622f616475ull,0x756c636e692f2e2eull,0x63697665642f6564ull,
0x68636e75616c5f65ull,0x74656d617261705full,0x090a22682e737265ull,0x323109656c69662eull,
0x6c2f7273752f2209ull,0x6475632f6c61636full,0x2e2e2f6e69622f61ull,0x6564756c636e692full,
0x6f74732f7472632full,0x616c635f65676172ull,0x2e090a22682e7373ull,0x09333109656c6966ull,
0x6e692f7273752f22ull,0x69622f6564756c63ull,0x73657079742f7374ull,0x69662e090a22682eull,
0x2f2209343109656cull,0x6c636e692f727375ull,0x656d69742f656475ull,0x69662e090a22682eull,
0x722209353109656cull,0x2e657079746c6165ull,0x6c69662e090a2268ull,0x7571220936310965ull,
0x6f646e6172697361ull,0x746172656e65476dull,0x656e72656b5f726full,0x090a226875632e6cull,
0x373109656c69662eull,0x6c2f7273752f2209ull,0x6475632f6c61636full,0x2e2e2f6e69622f61ull,
0x6564756c636e692full,0x5f6e6f6d6d6f632full,0x6e6f6974636e7566ull,0x662e090a22682e73ull,
0x2209383109656c69ull,0x636f6c2f7273752full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,
0x632f6564756c636eull,0x5f636e75662f7472ull,0x22682e6f7263616dull,0x09656c69662e090aull,
0x7273752f22093931ull,0x632f6c61636f6c2full,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x5f6874616d2f6564ull,0x6e6f6974636e7566ull,0x662e090a22682e73ull,0x2209303209656c69ull,
0x636f6c2f7273752full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x642f6564756c636eull,
0x75665f6563697665ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x752f220931320965ull,
0x6c61636f6c2f7273ull,0x69622f616475632full,0x636e692f2e2e2f6eull,0x74616d2f6564756cull,
0x6174736e6f635f68ull,0x090a22682e73746eull,0x323209656c69662eull,0x6c2f7273752f2209ull,
0x6475632f6c61636full,0x2e2e2f6e69622f61ull,0x6564756c636e692full,0x615f31315f6d732full,
0x75665f63696d6f74ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x752f220933320965ull,
0x6c61636f6c2f7273ull,0x69622f616475632full,0x636e692f2e2e2f6eull,0x5f6d732f6564756cull,
0x696d6f74615f3231ull,0x6974636e75665f63ull,0x090a22682e736e6full,0x343209656c69662eull,
0x6c2f7273752f2209ull,0x6475632f6c61636full,0x2e2e2f6e69622f61ull,0x6564756c636e692full,
0x645f33315f6d732full,0x75665f656c62756full,0x2e736e6f6974636eull,0x6c69662e090a2268ull,
0x752f220935320965ull,0x6c61636f6c2f7273ull,0x69622f616475632full,0x636e692f2e2e2f6eull,
0x7865742f6564756cull,0x7465665f65727574ull,0x74636e75665f6863ull,0x0a22682e736e6f69ull,
0x3209656c69662e09ull,0x2f7273752f220936ull,0x75632f6c61636f6cull,0x2e2f6e69622f6164ull,
0x64756c636e692f2eull,0x665f6874616d2f65ull,0x736e6f6974636e75ull,0x7874705f6c62645full,
0x2e090a0a22682e33ull,0x612e2074736e6f63ull,0x2e2034206e67696cull,0x6261545f63203862ull,
0x3b5d3237335b656cull,0x72746e652e090a0aull,0x757136325a5f2079ull,0x6f646e6172697361ull,
0x746172656e65476dull,0x6c656e72654b726full,0x090a28206a6a6650ull,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x7361757136325a5full,0x476d6f646e617269ull,
0x726f746172656e65ull,0x66506c656e72654bull,0x74754f5f645f6a6aull,0x2e09090a2c747570ull,
0x752e206d61726170ull,0x6475635f5f203233ull,0x5a5f5f6d72617061ull,0x7269736175713632ull,
0x6e65476d6f646e61ull,0x654b726f74617265ull,0x6a6a66506c656e72ull,0x090a2c646565735full,
0x206d617261702e09ull,0x635f5f203233752eull,0x5f6d726170616475ull,0x7361757136325a5full,
0x476d6f646e617269ull,0x726f746172656e65ull,0x66506c656e72654bull,0x7b090a294e5f6a6aull,
0x2e206765722e090aull,0x313c722520323375ull,0x722e090a3b3e3034ull,0x203436752e206765ull,
0x3b3e32313c647225ull,0x2e206765722e090aull,0x353c662520323366ull,0x6765722e090a3b3eull,
0x2520646572702e20ull,0x090a3b3e35333c70ull,0x09363109636f6c2eull,0x424c240a30093336ull,
0x7136325a5f5f3142ull,0x646e617269736175ull,0x6172656e65476d6full,0x656e72654b726f74ull,
0x090a3a6a6a66506cull,0x09363109636f6c2eull,0x7663090a30093936ull,0x31752e3233752e74ull,
0x202c317225092036ull,0x3b782e6469746e25ull,0x202f2f0920202020ull,0x33752e747663090aull,
0x2509203631752e32ull,0x61746325202c3272ull,0x2020203b782e6469ull,0x756d090a202f2f09ull,
0x752e6f6c2e34326cull,0x2c33722509203233ull,0x7225202c31722520ull,0x202f2f0920203b32ull,
0x33752e747663090aull,0x2509203631752e32ull,0x64697425202c3472ull,0x20202020203b782eull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x2c347225202c3572ull,0x2020203b33722520ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x202c367225092032ull,0x202020203b357225ull,
0x2020202020202020ull,0x646c090a202f2f09ull,0x752e6d617261702eull,0x2c37722509203233ull,
0x616475635f5f5b20ull,0x325a5f5f6d726170ull,0x6172697361757136ull,0x656e65476d6f646eull,
0x72654b726f746172ull,0x5f6a6a66506c656eull,0x69202f2f093b5d4eull,0x635f5f2033343a64ull,
0x5f6d726170616475ull,0x7361757136325a5full,0x476d6f646e617269ull,0x726f746172656e65ull,
0x66506c656e72654bull,0x3078302b4e5f6a6aull,0x672e70746573090aull,0x2509203233752e65ull,
0x2c357225202c3170ull,0x2020203b37722520ull,0x2540090a202f2f09ull,0x0920617262203170ull,
0x30335f305f744c24ull,0x20202020203b3437ull,0x202f2f0920202020ull,0x33752e747663090aull,
0x2509203631752e32ull,0x64697425202c3872ull,0x20202020203b792eull,0x6f6d090a202f2f09ull,
0x2509203436752e76ull,0x545f63202c316472ull,0x2020203b656c6261ull,0x202f2f0920202020ull,
0x36752e747663090aull,0x2509203233752e34ull,0x387225202c326472ull,0x202020202020203bull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x202c336472250920ull,0x3231202c32647225ull,
0x202f2f0920203b34ull,0x36752e646461090aull,0x2c34647225092034ull,0x25202c3164722520ull,
0x202020203b336472ull,0x646c090a202f2f09ull,0x752e6d617261702eull,0x2c39722509203233ull,
0x616475635f5f5b20ull,0x325a5f5f6d726170ull,0x6172697361757136ull,0x656e65476d6f646eull,
0x72654b726f746172ull,0x5f6a6a66506c656eull,0x2f093b5d64656573ull,0x2037343a6469202full,
0x6170616475635f5full,0x7136325a5f5f6d72ull,0x646e617269736175ull,0x6172656e65476d6full,
0x656e72654b726f74ull,0x65735f6a6a66506cull,0x090a3078302b6465ull,0x203233752e646461ull,
0x25202c3031722509ull,0x3b357225202c3972ull,0x2f09202020202020ull,0x326c756d090a202full,
0x3233752e6f6c2e34ull,0x202c313172250920ull,0x377225202c387225ull,0x090a202f2f09203bull,
0x2e3233752e747663ull,0x3172250920363175ull,0x6174636e25202c32ull,0x2f09203b782e6469ull,
0x326c756d090a202full,0x3233752e6f6c2e34ull,0x202c333172250920ull,0x317225202c317225ull,
0x090a202f2f093b32ull,0x2e3436732e747663ull,0x6472250920323375ull,0x3b33317225202c35ull,
0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x7225202c36647225ull,
0x20203b34202c3564ull,0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203436752eull,
0x635f5f5b202c3764ull,0x5f6d726170616475ull,0x7361757136325a5full,0x476d6f646e617269ull,
0x726f746172656e65ull,0x66506c656e72654bull,0x74754f5f645f6a6aull,0x2f2f093b5d747570ull,
0x5f2039343a646920ull,0x726170616475635full,0x757136325a5f5f6dull,0x6f646e6172697361ull,
0x746172656e65476dull,0x6c656e72654b726full,0x4f5f645f6a6a6650ull,0x78302b7475707475ull,
0x752e646461090a30ull,0x3431722509203233ull,0x202c31317225202cull,0x202020203b357225ull,
0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3864722509203233ull,0x203b34317225202cull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x647225202c396472ull,
0x2020203b34202c38ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3031647225ull,
0x647225202c376472ull,0x2f2f092020203b39ull,0x5f305f744c240a20ull,0x2f200a3a36383533ull,
0x203e706f6f6c3c2full,0x646f6220706f6f4cull,0x3620656e696c2079ull,0x622e646e61090a39ull,
0x3531722509203233ull,0x202c30317225202cull,0x2020202020203b31ull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x3b30202c36317225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e7165ull,0x317225202c327025ull,0x3b36317225202c35ull,
0x40090a202f2f0920ull,0x2061726220327025ull,0x345f305f744c2409ull,0x202020203b383930ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x68202c393620656eull,0x6562616c20646165ull,0x5f744c242064656cull,
0x090a363835335f30ull,0x09363109636f6c2eull,0x646c090a30093437ull,0x752e74736e6f632eull,
0x3731722509203233ull,0x2b346472255b202cull,0x202f2f09203b5d30ull,0x5f632030353a6469ull,
0x78302b656c626154ull,0x752e617262090a30ull,0x5f744c240920696eull,0x203b323438335f30ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x383930345f305f74ull,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x68202c393620656eull,
0x6562616c20646165ull,0x5f744c242064656cull,0x090a363835335f30ull,0x203233752e766f6dull,
0x30202c3731722509ull,0x202020202020203bull,0x2f09202020202020ull,0x305f744c240a202full,
0x200a3a323438335full,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x64616568202c3936ull,0x64656c6562616c20ull,0x335f305f744c2420ull,
0x6c6873090a363835ull,0x722509203233622eull,0x30317225202c3831ull,0x2020203b3033202cull,
0x0a202f2f09202020ull,0x3233752e72687309ull,0x202c393172250920ull,0x3133202c38317225ull,
0x092020202020203bull,0x766f6d090a202f2full,0x722509203233752eull,0x20203b30202c3032ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,
0x2c39317225202c33ull,0x09203b3032722520ull,0x702540090a202f2full,0x2409206172622033ull,
0x3533345f305f744cull,0x2020202020203b34ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x646c090a36383533ull,0x752e74736e6f632eull,
0x3132722509203233ull,0x2b346472255b202cull,0x202f2f09203b5d34ull,0x5f632031353a6469ull,
0x78302b656c626154ull,0x622e726f78090a30ull,0x3731722509203233ull,0x202c31327225202cull,
0x2020203b37317225ull,0x4c240a202f2f0920ull,0x343533345f305f74ull,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x68202c393620656eull,
0x6562616c20646165ull,0x5f744c242064656cull,0x090a363835335f30ull,0x203233622e6c6873ull,
0x25202c3232722509ull,0x3b3932202c303172ull,0x2f09202020202020ull,0x2e726873090a202full,
0x3272250920323375ull,0x2c32327225202c33ull,0x202020203b313320ull,0x090a202f2f092020ull,
0x203233752e766f6dull,0x30202c3432722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x7225202c34702509ull,0x34327225202c3332ull,
0x090a202f2f09203bull,0x6172622034702540ull,0x5f305f744c240920ull,0x2020203b36363834ull,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,
0x0a363835335f305full,0x736e6f632e646c09ull,0x2509203233752e74ull,0x72255b202c353272ull,
0x09203b5d382b3464ull,0x32353a6469202f2full,0x656c6261545f6320ull,0x6f78090a3078302bull,
0x2509203233622e72ull,0x327225202c373172ull,0x3b37317225202c35ull,0x202f2f0920202020ull,
0x345f305f744c240aull,0x2f2f200a3a363638ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x393620656e696c20ull,0x6c2064616568202cull,0x242064656c656261ull,
0x3835335f305f744cull,0x622e6c6873090a36ull,0x3632722509203233ull,0x202c30317225202cull,
0x20202020203b3832ull,0x73090a202f2f0920ull,0x09203233752e7268ull,0x7225202c37327225ull,
0x203b3133202c3632ull,0x2f2f092020202020ull,0x752e766f6d090a20ull,0x3832722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x732e71652e707465ull,
0x2c35702509203233ull,0x25202c3732722520ull,0x2f2f09203b383272ull,0x2035702540090a20ull,
0x744c240920617262ull,0x3b383733355f305full,0x2020202020202020ull,0x2f200a202f2f0920ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,
0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,0x632e646c090a3638ull,
0x3233752e74736e6full,0x202c393272250920ull,0x32312b346472255bull,0x6469202f2f093b5dull,
0x61545f632033353aull,0x0a3078302b656c62ull,0x3233622e726f7809ull,0x202c373172250920ull,
0x7225202c39327225ull,0x09202020203b3731ull,0x5f744c240a202f2full,0x0a3a383733355f30ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x616568202c393620ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x6873090a36383533ull,
0x2509203233622e6cull,0x317225202c303372ull,0x20203b3732202c30ull,0x202f2f0920202020ull,
0x33752e726873090aull,0x2c31337225092032ull,0x33202c3033722520ull,0x2020202020203b31ull,
0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c323372ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,0x31337225202c3670ull,
0x203b32337225202cull,0x2540090a202f2f09ull,0x0920617262203670ull,0x38355f305f744c24ull,
0x20202020203b3039ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6c090a363835335full,0x2e74736e6f632e64ull,0x3372250920323375ull,
0x346472255b202c33ull,0x2f2f093b5d36312bull,0x632034353a646920ull,0x302b656c6261545full,
0x2e726f78090a3078ull,0x3172250920323362ull,0x2c33337225202c37ull,0x20203b3731722520ull,
0x240a202f2f092020ull,0x3938355f305f744cull,0x6c3c2f2f200a3a30ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,
0x744c242064656c65ull,0x0a363835335f305full,0x3233622e6c687309ull,0x202c343372250920ull,
0x3632202c30317225ull,0x092020202020203bull,0x726873090a202f2full,0x722509203233752eull,
0x34337225202c3533ull,0x2020203b3133202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,
0x202c363372250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e71652e70ull,0x25202c3770250920ull,0x337225202c353372ull,0x0a202f2f09203b36ull,
0x7262203770254009ull,0x305f744c24092061ull,0x20203b323034365full,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x2c393620656e696cull,0x616c206461656820ull,0x4c242064656c6562ull,0x363835335f305f74ull,
0x6e6f632e646c090aull,0x09203233752e7473ull,0x255b202c37337225ull,0x3b5d30322b346472ull,
0x353a6469202f2f09ull,0x6c6261545f632035ull,0x78090a3078302b65ull,0x09203233622e726full,
0x7225202c37317225ull,0x37317225202c3733ull,0x2f2f09202020203bull,0x5f305f744c240a20ull,
0x2f200a3a32303436ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3620656e696c2079ull,0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,
0x2e6c6873090a3638ull,0x3372250920323362ull,0x2c30317225202c38ull,0x202020203b353220ull,
0x090a202f2f092020ull,0x203233752e726873ull,0x25202c3933722509ull,0x3b3133202c383372ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3472250920323375ull,0x2020203b30202c30ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,0x3870250920323373ull,
0x202c39337225202cull,0x2f09203b30347225ull,0x38702540090a202full,0x4c24092061726220ull,
0x343139365f305f74ull,0x202020202020203bull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x64616568202c3936ull,
0x64656c6562616c20ull,0x335f305f744c2420ull,0x2e646c090a363835ull,0x33752e74736e6f63ull,
0x2c31347225092032ull,0x322b346472255b20ull,0x69202f2f093b5d34ull,0x545f632036353a64ull,
0x3078302b656c6261ull,0x33622e726f78090aull,0x2c37317225092032ull,0x25202c3134722520ull,
0x202020203b373172ull,0x744c240a202f2f09ull,0x3a343139365f305full,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x73090a363835335full,0x09203233622e6c68ull,
0x7225202c32347225ull,0x203b3432202c3031ull,0x2f2f092020202020ull,0x752e726873090a20ull,
0x3334722509203233ull,0x202c32347225202cull,0x20202020203b3133ull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x3b30202c34347225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e7165ull,0x347225202c397025ull,0x3b34347225202c33ull,
0x40090a202f2f0920ull,0x2061726220397025ull,0x375f305f744c2409ull,0x202020203b363234ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x68202c393620656eull,0x6562616c20646165ull,0x5f744c242064656cull,
0x090a363835335f30ull,0x74736e6f632e646cull,0x722509203233752eull,0x6472255b202c3534ull,
0x2f093b5d38322b34ull,0x2037353a6469202full,0x2b656c6261545f63ull,0x726f78090a307830ull,
0x722509203233622eull,0x35347225202c3731ull,0x203b37317225202cull,0x0a202f2f09202020ull,
0x34375f305f744c24ull,0x3c2f2f200a3a3632ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x2c393620656e696cull,0x616c206461656820ull,0x4c242064656c6562ull,
0x363835335f305f74ull,0x33622e6c6873090aull,0x2c36347225092032ull,0x32202c3031722520ull,
0x2020202020203b33ull,0x6873090a202f2f09ull,0x2509203233752e72ull,0x347225202c373472ull,
0x20203b3133202c36ull,0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c38347225092032ull,
0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,0x33732e71652e7074ull,
0x2c30317025092032ull,0x25202c3734722520ull,0x202f2f093b383472ull,0x203031702540090aull,
0x744c240920617262ull,0x3b383339375f305full,0x2020202020202020ull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x393620656e696c20ull,
0x6c2064616568202cull,0x242064656c656261ull,0x3835335f305f744cull,0x6f632e646c090a36ull,
0x203233752e74736eull,0x5b202c3934722509ull,0x5d32332b34647225ull,0x3a6469202f2f093bull,
0x6261545f63203835ull,0x090a3078302b656cull,0x203233622e726f78ull,0x25202c3731722509ull,
0x317225202c393472ull,0x2f09202020203b37ull,0x305f744c240a202full,0x200a3a383339375full,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x64616568202c3936ull,0x64656c6562616c20ull,0x335f305f744c2420ull,0x6c6873090a363835ull,
0x722509203233622eull,0x30317225202c3035ull,0x2020203b3232202cull,0x0a202f2f09202020ull,
0x3233752e72687309ull,0x202c313572250920ull,0x3133202c30357225ull,0x092020202020203bull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b30202c3235ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x31357225202c3131ull,
0x093b32357225202cull,0x702540090a202f2full,0x0920617262203131ull,0x34385f305f744c24ull,
0x20202020203b3035ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,0x656c6562616c2064ull,
0x5f305f744c242064ull,0x646c090a36383533ull,0x752e74736e6f632eull,0x3335722509203233ull,
0x2b346472255b202cull,0x202f2f093b5d3633ull,0x5f632039353a6469ull,0x78302b656c626154ull,
0x622e726f78090a30ull,0x3731722509203233ull,0x202c33357225202cull,0x2020203b37317225ull,
0x4c240a202f2f0920ull,0x303534385f305f74ull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x68202c393620656eull,0x6562616c20646165ull,
0x5f744c242064656cull,0x090a363835335f30ull,0x203233622e6c6873ull,0x25202c3435722509ull,
0x3b3132202c303172ull,0x2f09202020202020ull,0x2e726873090a202full,0x3572250920323375ull,
0x2c34357225202c35ull,0x202020203b313320ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x30202c3635722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3231702509ull,0x357225202c353572ull,0x090a202f2f093b36ull,
0x7262203231702540ull,0x305f744c24092061ull,0x20203b323639385full,0x2f09202020202020ull,
0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,0x0a363835335f305full,
0x736e6f632e646c09ull,0x2509203233752e74ull,0x72255b202c373572ull,0x093b5d30342b3464ull,
0x30363a6469202f2full,0x656c6261545f6320ull,0x6f78090a3078302bull,0x2509203233622e72ull,
0x357225202c373172ull,0x3b37317225202c37ull,0x202f2f0920202020ull,0x385f305f744c240aull,
0x2f2f200a3a323639ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x393620656e696c20ull,0x6c2064616568202cull,0x242064656c656261ull,0x3835335f305f744cull,
0x622e6c6873090a36ull,0x3835722509203233ull,0x202c30317225202cull,0x20202020203b3032ull,
0x73090a202f2f0920ull,0x09203233752e7268ull,0x7225202c39357225ull,0x203b3133202c3835ull,
0x2f2f092020202020ull,0x752e766f6d090a20ull,0x3036722509203233ull,0x202020203b30202cull,
0x2020202020202020ull,0x73090a202f2f0920ull,0x732e71652e707465ull,0x3331702509203233ull,
0x202c39357225202cull,0x2f2f093b30367225ull,0x3331702540090a20ull,0x4c24092061726220ull,
0x343734395f305f74ull,0x202020202020203bull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,0x2064616568202c39ull,
0x2064656c6562616cull,0x35335f305f744c24ull,0x632e646c090a3638ull,0x3233752e74736e6full,
0x202c313672250920ull,0x34342b346472255bull,0x6469202f2f093b5dull,0x61545f632031363aull,
0x0a3078302b656c62ull,0x3233622e726f7809ull,0x202c373172250920ull,0x7225202c31367225ull,
0x09202020203b3731ull,0x5f744c240a202f2full,0x0a3a343734395f30ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6873090a36383533ull,0x2509203233622e6cull,
0x317225202c323672ull,0x20203b3931202c30ull,0x202f2f0920202020ull,0x33752e726873090aull,
0x2c33367225092032ull,0x33202c3236722520ull,0x2020202020203b31ull,0x6f6d090a202f2f09ull,
0x2509203233752e76ull,0x203b30202c343672ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x652e70746573090aull,0x2509203233732e71ull,0x367225202c343170ull,0x3b34367225202c33ull,
0x2540090a202f2f09ull,0x2061726220343170ull,0x395f305f744c2409ull,0x202020203b363839ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x6568202c39362065ull,0x6c6562616c206461ull,0x305f744c24206465ull,
0x6c090a363835335full,0x2e74736e6f632e64ull,0x3672250920323375ull,0x346472255b202c35ull,
0x2f2f093b5d38342bull,0x632032363a646920ull,0x302b656c6261545full,0x2e726f78090a3078ull,
0x3172250920323362ull,0x2c35367225202c37ull,0x20203b3731722520ull,0x240a202f2f092020ull,
0x3839395f305f744cull,0x6c3c2f2f200a3a36ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,
0x0a363835335f305full,0x3233622e6c687309ull,0x202c363672250920ull,0x3831202c30317225ull,
0x092020202020203bull,0x726873090a202f2full,0x722509203233752eull,0x36367225202c3736ull,
0x2020203b3133202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x202c383672250920ull,
0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,0x3233732e71652e70ull,
0x202c353170250920ull,0x7225202c37367225ull,0x0a202f2f093b3836ull,0x6220353170254009ull,
0x5f744c2409206172ull,0x3b38393430315f30ull,0x0920202020202020ull,0x3c2f2f200a202f2full,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x2c393620656e696cull,
0x616c206461656820ull,0x4c242064656c6562ull,0x363835335f305f74ull,0x6e6f632e646c090aull,
0x09203233752e7473ull,0x255b202c39367225ull,0x3b5d32352b346472ull,0x363a6469202f2f09ull,
0x6c6261545f632033ull,0x78090a3078302b65ull,0x09203233622e726full,0x7225202c37317225ull,
0x37317225202c3936ull,0x2f2f09202020203bull,0x5f305f744c240a20ull,0x200a3a3839343031ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x64616568202c3936ull,0x64656c6562616c20ull,0x335f305f744c2420ull,0x6c6873090a363835ull,
0x722509203233622eull,0x30317225202c3037ull,0x2020203b3731202cull,0x0a202f2f09202020ull,
0x3233752e72687309ull,0x202c313772250920ull,0x3133202c30377225ull,0x092020202020203bull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b30202c3237ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,0x31377225202c3631ull,
0x093b32377225202cull,0x702540090a202f2full,0x0920617262203631ull,0x31315f305f744c24ull,
0x202020203b303130ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,0x656c6562616c2064ull,
0x5f305f744c242064ull,0x646c090a36383533ull,0x752e74736e6f632eull,0x3337722509203233ull,
0x2b346472255b202cull,0x202f2f093b5d3635ull,0x5f632034363a6469ull,0x78302b656c626154ull,
0x622e726f78090a30ull,0x3731722509203233ull,0x202c33377225202cull,0x2020203b37317225ull,
0x4c240a202f2f0920ull,0x313031315f305f74ull,0x6c3c2f2f200a3a30ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,
0x744c242064656c65ull,0x0a363835335f305full,0x3233622e6c687309ull,0x202c343772250920ull,
0x3631202c30317225ull,0x092020202020203bull,0x726873090a202f2full,0x722509203233752eull,
0x34377225202c3537ull,0x2020203b3133202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,
0x202c363772250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e71652e70ull,0x202c373170250920ull,0x7225202c35377225ull,0x0a202f2f093b3637ull,
0x6220373170254009ull,0x5f744c2409206172ull,0x3b32323531315f30ull,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x2c393620656e696cull,0x616c206461656820ull,0x4c242064656c6562ull,0x363835335f305f74ull,
0x6e6f632e646c090aull,0x09203233752e7473ull,0x255b202c37377225ull,0x3b5d30362b346472ull,
0x363a6469202f2f09ull,0x6c6261545f632035ull,0x78090a3078302b65ull,0x09203233622e726full,
0x7225202c37317225ull,0x37317225202c3737ull,0x2f2f09202020203bull,0x5f305f744c240a20ull,
0x200a3a3232353131ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x64616568202c3936ull,0x64656c6562616c20ull,0x335f305f744c2420ull,
0x6c6873090a363835ull,0x722509203233622eull,0x30317225202c3837ull,0x2020203b3531202cull,
0x0a202f2f09202020ull,0x3233752e72687309ull,0x202c393772250920ull,0x3133202c38377225ull,
0x092020202020203bull,0x766f6d090a202f2full,0x722509203233752eull,0x20203b30202c3038ull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,0x702509203233732eull,
0x39377225202c3831ull,0x093b30387225202cull,0x702540090a202f2full,0x0920617262203831ull,
0x32315f305f744c24ull,0x202020203b343330ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x646c090a36383533ull,0x752e74736e6f632eull,
0x3138722509203233ull,0x2b346472255b202cull,0x202f2f093b5d3436ull,0x5f632036363a6469ull,
0x78302b656c626154ull,0x622e726f78090a30ull,0x3731722509203233ull,0x202c31387225202cull,
0x2020203b37317225ull,0x4c240a202f2f0920ull,0x333032315f305f74ull,0x6c3c2f2f200a3a34ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x202c393620656e69ull,
0x62616c2064616568ull,0x744c242064656c65ull,0x0a363835335f305full,0x3233622e6c687309ull,
0x202c323872250920ull,0x3431202c30317225ull,0x092020202020203bull,0x726873090a202f2full,
0x722509203233752eull,0x32387225202c3338ull,0x2020203b3133202cull,0x0a202f2f09202020ull,
0x3233752e766f6d09ull,0x202c343872250920ull,0x2020202020203b30ull,0x0920202020202020ull,
0x746573090a202f2full,0x3233732e71652e70ull,0x202c393170250920ull,0x7225202c33387225ull,
0x0a202f2f093b3438ull,0x6220393170254009ull,0x5f744c2409206172ull,0x3b36343532315f30ull,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x2c393620656e696cull,0x616c206461656820ull,0x4c242064656c6562ull,
0x363835335f305f74ull,0x6e6f632e646c090aull,0x09203233752e7473ull,0x255b202c35387225ull,
0x3b5d38362b346472ull,0x363a6469202f2f09ull,0x6c6261545f632037ull,0x78090a3078302b65ull,
0x09203233622e726full,0x7225202c37317225ull,0x37317225202c3538ull,0x2f2f09202020203bull,
0x5f305f744c240a20ull,0x200a3a3634353231ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x64616568202c3936ull,0x64656c6562616c20ull,
0x335f305f744c2420ull,0x6c6873090a363835ull,0x722509203233622eull,0x30317225202c3638ull,
0x2020203b3331202cull,0x0a202f2f09202020ull,0x3233752e72687309ull,0x202c373872250920ull,
0x3133202c36387225ull,0x092020202020203bull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b30202c3838ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x37387225202c3032ull,0x093b38387225202cull,0x702540090a202f2full,
0x0920617262203032ull,0x33315f305f744c24ull,0x202020203b383530ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x616568202c393620ull,0x656c6562616c2064ull,0x5f305f744c242064ull,0x646c090a36383533ull,
0x752e74736e6f632eull,0x3938722509203233ull,0x2b346472255b202cull,0x202f2f093b5d3237ull,
0x5f632038363a6469ull,0x78302b656c626154ull,0x622e726f78090a30ull,0x3731722509203233ull,
0x202c39387225202cull,0x2020203b37317225ull,0x4c240a202f2f0920ull,0x353033315f305f74ull,
0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,0x0a363835335f305full,
0x3233622e6c687309ull,0x202c303972250920ull,0x3231202c30317225ull,0x092020202020203bull,
0x726873090a202f2full,0x722509203233752eull,0x30397225202c3139ull,0x2020203b3133202cull,
0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x202c323972250920ull,0x2020202020203b30ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233732e71652e70ull,0x202c313270250920ull,
0x7225202c31397225ull,0x0a202f2f093b3239ull,0x6220313270254009ull,0x5f744c2409206172ull,
0x3b30373533315f30ull,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x2c393620656e696cull,0x616c206461656820ull,
0x4c242064656c6562ull,0x363835335f305f74ull,0x6e6f632e646c090aull,0x09203233752e7473ull,
0x255b202c33397225ull,0x3b5d36372b346472ull,0x363a6469202f2f09ull,0x6c6261545f632039ull,
0x78090a3078302b65ull,0x09203233622e726full,0x7225202c37317225ull,0x37317225202c3339ull,
0x2f2f09202020203bull,0x5f305f744c240a20ull,0x200a3a3037353331ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x64616568202c3936ull,
0x64656c6562616c20ull,0x335f305f744c2420ull,0x6c6873090a363835ull,0x722509203233622eull,
0x30317225202c3439ull,0x2020203b3131202cull,0x0a202f2f09202020ull,0x3233752e72687309ull,
0x202c353972250920ull,0x3133202c34397225ull,0x092020202020203bull,0x766f6d090a202f2full,
0x722509203233752eull,0x20203b30202c3639ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x71652e7074657309ull,0x702509203233732eull,0x35397225202c3232ull,0x093b36397225202cull,
0x702540090a202f2full,0x0920617262203232ull,0x34315f305f744c24ull,0x202020203b323830ull,
0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x616568202c393620ull,0x656c6562616c2064ull,0x5f305f744c242064ull,
0x646c090a36383533ull,0x752e74736e6f632eull,0x3739722509203233ull,0x2b346472255b202cull,
0x202f2f093b5d3038ull,0x5f632030373a6469ull,0x78302b656c626154ull,0x622e726f78090a30ull,
0x3731722509203233ull,0x202c37397225202cull,0x2020203b37317225ull,0x4c240a202f2f0920ull,
0x383034315f305f74ull,0x6c3c2f2f200a3a32ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,
0x0a363835335f305full,0x3233622e6c687309ull,0x202c383972250920ull,0x3031202c30317225ull,
0x092020202020203bull,0x726873090a202f2full,0x722509203233752eull,0x38397225202c3939ull,
0x2020203b3133202cull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,0x2c30303172250920ull,
0x20202020203b3020ull,0x0920202020202020ull,0x746573090a202f2full,0x3233732e71652e70ull,
0x202c333270250920ull,0x7225202c39397225ull,0x202f2f093b303031ull,0x203332702540090aull,
0x744c240920617262ull,0x34393534315f305full,0x202020202020203bull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x393620656e696c20ull,
0x6c2064616568202cull,0x242064656c656261ull,0x3835335f305f744cull,0x6f632e646c090a36ull,
0x203233752e74736eull,0x202c313031722509ull,0x34382b346472255bull,0x6469202f2f093b5dull,
0x61545f632031373aull,0x0a3078302b656c62ull,0x3233622e726f7809ull,0x202c373172250920ull,
0x25202c3130317225ull,0x092020203b373172ull,0x5f744c240a202f2full,0x3a34393534315f30ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x6568202c39362065ull,0x6c6562616c206461ull,0x305f744c24206465ull,0x73090a363835335full,
0x09203233622e6c68ull,0x25202c3230317225ull,0x203b39202c303172ull,0x2f2f092020202020ull,
0x752e726873090a20ull,0x3031722509203233ull,0x3230317225202c33ull,0x2020203b3133202cull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x30202c3430317225ull,0x202020202020203bull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e7165ull,0x7225202c34327025ull,
0x317225202c333031ull,0x0a202f2f093b3430ull,0x6220343270254009ull,0x5f744c2409206172ull,
0x3b36303135315f30ull,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x2c393620656e696cull,0x616c206461656820ull,
0x4c242064656c6562ull,0x363835335f305f74ull,0x6e6f632e646c090aull,0x09203233752e7473ull,
0x5b202c3530317225ull,0x5d38382b34647225ull,0x3a6469202f2f093bull,0x6261545f63203237ull,
0x090a3078302b656cull,0x203233622e726f78ull,0x25202c3731722509ull,0x7225202c35303172ull,
0x2f092020203b3731ull,0x305f744c240a202full,0x0a3a36303135315full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x616568202c393620ull,
0x656c6562616c2064ull,0x5f305f744c242064ull,0x6873090a36383533ull,0x2509203233622e6cull,
0x7225202c36303172ull,0x20203b38202c3031ull,0x202f2f0920202020ull,0x33752e726873090aull,
0x3730317225092032ull,0x2c3630317225202cull,0x202020203b313320ull,0x6f6d090a202f2f09ull,
0x2509203233752e76ull,0x3b30202c38303172ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x652e70746573090aull,0x2509203233732e71ull,0x317225202c353270ull,0x30317225202c3730ull,
0x090a202f2f093b38ull,0x7262203532702540ull,0x305f744c24092061ull,0x203b38313635315full,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x202c393620656e69ull,0x62616c2064616568ull,0x744c242064656c65ull,
0x0a363835335f305full,0x736e6f632e646c09ull,0x2509203233752e74ull,0x255b202c39303172ull,
0x3b5d32392b346472ull,0x373a6469202f2f09ull,0x6c6261545f632033ull,0x78090a3078302b65ull,
0x09203233622e726full,0x7225202c37317225ull,0x317225202c393031ull,0x2f2f092020203b37ull,
0x5f305f744c240a20ull,0x200a3a3831363531ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x64616568202c3936ull,0x64656c6562616c20ull,
0x335f305f744c2420ull,0x6c6873090a363835ull,0x722509203233622eull,0x317225202c303131ull,
0x2020203b37202c30ull,0x0a202f2f09202020ull,0x3233752e72687309ull,0x2c31313172250920ull,
0x202c303131722520ull,0x09202020203b3133ull,0x766f6d090a202f2full,0x722509203233752eull,
0x203b30202c323131ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x31317225202c3632ull,0x3231317225202c31ull,0x40090a202f2f093bull,
0x6172622036327025ull,0x5f305f744c240920ull,0x20203b3033313631ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x68202c393620656eull,0x6562616c20646165ull,0x5f744c242064656cull,0x090a363835335f30ull,
0x74736e6f632e646cull,0x722509203233752eull,0x72255b202c333131ull,0x093b5d36392b3464ull,
0x34373a6469202f2full,0x656c6261545f6320ull,0x6f78090a3078302bull,0x2509203233622e72ull,
0x317225202c373172ull,0x37317225202c3331ull,0x202f2f092020203bull,0x315f305f744c240aull,
0x2f200a3a30333136ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3620656e696c2079ull,0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,
0x2e6c6873090a3638ull,0x3172250920323362ull,0x30317225202c3431ull,0x202020203b36202cull,
0x090a202f2f092020ull,0x203233752e726873ull,0x202c353131722509ull,0x33202c3431317225ull,
0x2f09202020203b31ull,0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3631ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,0x3270250920323373ull,
0x3531317225202c37ull,0x3b3631317225202cull,0x2540090a202f2f09ull,0x2061726220373270ull,
0x315f305f744c2409ull,0x2020203b32343636ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x6c090a363835335full,0x2e74736e6f632e64ull,
0x3172250920323375ull,0x6472255b202c3731ull,0x093b5d3030312b34ull,0x35373a6469202f2full,
0x656c6261545f6320ull,0x6f78090a3078302bull,0x2509203233622e72ull,0x317225202c373172ull,
0x37317225202c3731ull,0x202f2f092020203bull,0x315f305f744c240aull,0x2f200a3a32343636ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,
0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,0x2e6c6873090a3638ull,
0x3172250920323362ull,0x30317225202c3831ull,0x202020203b35202cull,0x090a202f2f092020ull,
0x203233752e726873ull,0x202c393131722509ull,0x33202c3831317225ull,0x2f09202020203b31ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3032ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e71652e70746573ull,0x3270250920323373ull,0x3931317225202c38ull,
0x3b3032317225202cull,0x2540090a202f2f09ull,0x2061726220383270ull,0x315f305f744c2409ull,
0x2020203b34353137ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6c090a363835335full,0x2e74736e6f632e64ull,0x3172250920323375ull,
0x6472255b202c3132ull,0x093b5d3430312b34ull,0x36373a6469202f2full,0x656c6261545f6320ull,
0x6f78090a3078302bull,0x2509203233622e72ull,0x317225202c373172ull,0x37317225202c3132ull,
0x202f2f092020203bull,0x315f305f744c240aull,0x2f200a3a34353137ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,0x2064616568202c39ull,
0x2064656c6562616cull,0x35335f305f744c24ull,0x2e6c6873090a3638ull,0x3172250920323362ull,
0x30317225202c3232ull,0x202020203b34202cull,0x090a202f2f092020ull,0x203233752e726873ull,
0x202c333231722509ull,0x33202c3232317225ull,0x2f09202020203b31ull,0x2e766f6d090a202full,
0x3172250920323375ull,0x20203b30202c3432ull,0x2020202020202020ull,0x090a202f2f092020ull,
0x2e71652e70746573ull,0x3270250920323373ull,0x3332317225202c39ull,0x3b3432317225202cull,
0x2540090a202f2f09ull,0x2061726220393270ull,0x315f305f744c2409ull,0x2020203b36363637ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x6568202c39362065ull,0x6c6562616c206461ull,0x305f744c24206465ull,
0x6c090a363835335full,0x2e74736e6f632e64ull,0x3172250920323375ull,0x6472255b202c3532ull,
0x093b5d3830312b34ull,0x37373a6469202f2full,0x656c6261545f6320ull,0x6f78090a3078302bull,
0x2509203233622e72ull,0x317225202c373172ull,0x37317225202c3532ull,0x202f2f092020203bull,
0x315f305f744c240aull,0x2f200a3a36363637ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3620656e696c2079ull,0x2064616568202c39ull,0x2064656c6562616cull,
0x35335f305f744c24ull,0x2e6c6873090a3638ull,0x3172250920323362ull,0x30317225202c3632ull,
0x202020203b33202cull,0x090a202f2f092020ull,0x203233752e726873ull,0x202c373231722509ull,
0x33202c3632317225ull,0x2f09202020203b31ull,0x2e766f6d090a202full,0x3172250920323375ull,
0x20203b30202c3832ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,
0x3370250920323373ull,0x3732317225202c30ull,0x3b3832317225202cull,0x2540090a202f2f09ull,
0x2061726220303370ull,0x315f305f744c2409ull,0x2020203b38373138ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x6568202c39362065ull,0x6c6562616c206461ull,0x305f744c24206465ull,0x6c090a363835335full,
0x2e74736e6f632e64ull,0x3172250920323375ull,0x6472255b202c3932ull,0x093b5d3231312b34ull,
0x38373a6469202f2full,0x656c6261545f6320ull,0x6f78090a3078302bull,0x2509203233622e72ull,
0x317225202c373172ull,0x37317225202c3932ull,0x202f2f092020203bull,0x315f305f744c240aull,
0x2f200a3a38373138ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3620656e696c2079ull,0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,
0x2e6c6873090a3638ull,0x3172250920323362ull,0x30317225202c3033ull,0x202020203b32202cull,
0x090a202f2f092020ull,0x203233752e726873ull,0x202c313331722509ull,0x33202c3033317225ull,
0x2f09202020203b31ull,0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3233ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,0x3370250920323373ull,
0x3133317225202c31ull,0x3b3233317225202cull,0x2540090a202f2f09ull,0x2061726220313370ull,
0x315f305f744c2409ull,0x2020203b30393638ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,
0x6c6562616c206461ull,0x305f744c24206465ull,0x6c090a363835335full,0x2e74736e6f632e64ull,
0x3172250920323375ull,0x6472255b202c3333ull,0x093b5d3631312b34ull,0x39373a6469202f2full,
0x656c6261545f6320ull,0x6f78090a3078302bull,0x2509203233622e72ull,0x317225202c373172ull,
0x37317225202c3333ull,0x202f2f092020203bull,0x315f305f744c240aull,0x2f200a3a30393638ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,
0x2064616568202c39ull,0x2064656c6562616cull,0x35335f305f744c24ull,0x2e6c6873090a3638ull,
0x3172250920323362ull,0x30317225202c3433ull,0x202020203b31202cull,0x090a202f2f092020ull,
0x203233752e726873ull,0x202c353331722509ull,0x33202c3433317225ull,0x2f09202020203b31ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x20203b30202c3633ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e71652e70746573ull,0x3370250920323373ull,0x3533317225202c32ull,
0x3b3633317225202cull,0x2540090a202f2f09ull,0x2061726220323370ull,0x315f305f744c2409ull,
0x2020203b32303239ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x6568202c39362065ull,0x6c6562616c206461ull,
0x305f744c24206465ull,0x6c090a363835335full,0x2e74736e6f632e64ull,0x3172250920323375ull,
0x6472255b202c3733ull,0x093b5d3032312b34ull,0x30383a6469202f2full,0x656c6261545f6320ull,
0x6f78090a3078302bull,0x2509203233622e72ull,0x317225202c373172ull,0x37317225202c3733ull,
0x202f2f092020203bull,0x315f305f744c240aull,0x2f200a3a32303239ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3620656e696c2079ull,0x2064616568202c39ull,
0x2064656c6562616cull,0x35335f305f744c24ull,0x636f6c2e090a3638ull,0x3009363709363109ull,
0x33752e646461090aull,0x3833317225092032ull,0x202c37317225202cull,0x2020202020203b31ull,
0x7663090a202f2f09ull,0x3233662e6e722e74ull,0x662509203233752eull,0x3833317225202c31ull,
0x202f2f092020203bull,0x33662e766f6d090aull,0x202c326625092032ull,0x3030303030336630ull,
0x20202020203b3030ull,0x35362e34202f2f09ull,0x0a30312d65313636ull,0x3233662e6c756d09ull,
0x25202c3366250920ull,0x3b326625202c3166ull,0x0920202020202020ull,0x2e7473090a202f2full,
0x662e6c61626f6c67ull,0x6472255b09203233ull,0x25202c5d302b3031ull,0x69202f2f093b3366ull,
0x6461090a31383a64ull,0x2509203233752e64ull,0x33317225202c3672ull,0x20203b367225202cull,
0x202f2f0920202020ull,0x36752e646461090aull,0x3031647225092034ull,0x202c36647225202cull,
0x20203b3031647225ull,0x6461090a202f2f09ull,0x2509203233752e64ull,0x317225202c303172ull,
0x3b33317225202c30ull,0x202f2f0920202020ull,0x6c2e70746573090aull,0x2509203233752e74ull,
0x367225202c333370ull,0x20203b377225202cull,0x2540090a202f2f09ull,0x2061726220333370ull,
0x335f305f744c2409ull,0x202020203b363835ull,0x202f2f0920202020ull,0x335f305f744c240aull,
0x6c2e090a3a343730ull,0x383709363109636full,0x74697865090a3009ull,0x202020202020203bull,
0x2020202020202020ull,0x2020202020202020ull,0x240a202f2f092020ull,0x5f5f646e6557444cull,
0x697361757136325aull,0x65476d6f646e6172ull,0x4b726f746172656eull,0x6a66506c656e7265ull,
0x2f2f207d090a3a6aull,0x61757136325a5f20ull,0x6d6f646e61726973ull,0x6f746172656e6547ull,
0x506c656e72654b72ull,0x652e090a0a6a6a66ull,0x315a5f207972746eull,0x65737265766e6936ull,
0x656e72654b444e43ull,0x28206a5f5366506cull,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x6e6936315a5f5f6dull,0x444e436573726576ull,0x66506c656e72654bull,
0x754f5f645f6a5f53ull,0x09090a2c74757074ull,0x2e206d617261702eull,0x75635f5f20343675ull,
0x5f5f6d7261706164ull,0x7265766e6936315aull,0x72654b444e436573ull,0x6a5f5366506c656eull,
0x7475706e495f645full,0x7261702e09090a2cull,0x203233752e206d61ull,0x6170616475635f5full,
0x6936315a5f5f6d72ull,0x4e4365737265766eull,0x506c656e72654b44ull,0x7461705f6a5f5366ull,
0x090a7b090a294e68ull,0x33752e206765722eull,0x3334323c72252032ull,0x6765722e090a3b3eull,
0x7225203436752e20ull,0x090a3b3e37313c64ull,0x33662e206765722eull,0x3b3e353c66252032ull,
0x2e206765722e090aull,0x3c64662520343666ull,0x2e090a3b3e303933ull,0x6572702e20676572ull,
0x3e33363c70252064ull,0x09636f6c2e090a3bull,0x3009353932093631ull,0x5f5f3142424c240aull,
0x7265766e6936315aull,0x72654b444e436573ull,0x6a5f5366506c656eull,0x61702e646c090a3aull,
0x203233752e6d6172ull,0x5f5b202c31722509ull,0x726170616475635full,0x6e6936315a5f5f6dull,
0x444e436573726576ull,0x66506c656e72654bull,0x687461705f6a5f53ull,0x69202f2f093b5d4eull,
0x5f20333430313a64ull,0x726170616475635full,0x6e6936315a5f5f6dull,0x444e436573726576ull,
0x66506c656e72654bull,0x687461705f6a5f53ull,0x63090a3078302b4eull,0x752e3233752e7476ull,
0x2c32722509203631ull,0x3b782e6469742520ull,0x2f2f092020202020ull,0x752e747663090a20ull,
0x09203631752e3233ull,0x746325202c337225ull,0x20203b782e646961ull,0x63090a202f2f0920ull,
0x752e3233752e7476ull,0x2c34722509203631ull,0x782e6469746e2520ull,0x2f2f09202020203bull,
0x61702e646c090a20ull,0x203436752e6d6172ull,0x5b202c3164722509ull,0x6170616475635f5full,
0x6936315a5f5f6d72ull,0x4e4365737265766eull,0x506c656e72654b44ull,0x495f645f6a5f5366ull,
0x2f093b5d7475706eull,0x3430313a6469202full,0x616475635f5f2037ull,0x315a5f5f6d726170ull,
0x65737265766e6936ull,0x656e72654b444e43ull,0x645f6a5f5366506cull,0x302b7475706e495full,
0x2e766f6d090a3078ull,0x6472250920343675ull,0x2020203b30202c32ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e71652e70746573ull,0x3170250920343675ull,0x202c31647225202cull,
0x2f09203b32647225ull,0x31702540090a202full,0x4c24092061726220ull,0x363036355f315f74ull,
0x2020202020203b36ull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x6d090a3009333033ull,
0x2e6f6c2e34326c75ull,0x3572250920323375ull,0x25202c347225202cull,0x2f2f0920203b3372ull,
0x752e646461090a20ull,0x2c36722509203233ull,0x7225202c35722520ull,0x2020202020203b32ull,
0x6d090a202f2f0920ull,0x09203233732e766full,0x367225202c377225ull,0x202020202020203bull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e6567ull,0x367225202c327025ull,
0x20203b317225202cull,0x40090a202f2f0920ull,0x2061726220327025ull,0x365f315f744c2409ull,
0x2020203b32323139ull,0x2f2f092020202020ull,0x752e747663090a20ull,0x09203631752e3233ull,
0x636e25202c387225ull,0x203b782e64696174ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,
0x3972250920323375ull,0x25202c347225202cull,0x2f2f0920203b3872ull,0x752e747663090a20ull,
0x09203233752e3436ull,0x7225202c33647225ull,0x2020202020203b36ull,0x63090a202f2f0920ull,
0x752e3436732e7476ull,0x3464722509203233ull,0x20203b397225202cull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x647225202c356472ull,0x2020203b34202c33ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x2c36647225092034ull,0x34202c3464722520ull,
0x2f2f09202020203bull,0x752e646461090a20ull,0x3764722509203436ull,0x202c35647225202cull,
0x2020203b31647225ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x6472250920343675ull,
0x75635f5f5b202c38ull,0x5f5f6d7261706164ull,0x7265766e6936315aull,0x72654b444e436573ull,
0x6a5f5366506c656eull,0x757074754f5f645full,0x69202f2f093b5d74ull,0x5f20393430313a64ull,
0x726170616475635full,0x6e6936315a5f5f6dull,0x444e436573726576ull,0x66506c656e72654bull,
0x754f5f645f6a5f53ull,0x3078302b74757074ull,0x36752e646461090aull,0x2c39647225092034ull,
0x25202c3864722520ull,0x202020203b356472ull,0x744c240a202f2f09ull,0x34333836355f315full,
0x6f6c3c2f2f200a3aull,0x706f6f4c203e706full,0x696c2079646f6220ull,0x090a34303320656eull,
0x09363109636f6c2eull,0x6c090a3009343033ull,0x6c61626f6c672e64ull,0x662509203233662eull,
0x376472255b202c31ull,0x2f2f09203b5d302bull,0x303530313a646920ull,0x36662e747663090aull,
0x2509203233662e34ull,0x316625202c316466ull,0x202020202020203bull,0x6c2e090a202f2f09ull,
0x303309363109636full,0x766f6d090a300935ull,0x662509203436662eull,0x66336430202c3264ull,
0x3030303030303066ull,0x093b303030303030ull,0x6573090a31202f2full,0x3233752e65672e74ull,
0x722509203436662eull,0x31646625202c3031ull,0x093b32646625202cull,0x67656e090a202f2full,
0x722509203233732eull,0x30317225202c3131ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x3436662e766f6d09ull,0x202c336466250920ull,0x3030303030306430ull,0x3030303030303030ull,
0x30202f2f093b3030ull,0x656c2e746573090aull,0x3436662e3233752eull,0x202c323172250920ull,
0x6625202c31646625ull,0x0a202f2f093b3364ull,0x3233732e67656e09ull,0x202c333172250920ull,
0x2020203b32317225ull,0x0920202020202020ull,0x2e726f090a202f2full,0x3172250920323362ull,
0x2c31317225202c34ull,0x20203b3331722520ull,0x0a202f2f09202020ull,0x3233752e766f6d09ull,
0x202c353172250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e71652e70ull,0x25202c3370250920ull,0x317225202c343172ull,0x0a202f2f09203b35ull,
0x7262203370254009ull,0x315f744c24092061ull,0x203b30393037355full,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3836355f315f744cull,
0x2e766f6d090a3433ull,0x6466250920343666ull,0x6666666430202c34ull,0x3030303030303038ull,
0x2f093b3030303030ull,0x62090a6e616e202full,0x0920696e752e6172ull,0x38325f315f744c24ull,
0x20202020203b3831ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3039303735ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c343033ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e090a3433383635ull,
0x3109363109636f6cull,0x6f6d090a30093636ull,0x2509203436662e76ull,0x626430202c356466ull,
0x3030303030306566ull,0x3b30303030303030ull,0x352e302d202f2f09ull,0x36662e646461090aull,
0x2c36646625092034ull,0x25202c3164662520ull,0x202020203b356466ull,0x6261090a202f2f09ull,
0x2509203436662e73ull,0x646625202c376466ull,0x2020202020203b36ull,0x202f2f0920202020ull,
0x36662e766f6d090aull,0x2c38646625092034ull,0x6561646633643020ull,0x3734316561373431ull,
0x202f2f093b316561ull,0x6573090a32342e30ull,0x36662e746c2e7074ull,0x202c347025092034ull,
0x6625202c37646625ull,0x202f2f09203b3864ull,0x203470252140090aull,0x744c240920617262ull,
0x38353837355f315full,0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,0x2064616568202c34ull,
0x2064656c6562616cull,0x36355f315f744c24ull,0x6f6c2e090a343338ull,0x3836310936310963ull,
0x2e6c756d090a3009ull,0x6466250920343666ull,0x2c36646625202c39ull,0x20203b3664662520ull,
0x090a202f2f092020ull,0x203436662e766f6dull,0x202c303164662509ull,0x6430343030346430ull,
0x3236383262313339ull,0x32202f2f093b6430ull,0x090a33363630352eull,0x203436662e766f6dull,
0x202c313164662509ull,0x6439323330636430ull,0x3361343565613037ull,0x2d202f2f093b6564ull,
0x090a3531362e3831ull,0x203436662e766f6dull,0x202c323164662509ull,0x3262343430346430ull,
0x3663333734633231ull,0x34202f2f093b6366ull,0x090a323139332e31ull,0x203436662e766f6dull,
0x202c333164662509ull,0x3037393330636430ull,0x3737373337353965ull,0x2d202f2f093b3837ull,
0x0a313134342e3532ull,0x2e6e722e64616d09ull,0x6466250920343666ull,0x31646625202c3431ull,
0x2c39646625202c33ull,0x093b323164662520ull,0x64616d090a202f2full,0x203436662e6e722eull,
0x202c353164662509ull,0x6625202c39646625ull,0x646625202c343164ull,0x0a202f2f093b3131ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x39646625202c3631ull,0x2c3531646625202cull,
0x093b303164662520ull,0x6c756d090a202f2full,0x662509203436662eull,0x646625202c373164ull,
0x3631646625202c36ull,0x0a202f2f0920203bull,0x3436662e766f6d09ull,0x2c38316466250920ull,
0x3030666633643020ull,0x3030303030303030ull,0x202f2f093b303030ull,0x662e766f6d090a31ull,
0x3164662509203436ull,0x3230636430202c39ull,0x3536303037326630ull,0x2f093b6432373035ull,
0x3337342e382d202full,0x2e766f6d090a3135ull,0x6466250920343666ull,0x30346430202c3032ull,
0x3139373535313733ull,0x093b633230353138ull,0x38302e3332202f2full,0x2e766f6d090a3433ull,
0x6466250920343666ull,0x30636430202c3132ull,0x3730666566303533ull,0x093b643735653130ull,
0x302e31322d202f2full,0x766f6d090a323236ull,0x662509203436662eull,0x346430202c323264ull,
0x3230666230393030ull,0x3b37346138353530ull,0x33312e33202f2f09ull,0x64616d090a333830ull,
0x203436662e6e722eull,0x202c333264662509ull,0x25202c3232646625ull,0x646625202c396466ull,
0x0a202f2f093b3132ull,0x2e6e722e64616d09ull,0x6466250920343666ull,0x39646625202c3432ull,
0x2c3332646625202cull,0x093b303264662520ull,0x64616d090a202f2full,0x203436662e6e722eull,
0x202c353264662509ull,0x6625202c39646625ull,0x646625202c343264ull,0x0a202f2f093b3931ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x39646625202c3632ull,0x2c3532646625202cull,
0x093b383164662520ull,0x766964090a202f2full,0x203436662e6e722eull,0x202c373264662509ull,
0x25202c3731646625ull,0x2f2f093b36326466ull,0x752e617262090a20ull,0x5f744c240920696eull,
0x3b32303637355f31ull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x353837355f315f74ull,
0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c34303320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x333836355f315f74ull,
0x662e766f6d090a34ull,0x3264662509203436ull,0x3030306430202c38ull,0x3030303030303030ull,
0x2f093b3030303030ull,0x746573090a30202full,0x3436662e74672e70ull,0x25202c3570250920ull,
0x646625202c366466ull,0x0a202f2f093b3832ull,0x6220357025214009ull,0x5f744c2409206172ull,
0x3b30373338355f31ull,0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x34303320656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3836355f315f744cull,0x636f6c2e090a3433ull,0x0935343509363209ull,
0x662e766f6d090a30ull,0x3264662509203436ull,0x6666336430202c39ull,0x3030303030303030ull,
0x2f093b3030303030ull,0x627573090a31202full,0x662509203436662eull,0x646625202c303364ull,
0x31646625202c3932ull,0x0a202f2f0920203bull,0x3436622e766f6d09ull,0x2c363172257b0920ull,
0x25202c7d37317225ull,0x0920203b30336466ull,0x766f6d090a202f2full,0x722509203233732eull,
0x37317225202c3831ull,0x202020202020203bull,0x0a202f2f09202020ull,0x363209636f6c2e09ull,
0x090a300936343509ull,0x203436622e766f6dull,0x252c393172257b09ull,0x6625202c7d303272ull,
0x2f0920203b303364ull,0x636f6c2e090a202full,0x0938343509363209ull,0x662e766f6d090a30ull,
0x3364662509203436ull,0x3030306430202c31ull,0x3030303030303030ull,0x2f093b3030303030ull,
0x746573090a30202full,0x2e3233752e74672eull,0x3272250920343666ull,0x3033646625202c31ull,
0x3b3133646625202cull,0x656e090a202f2f09ull,0x2509203233732e67ull,0x327225202c323272ull,
0x2020202020203b31ull,0x202f2f0920202020ull,0x36662e766f6d090aull,0x3233646625092034ull,
0x306666376430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x6573090a666e6920ull,
0x3233752e746c2e74ull,0x722509203436662eull,0x33646625202c3332ull,0x3233646625202c30ull,
0x6e090a202f2f093bull,0x09203233732e6765ull,0x7225202c34327225ull,0x20202020203b3332ull,
0x2f2f092020202020ull,0x622e646e61090a20ull,0x3532722509203233ull,0x202c32327225202cull,
0x2020203b34327225ull,0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c36327225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e7165ull,
0x327225202c367025ull,0x3b36327225202c35ull,0x40090a202f2f0920ull,0x2061726220367025ull,
0x335f315f744c2409ull,0x2020203b32383639ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x34333836355f315full,0x33752e766f6d090aull,
0x2c37327225092032ull,0x3537353834303120ull,0x202020202020203bull,0x6573090a202f2f09ull,
0x33752e74672e7074ull,0x202c377025092032ull,0x7225202c37317225ull,0x202f2f09203b3732ull,
0x622037702540090aull,0x5f744c2409206172ull,0x3b32383838355f31ull,0x2020202020202020ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x303320656e696c20ull,0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,
0x6f6c2e090a343338ull,0x3435350936320963ull,0x2e766f6d090a3009ull,0x6466250920343666ull,
0x33346430202c3333ull,0x3030303030303035ull,0x093b303030303030ull,0x3130382e31202f2full,
0x090a36312b653434ull,0x203436662e6c756dull,0x202c343364662509ull,0x25202c3033646625ull,
0x2f09203b33336466ull,0x2e766f6d090a202full,0x72257b0920343662ull,0x7d383172252c3832ull,
0x3b3433646625202cull,0x090a202f2f092020ull,0x09363209636f6c2eull,0x6d090a3009353535ull,
0x09203436622e766full,0x72252c393172257bull,0x646625202c7d3932ull,0x2f2f0920203b3433ull,
0x732e766f6d090a20ull,0x3033722509203233ull,0x3b373730312d202cull,0x2020202020202020ull,
0x62090a202f2f0920ull,0x0920696e752e6172ull,0x38355f315f744c24ull,0x202020203b363236ull,
0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3238383835ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c343033ull,
0x656c6562616c2064ull,0x5f315f744c242064ull,0x6d090a3433383635ull,0x09203233732e766full,
0x312d202c30337225ull,0x202020203b333230ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,
0x200a3a3632363835ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c343033ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x2e090a3433383635ull,0x3509363209636f6cull,0x6873090a30093036ull,0x2509203233732e72ull,
0x317225202c313372ull,0x20203b3032202c38ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x2c32337225092032ull,0x32202c3133722520ull,0x202020203b373430ull,0x6461090a202f2f09ull,
0x2509203233732e64ull,0x337225202c303372ull,0x3b32337225202c30ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x0a30093236350936ull,0x3233622e646e6109ull,0x202c333372250920ull,
0x322d202c38317225ull,0x3730353334363431ull,0x090a202f2f093b33ull,0x09203233622e726full,
0x7225202c34337225ull,0x32373031202c3333ull,0x093b383432333936ull,0x766f6d090a202f2full,
0x662509203436622eull,0x72257b202c353364ull,0x7d343372252c3931ull,0x0a202f2f0920203bull,
0x3233752e766f6d09ull,0x202c353372250920ull,0x3537323133373031ull,0x09202020203b3238ull,
0x746573090a202f2full,0x3233752e656c2e70ull,0x25202c3870250920ull,0x337225202c343372ull,
0x0a202f2f09203b35ull,0x7262203870254009ull,0x315f744c24092061ull,0x203b38333139355full,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3836355f315f744cull,0x636f6c2e090a3433ull,0x0934363509363209ull,0x622e766f6d090a30ull,
0x3372257b09203436ull,0x2c7d373372252c36ull,0x203b353364662520ull,0x73090a202f2f0920ull,
0x09203233732e6275ull,0x7225202c38337225ull,0x38343031202c3733ull,0x2f2f09203b363735ull,
0x622e766f6d090a20ull,0x3372257b09203436ull,0x2c7d303472252c39ull,0x203b353364662520ull,
0x6d090a202f2f0920ull,0x09203436622e766full,0x7b202c3533646625ull,0x3372252c39337225ull,
0x2f2f0920203b7d38ull,0x09636f6c2e090a20ull,0x3009353635093632ull,0x33732e646461090aull,
0x2c30337225092032ull,0x31202c3033722520ull,0x202020202020203bull,0x744c240a202f2f09ull,
0x38333139355f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x34333836355f315full,0x3209636f6c2e090aull,0x0a30093937350936ull,0x3436662e766f6d09ull,
0x2c36336466250920ull,0x3030666662643020ull,0x3030303030303030ull,0x202f2f093b303030ull,
0x2e646461090a312dull,0x6466250920343666ull,0x33646625202c3733ull,0x3633646625202c35ull,
0x090a202f2f09203bull,0x203436662e766f6dull,0x202c383364662509ull,0x3030306666336430ull,
0x3030303030303030ull,0x31202f2f093b3030ull,0x36662e646461090aull,0x3933646625092034ull,
0x2c3533646625202cull,0x203b383364662520ull,0x6372090a202f2f09ull,0x3436662e6e722e70ull,
0x2c30346466250920ull,0x203b393364662520ull,0x202f2f0920202020ull,0x36662e6c756d090aull,
0x3134646625092034ull,0x2c3733646625202cull,0x203b303464662520ull,0x6461090a202f2f09ull,
0x2509203436662e64ull,0x6625202c32346466ull,0x646625202c313464ull,0x202f2f09203b3134ull,
0x36662e6c756d090aull,0x3334646625092034ull,0x2c3234646625202cull,0x203b323464662520ull,
0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x6430202c34346466ull,0x6230383331626533ull,
0x6531663038656133ull,0x302e31202f2f093bull,0x36302d6533333632ull,0x36662e766f6d090aull,
0x3534646625092034ull,0x306465336430202cull,0x6137623835326565ull,0x2f2f093b34306238ull,
0x39343633302e3420ull,0x616d090a36302d65ull,0x3436662e6e722e64ull,0x2c36346466250920ull,
0x202c343464662520ull,0x25202c3334646625ull,0x2f2f093b35346466ull,0x662e766f6d090a20ull,
0x3464662509203436ull,0x6665336430202c37ull,0x3066393636326233ull,0x2f093b6636373632ull,
0x343837382e31202full,0x6d090a35302d6534ull,0x36662e6e722e6461ull,0x3834646625092034ull,
0x2c3634646625202cull,0x202c333464662520ull,0x2f093b3734646625ull,0x2e766f6d090a202full,
0x6466250920343666ull,0x66336430202c3934ull,0x3961626335343731ull,0x093b363539306261ull,
0x3737382e38202f2full,0x090a35302d653138ull,0x662e6e722e64616dull,0x3564662509203436ull,
0x3834646625202c30ull,0x2c3334646625202cull,0x093b393464662520ull,0x766f6d090a202f2full,
0x662509203436662eull,0x336430202c313564ull,0x3237633137633366ull,0x3b34353135623164ull,
0x30302e30202f2f09ull,0x0a38323034333430ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x35646625202c3235ull,0x3334646625202c30ull,0x3b3135646625202cull,0x6c2e090a202f2f09ull,
0x383509363209636full,0x766f6d090a300930ull,0x662509203436662eull,0x336430202c333564ull,
0x3934323934323666ull,0x3b64323765623332ull,0x30302e30202f2f09ull,0x090a343132333232ull,
0x662e6e722e64616dull,0x3564662509203436ull,0x3235646625202c32ull,0x2c3334646625202cull,
0x093b333564662520ull,0x6f6c2e090a202f2full,0x3138350936320963ull,0x2e766f6d090a3009ull,
0x6466250920343666ull,0x66336430202c3435ull,0x3939393939393938ull,0x093b346333613939ull,
0x3231302e30202f2full,0x722e64616d090a35ull,0x2509203436662e6eull,0x6625202c32356466ull,
0x646625202c323564ull,0x35646625202c3334ull,0x090a202f2f093b34ull,0x09363209636f6c2eull,
0x6d090a3009323835ull,0x09203436662e766full,0x30202c3535646625ull,0x3535353562663364ull,
0x3535353535353535ull,0x2e30202f2f093b34ull,0x0a33333333333830ull,0x2e6e722e64616d09ull,
0x6466250920343666ull,0x35646625202c3235ull,0x3334646625202c32ull,0x3b3535646625202cull,
0x6c2e090a202f2f09ull,0x383509363209636full,0x627573090a300934ull,0x662509203436662eull,
0x646625202c363564ull,0x34646625202c3733ull,0x0a202f2f09203b32ull,0x3436662e67656e09ull,
0x2c37356466250920ull,0x203b323464662520ull,0x0920202020202020ull,0x766f6d090a202f2full,
0x257b09203436622eull,0x323472252c313472ull,0x3635646625202c7dull,0x0a202f2f0920203bull,
0x3233732e64646109ull,0x202c333472250920ull,0x3031202c32347225ull,0x09203b3637353834ull,
0x766f6d090a202f2full,0x257b09203436622eull,0x353472252c343472ull,0x3635646625202c7dull,
0x0a202f2f0920203bull,0x3436622e766f6d09ull,0x2c38356466250920ull,0x252c343472257b20ull,
0x0920203b7d333472ull,0x64616d090a202f2full,0x203436662e6e722eull,0x202c393564662509ull,
0x25202c3735646625ull,0x6625202c37336466ull,0x202f2f093b383564ull,0x3209636f6c2e090aull,
0x0a30093838350936ull,0x3436662e6c756d09ull,0x2c30366466250920ull,0x202c333464662520ull,
0x09203b3235646625ull,0x6c756d090a202f2full,0x662509203436662eull,0x646625202c323564ull,
0x36646625202c3234ull,0x0a202f2f09203b30ull,0x363209636f6c2e09ull,0x090a300938393509ull,
0x662e6e722e747663ull,0x09203233732e3436ull,0x25202c3136646625ull,0x2f0920203b303372ull,
0x2e766f6d090a202full,0x6466250920343666ull,0x66336430202c3236ull,0x6566323465323665ull,
0x093b666539336166ull,0x3339362e30202f2full,0x64616d090a373431ull,0x203436662e6e722eull,
0x202c333664662509ull,0x25202c3136646625ull,0x6625202c32366466ull,0x202f2f093b323464ull,
0x36662e766f6d090aull,0x3436646625092034ull,0x613763336430202cull,0x3933623365396362ull,
0x2f2f093b66333038ull,0x35303931332e3220ull,0x616d090a37312d65ull,0x3436662e6e722e64ull,
0x2c35366466250920ull,0x202c393564662520ull,0x25202c3034646625ull,0x2f2f093b32356466ull,
0x732e67656e090a20ull,0x3634722509203233ull,0x203b30337225202cull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x36662e6e722e7476ull,0x2509203233732e34ull,0x7225202c36366466ull,
0x2f2f0920203b3634ull,0x662e766f6d090a20ull,0x3664662509203436ull,0x6566336430202c37ull,
0x6665663234653236ull,0x2f093b6665393361ull,0x313339362e30202full,0x2e64616d090a3734ull,
0x09203436662e6e72ull,0x25202c3836646625ull,0x6625202c36366466ull,0x646625202c373664ull,
0x0a202f2f093b3336ull,0x3436662e62757309ull,0x2c39366466250920ull,0x202c383664662520ull,
0x09203b3234646625ull,0x627573090a202f2full,0x662509203436662eull,0x646625202c303764ull,
0x36646625202c3536ull,0x0a202f2f09203b39ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x36646625202c3137ull,0x3436646625202c31ull,0x3b3037646625202cull,0x6461090a202f2f09ull,
0x2509203436662e64ull,0x6625202c32376466ull,0x646625202c333664ull,0x202f2f09203b3137ull,
0x6e752e617262090aull,0x315f744c24092069ull,0x20203b383930345full,0x2020202020202020ull,
0x744c240a202f2f09ull,0x32383639335f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x3209636f6c2e090aull,0x0a30093130360936ull,
0x3436662e73626109ull,0x2c33376466250920ull,0x203b303364662520ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x662509203436662eull,0x376430202c343764ull,0x3030303030306666ull,
0x3b30303030303030ull,0x0a666e69202f2f09ull,0x656c2e7074657309ull,0x702509203436662eull,
0x3337646625202c39ull,0x3b3437646625202cull,0x2540090a202f2f09ull,0x0920617262203970ull,
0x39355f315f744c24ull,0x202020203b303536ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3430332065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333836355f31ull,0x3436662e64646109ull,
0x2c32376466250920ull,0x202c303364662520ull,0x09203b3033646625ull,0x617262090a202f2full,
0x4c240920696e752eull,0x383930345f315f74ull,0x202020202020203bull,0x0a202f2f09202020ull,
0x39355f315f744c24ull,0x2f2f200a3a303536ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x303320656e696c20ull,0x2064616568202c34ull,0x2064656c6562616cull,
0x36355f315f744c24ull,0x766f6d090a343338ull,0x662509203436662eull,0x306430202c353764ull,
0x3030303030303030ull,0x3b30303030303030ull,0x73090a30202f2f09ull,0x662e71652e707465ull,
0x3031702509203436ull,0x2c3033646625202cull,0x093b353764662520ull,0x252140090a202f2full,
0x2061726220303170ull,0x365f315f744c2409ull,0x2020203b32363130ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c34303320ull,0x6c6562616c206461ull,0x315f744c24206465ull,0x090a34333836355full,
0x203436662e766f6dull,0x202c323764662509ull,0x3030306666666430ull,0x3030303030303030ull,
0x2d202f2f093b3030ull,0x617262090a666e69ull,0x4c240920696e752eull,0x383930345f315f74ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x30365f315f744c24ull,0x2f2f200a3a323631ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,
0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,0x766f6d090a343338ull,
0x662509203436662eull,0x376430202c363764ull,0x3030303030306666ull,0x3b30303030303030ull,
0x0a666e69202f2f09ull,0x71652e7074657309ull,0x702509203436662eull,0x33646625202c3131ull,
0x3637646625202c30ull,0x40090a202f2f093bull,0x7262203131702521ull,0x315f744c24092061ull,
0x203b34373630365full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,0x3237646625092034ull,
0x3b3033646625202cull,0x2020202020202020ull,0x7262090a202f2f09ull,0x240920696e752e61ull,
0x3930345f315f744cull,0x2020202020203b38ull,0x202f2f0920202020ull,0x365f315f744c240aull,
0x2f200a3a34373630ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,
0x6f6d090a34333836ull,0x2509203436662e76ull,0x6430202c32376466ull,0x3030303038666666ull,
0x3030303030303030ull,0x6e616e202f2f093bull,0x345f315f744c240aull,0x2f2f200a3a383930ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,
0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,0x6f6c2e090a343338ull,
0x3534350936320963ull,0x2e67656e090a3009ull,0x6466250920343666ull,0x37646625202c3737ull,
0x2020202020203b32ull,0x090a202f2f092020ull,0x203436622e766f6dull,0x252c373472257b09ull,
0x6625202c7d383472ull,0x2f0920203b373764ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x3b38347225202c38ull,0x2020202020202020ull,0x090a202f2f092020ull,0x09363209636f6c2eull,
0x6d090a3009363435ull,0x09203436622e766full,0x72252c393172257bull,0x646625202c7d3934ull,
0x2f2f0920203b3737ull,0x09636f6c2e090a20ull,0x3009383435093632ull,0x36662e766f6d090aull,
0x3837646625092034ull,0x303030306430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,
0x2e746573090a3020ull,0x662e3233752e7467ull,0x3035722509203436ull,0x2c3737646625202cull,
0x093b383764662520ull,0x67656e090a202f2full,0x722509203233732eull,0x30357225202c3135ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x3436662e766f6d09ull,0x2c39376466250920ull,
0x3030666637643020ull,0x3030303030303030ull,0x202f2f093b303030ull,0x746573090a666e69ull,
0x2e3233752e746c2eull,0x3572250920343666ull,0x3737646625202c32ull,0x3b3937646625202cull,
0x656e090a202f2f09ull,0x2509203233732e67ull,0x357225202c333572ull,0x2020202020203b32ull,
0x202f2f0920202020ull,0x33622e646e61090aull,0x2c34357225092032ull,0x25202c3135722520ull,
0x202020203b333572ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c353572ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,
0x357225202c323170ull,0x3b35357225202c34ull,0x2540090a202f2f09ull,0x2061726220323170ull,
0x345f315f744c2409ull,0x2020203b38313231ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3430332065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333836355f31ull,0x3233752e766f6d09ull,
0x202c363572250920ull,0x3b35373538343031ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233752e74672e70ull,0x202c333170250920ull,0x7225202c38347225ull,0x0a202f2f093b3635ull,
0x6220333170254009ull,0x5f744c2409206172ull,0x3b32343431365f31ull,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3836355f315f744cull,
0x636f6c2e090a3433ull,0x0934353509363209ull,0x662e766f6d090a30ull,0x3864662509203436ull,
0x3533346430202c30ull,0x3030303030303030ull,0x2f093b3030303030ull,0x343130382e31202full,
0x6d090a36312b6534ull,0x09203436662e6c75ull,0x25202c3138646625ull,0x6625202c37376466ull,
0x2f2f09203b303864ull,0x622e766f6d090a20ull,0x3572257b09203436ull,0x2c7d383172252c37ull,
0x203b313864662520ull,0x2e090a202f2f0920ull,0x3509363209636f6cull,0x6f6d090a30093535ull,
0x7b09203436622e76ull,0x3572252c39317225ull,0x38646625202c7d38ull,0x202f2f0920203b31ull,
0x33732e766f6d090aull,0x2c30337225092032ull,0x203b373730312d20ull,0x2020202020202020ull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3131365f315f744cull,0x20202020203b3638ull,
0x202f2f0920202020ull,0x365f315f744c240aull,0x2f200a3a32343431ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3430ull,
0x64656c6562616c20ull,0x355f315f744c2420ull,0x6f6d090a34333836ull,0x2509203233732e76ull,
0x30312d202c303372ull,0x20202020203b3332ull,0x202f2f0920202020ull,0x365f315f744c240aull,
0x2f200a3a36383131ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,
0x6c2e090a34333836ull,0x363509363209636full,0x726873090a300930ull,0x722509203233732eull,
0x38317225202c3935ull,0x2020203b3032202cull,0x0a202f2f09202020ull,0x3233622e646e6109ull,
0x202c303672250920ull,0x3032202c39357225ull,0x09202020203b3734ull,0x646461090a202f2full,
0x722509203233732eull,0x30337225202c3033ull,0x203b30367225202cull,0x0a202f2f09202020ull,
0x363209636f6c2e09ull,0x090a300932363509ull,0x203233622e646e61ull,0x25202c3333722509ull,
0x31322d202c383172ull,0x3337303533343634ull,0x6f090a202f2f093bull,0x2509203233622e72ull,
0x337225202c343372ull,0x3632373031202c33ull,0x2f093b3834323339ull,0x2e766f6d090a202full,
0x6466250920343662ull,0x3172257b202c3533ull,0x3b7d343372252c39ull,0x090a202f2f092020ull,
0x203233752e766f6dull,0x31202c3136722509ull,0x3835373231333730ull,0x2f09202020203b32ull,
0x70746573090a202full,0x203233752e656c2eull,0x25202c3431702509ull,0x367225202c343372ull,
0x090a202f2f093b31ull,0x7262203431702540ull,0x315f744c24092061ull,0x203b38393631365full,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c34303320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x333836355f315f74ull,0x09636f6c2e090a34ull,0x3009343635093632ull,0x36622e766f6d090aull,
0x323672257b092034ull,0x202c7d333672252cull,0x20203b3533646625ull,0x7573090a202f2f09ull,
0x2509203233732e62ull,0x367225202c343672ull,0x3538343031202c33ull,0x202f2f09203b3637ull,
0x36622e766f6d090aull,0x353672257b092034ull,0x202c7d363672252cull,0x20203b3533646625ull,
0x6f6d090a202f2f09ull,0x2509203436622e76ull,0x257b202c35336466ull,0x343672252c353672ull,
0x202f2f0920203b7dull,0x3209636f6c2e090aull,0x0a30093536350936ull,0x3233732e64646109ull,
0x202c303372250920ull,0x3b31202c30337225ull,0x0920202020202020ull,0x5f744c240a202f2full,
0x3a38393631365f31ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3430332065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x0a34333836355f31ull,0x363209636f6c2e09ull,0x090a300939373509ull,0x203436662e766f6dull,
0x202c323864662509ull,0x3030306666626430ull,0x3030303030303030ull,0x2d202f2f093b3030ull,
0x662e646461090a31ull,0x3364662509203436ull,0x3533646625202c37ull,0x3b3238646625202cull,
0x6d090a202f2f0920ull,0x09203436662e766full,0x30202c3338646625ull,0x3030303066663364ull,
0x3030303030303030ull,0x0a31202f2f093b30ull,0x3436662e64646109ull,0x2c34386466250920ull,
0x202c353364662520ull,0x09203b3338646625ull,0x706372090a202f2full,0x203436662e6e722eull,
0x202c303464662509ull,0x20203b3438646625ull,0x0a202f2f09202020ull,0x3436662e6c756d09ull,
0x2c31346466250920ull,0x202c373364662520ull,0x09203b3034646625ull,0x646461090a202f2full,
0x662509203436662eull,0x646625202c323464ull,0x34646625202c3134ull,0x0a202f2f09203b31ull,
0x3436662e6c756d09ull,0x2c33346466250920ull,0x202c323464662520ull,0x09203b3234646625ull,
0x766f6d090a202f2full,0x662509203436662eull,0x336430202c353864ull,0x3362303833316265ull,
0x3b65316630386561ull,0x32302e31202f2f09ull,0x0a36302d65333336ull,0x3436662e766f6d09ull,
0x2c36386466250920ull,0x6530646533643020ull,0x3861376238353265ull,0x202f2f093b343062ull,
0x6539343633302e34ull,0x64616d090a36302dull,0x203436662e6e722eull,0x202c373864662509ull,
0x25202c3538646625ull,0x6625202c33346466ull,0x202f2f093b363864ull,0x36662e766f6d090aull,
0x3838646625092034ull,0x336665336430202cull,0x3230663936363262ull,0x2f2f093b66363736ull,
0x34343837382e3120ull,0x616d090a35302d65ull,0x3436662e6e722e64ull,0x2c39386466250920ull,
0x202c373864662520ull,0x25202c3334646625ull,0x2f2f093b38386466ull,0x662e766f6d090a20ull,
0x3964662509203436ull,0x3166336430202c30ull,0x6139616263353437ull,0x2f093b3635393062ull,
0x383737382e38202full,0x6d090a35302d6531ull,0x36662e6e722e6461ull,0x3139646625092034ull,
0x2c3938646625202cull,0x202c333464662520ull,0x2f093b3039646625ull,0x2e766f6d090a202full,
0x6466250920343666ull,0x66336430202c3239ull,0x6432376331376333ull,0x093b343531356231ull,
0x3030302e30202f2full,0x090a383230343334ull,0x662e6e722e64616dull,0x3564662509203436ull,
0x3139646625202c32ull,0x2c3334646625202cull,0x093b323964662520ull,0x6f6c2e090a202f2full,
0x3038350936320963ull,0x2e766f6d090a3009ull,0x6466250920343666ull,0x66336430202c3339ull,
0x3239343239343236ull,0x093b643237656233ull,0x3230302e30202f2full,0x6d090a3431323332ull,
0x36662e6e722e6461ull,0x3235646625092034ull,0x2c3235646625202cull,0x202c333464662520ull,
0x2f093b3339646625ull,0x636f6c2e090a202full,0x0931383509363209ull,0x662e766f6d090a30ull,
0x3964662509203436ull,0x3866336430202c34ull,0x3939393939393939ull,0x2f093b3463336139ull,
0x353231302e30202full,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c323564ull,
0x34646625202c3235ull,0x3439646625202c33ull,0x2e090a202f2f093bull,0x3509363209636f6cull,
0x6f6d090a30093238ull,0x2509203436662e76ull,0x6430202c35396466ull,0x3535353535626633ull,
0x3435353535353535ull,0x302e30202f2f093bull,0x090a333333333338ull,0x662e6e722e64616dull,
0x3564662509203436ull,0x3235646625202c32ull,0x2c3334646625202cull,0x093b353964662520ull,
0x6f6c2e090a202f2full,0x3438350936320963ull,0x2e627573090a3009ull,0x6466250920343666ull,
0x33646625202c3635ull,0x3234646625202c37ull,0x090a202f2f09203bull,0x203436662e67656eull,
0x202c363964662509ull,0x20203b3234646625ull,0x2f09202020202020ull,0x2e766f6d090a202full,
0x72257b0920343662ull,0x7d383672252c3736ull,0x3b3635646625202cull,0x090a202f2f092020ull,
0x203233732e646461ull,0x25202c3936722509ull,0x343031202c383672ull,0x2f09203b36373538ull,
0x2e766f6d090a202full,0x72257b0920343662ull,0x7d313772252c3037ull,0x3b3635646625202cull,
0x090a202f2f092020ull,0x203436622e766f6dull,0x202c373964662509ull,0x72252c303772257bull,
0x2f0920203b7d3936ull,0x2e64616d090a202full,0x09203436662e6e72ull,0x25202c3935646625ull,
0x6625202c36396466ull,0x646625202c373364ull,0x0a202f2f093b3739ull,0x363209636f6c2e09ull,
0x090a300938383509ull,0x203436662e6c756dull,0x202c383964662509ull,0x25202c3334646625ull,
0x2f09203b32356466ull,0x2e6c756d090a202full,0x6466250920343666ull,0x34646625202c3235ull,
0x3839646625202c32ull,0x090a202f2f09203bull,0x09363209636f6c2eull,0x63090a3009383935ull,
0x36662e6e722e7476ull,0x2509203233732e34ull,0x7225202c31366466ull,0x2f2f0920203b3033ull,
0x662e766f6d090a20ull,0x3964662509203436ull,0x6566336430202c39ull,0x6665663234653236ull,
0x2f093b6665393361ull,0x313339362e30202full,0x2e64616d090a3734ull,0x09203436662e6e72ull,
0x25202c3336646625ull,0x6625202c31366466ull,0x646625202c393964ull,0x0a202f2f093b3234ull,
0x3436662e766f6d09ull,0x3030316466250920ull,0x613763336430202cull,0x3933623365396362ull,
0x2f2f093b66333038ull,0x35303931332e3220ull,0x616d090a37312d65ull,0x3436662e6e722e64ull,
0x3130316466250920ull,0x2c3935646625202cull,0x202c303464662520ull,0x2f093b3235646625ull,
0x2e67656e090a202full,0x3772250920323373ull,0x3b30337225202c32ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x662e6e722e747663ull,0x09203233732e3436ull,0x202c323031646625ull,
0x2f09203b32377225ull,0x2e766f6d090a202full,0x6466250920343666ull,0x336430202c333031ull,
0x6632346532366566ull,0x3b66653933616665ull,0x39362e30202f2f09ull,0x616d090a37343133ull,
0x3436662e6e722e64ull,0x3430316466250920ull,0x323031646625202cull,0x333031646625202cull,
0x3b3336646625202cull,0x7573090a202f2f09ull,0x2509203436662e62ull,0x25202c3530316466ull,
0x25202c3430316466ull,0x2f2f093b32346466ull,0x662e627573090a20ull,0x3164662509203436ull,
0x31646625202c3630ull,0x31646625202c3130ull,0x0a202f2f093b3530ull,0x2e6e722e64616d09ull,
0x6466250920343666ull,0x36646625202c3137ull,0x3031646625202c31ull,0x3031646625202c30ull,
0x090a202f2f093b36ull,0x203436662e646461ull,0x2c37303164662509ull,0x202c333664662520ull,
0x2f093b3137646625ull,0x2e617262090a202full,0x744c240920696e75ull,0x3b303136345f315full,
0x2020202020202020ull,0x240a202f2f092020ull,0x3231345f315f744cull,0x3c2f2f200a3a3831ull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x34303320656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3836355f315f744cull,0x636f6c2e090a3433ull,
0x0931303609363209ull,0x662e736261090a30ull,0x3164662509203436ull,0x37646625202c3830ull,
0x2020202020203b32ull,0x6d090a202f2f0920ull,0x09203436662e766full,0x202c393031646625ull,
0x3030306666376430ull,0x3030303030303030ull,0x69202f2f093b3030ull,0x70746573090a666eull,
0x203436662e656c2eull,0x25202c3531702509ull,0x25202c3830316466ull,0x2f093b3930316466ull,
0x31702540090a202full,0x2409206172622035ull,0x3232365f315f744cull,0x20202020203b3031ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c343033ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x61090a3433383635ull,0x09203436662e6464ull,0x202c303131646625ull,0x25202c3237646625ull,
0x2f2f093b32376466ull,0x662e67656e090a20ull,0x3164662509203436ull,0x31646625202c3730ull,
0x20202020203b3031ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,0x36345f315f744c24ull,
0x20202020203b3031ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3031323236ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c343033ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x6d090a3433383635ull,
0x09203436662e766full,0x202c313131646625ull,0x3030303030306430ull,0x3030303030303030ull,
0x30202f2f093b3030ull,0x652e70746573090aull,0x2509203436662e71ull,0x646625202c363170ull,
0x31646625202c3737ull,0x0a202f2f093b3131ull,0x2036317025214009ull,0x744c240920617262ull,
0x32323732365f315full,0x092020202020203bull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x34303320656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3836355f315f744cull,0x2e766f6d090a3433ull,0x6466250920343666ull,
0x666430202c373031ull,0x3030303030306666ull,0x3b30303030303030ull,0x666e692d202f2f09ull,
0x6e752e617262090aull,0x315f744c24092069ull,0x20203b303136345full,0x2020202020202020ull,
0x744c240a202f2f09ull,0x32323732365f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,0x3131646625092034ull,
0x6666376430202c32ull,0x3030303030303030ull,0x2f093b3030303030ull,0x73090a666e69202full,
0x662e71652e707465ull,0x3731702509203436ull,0x2c3737646625202cull,0x3b32313164662520ull,
0x2140090a202f2f09ull,0x6172622037317025ull,0x5f315f744c240920ull,0x20203b3433323336ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3430332065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x0a34333836355f31ull,0x3436662e766f6d09ull,0x3730316466250920ull,0x3b3737646625202cull,
0x0920202020202020ull,0x617262090a202f2full,0x4c240920696e752eull,0x303136345f315f74ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x33365f315f744c24ull,0x2f2f200a3a343332ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,
0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,0x766f6d090a343338ull,
0x662509203436662eull,0x6430202c37303164ull,0x3030303038666666ull,0x3030303030303030ull,
0x6e616e202f2f093bull,0x345f315f744c240aull,0x2f2f200a3a303136ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,0x2064616568202c34ull,
0x2064656c6562616cull,0x36355f315f744c24ull,0x6f6c2e090a343338ull,0x3137310936310963ull,
0x2e766f6d090a3009ull,0x6466250920343666ull,0x31646625202c3732ull,0x20202020203b3730ull,
0x090a202f2f092020ull,0x20696e752e617262ull,0x355f315f744c2409ull,0x2020203b34313138ull,
0x2f09202020202020ull,0x315f744c240a202full,0x0a3a30373338355full,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c34303320ull,
0x6c6562616c206461ull,0x315f744c24206465ull,0x090a34333836355full,0x09363209636f6c2eull,
0x6d090a3009353435ull,0x09203436622e766full,0x72252c333772257bull,0x646625202c7d3437ull,
0x2f2f092020203b31ull,0x732e766f6d090a20ull,0x3831722509203233ull,0x203b34377225202cull,
0x2020202020202020ull,0x2e090a202f2f0920ull,0x3509363209636f6cull,0x6f6d090a30093634ull,
0x7b09203436622e76ull,0x3772252c39317225ull,0x31646625202c7d35ull,0x202f2f092020203bull,
0x3209636f6c2e090aull,0x0a30093834350936ull,0x3436662e766f6d09ull,0x3331316466250920ull,
0x303030306430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x2e746573090a3020ull,
0x662e3233752e7467ull,0x3637722509203436ull,0x202c31646625202cull,0x093b333131646625ull,
0x67656e090a202f2full,0x722509203233732eull,0x36377225202c3737ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x3436662e766f6d09ull,0x3431316466250920ull,0x306666376430202cull,
0x3030303030303030ull,0x2f2f093b30303030ull,0x6573090a666e6920ull,0x3233752e746c2e74ull,
0x722509203436662eull,0x31646625202c3837ull,0x343131646625202cull,0x6e090a202f2f093bull,
0x09203233732e6765ull,0x7225202c39377225ull,0x20202020203b3837ull,0x2f2f092020202020ull,
0x622e646e61090a20ull,0x3038722509203233ull,0x202c37377225202cull,0x2020203b39377225ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c31387225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e7165ull,0x7225202c38317025ull,
0x31387225202c3038ull,0x40090a202f2f093bull,0x6172622038317025ull,0x5f315f744c240920ull,
0x20203b3435373234ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x33752e766f6d090aull,0x2c32387225092032ull,
0x3537353834303120ull,0x202020202020203bull,0x6573090a202f2f09ull,0x33752e74672e7074ull,
0x2c39317025092032ull,0x25202c3437722520ull,0x202f2f093b323872ull,0x203931702540090aull,
0x744c240920617262ull,0x32303034365f315full,0x202020202020203bull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,
0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,0x6f6c2e090a343338ull,
0x3435350936320963ull,0x2e766f6d090a3009ull,0x6466250920343666ull,0x346430202c353131ull,
0x3030303030303533ull,0x3b30303030303030ull,0x30382e31202f2f09ull,0x0a36312b65343431ull,
0x3436662e6c756d09ull,0x3631316466250920ull,0x202c31646625202cull,0x093b353131646625ull,
0x766f6d090a202f2full,0x257b09203436622eull,0x383172252c333872ull,0x3131646625202c7dull,
0x0a202f2f09203b36ull,0x363209636f6c2e09ull,0x090a300935353509ull,0x203436622e766f6dull,
0x252c393172257b09ull,0x6625202c7d343872ull,0x2f09203b36313164ull,0x2e766f6d090a202full,
0x3372250920323373ull,0x373730312d202c30ull,0x202020202020203bull,0x090a202f2f092020ull,
0x20696e752e617262ull,0x365f315f744c2409ull,0x2020203b36343733ull,0x2f09202020202020ull,
0x315f744c240a202full,0x0a3a32303034365full,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c34303320ull,0x6c6562616c206461ull,
0x315f744c24206465ull,0x090a34333836355full,0x203233732e766f6dull,0x2d202c3033722509ull,
0x2020203b33323031ull,0x2f09202020202020ull,0x315f744c240a202full,0x0a3a36343733365full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c34303320ull,0x6c6562616c206461ull,0x315f744c24206465ull,0x090a34333836355full,
0x09363209636f6c2eull,0x73090a3009303635ull,0x09203233732e7268ull,0x7225202c35387225ull,
0x203b3032202c3831ull,0x2f2f092020202020ull,0x622e646e61090a20ull,0x3638722509203233ull,
0x202c35387225202cull,0x2020203b37343032ull,0x61090a202f2f0920ull,0x09203233732e6464ull,
0x7225202c30337225ull,0x36387225202c3033ull,0x2f2f09202020203bull,0x09636f6c2e090a20ull,
0x3009323635093632ull,0x33622e646e61090aull,0x2c33337225092032ull,0x2d202c3831722520ull,
0x3035333436343132ull,0x0a202f2f093b3337ull,0x203233622e726f09ull,0x25202c3433722509ull,
0x373031202c333372ull,0x3b38343233393632ull,0x6f6d090a202f2f09ull,0x2509203436622e76ull,
0x257b202c35336466ull,0x343372252c393172ull,0x202f2f0920203b7dull,0x33752e766f6d090aull,
0x2c37387225092032ull,0x3732313337303120ull,0x202020203b323835ull,0x6573090a202f2f09ull,
0x33752e656c2e7074ull,0x2c30327025092032ull,0x25202c3433722520ull,0x202f2f093b373872ull,
0x203032702540090aull,0x744c240920617262ull,0x38353234365f315full,0x202020202020203bull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x303320656e696c20ull,0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,
0x6f6c2e090a343338ull,0x3436350936320963ull,0x2e766f6d090a3009ull,0x72257b0920343662ull,
0x7d393872252c3838ull,0x3b3533646625202cull,0x090a202f2f092020ull,0x203233732e627573ull,
0x25202c3039722509ull,0x343031202c393872ull,0x2f09203b36373538ull,0x2e766f6d090a202full,
0x72257b0920343662ull,0x7d323972252c3139ull,0x3b3533646625202cull,0x090a202f2f092020ull,
0x203436622e766f6dull,0x202c353364662509ull,0x72252c313972257bull,0x2f0920203b7d3039ull,
0x636f6c2e090a202full,0x0935363509363209ull,0x732e646461090a30ull,0x3033722509203233ull,
0x202c30337225202cull,0x2020202020203b31ull,0x4c240a202f2f0920ull,0x353234365f315f74ull,
0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c34303320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x333836355f315f74ull,
0x09636f6c2e090a34ull,0x3009393735093632ull,0x36662e766f6d090aull,0x3131646625092034ull,
0x6666626430202c37ull,0x3030303030303030ull,0x2f093b3030303030ull,0x6461090a312d202full,
0x2509203436662e64ull,0x6625202c37336466ull,0x646625202c353364ull,0x202f2f093b373131ull,
0x36662e766f6d090aull,0x3131646625092034ull,0x6666336430202c38ull,0x3030303030303030ull,
0x2f093b3030303030ull,0x646461090a31202full,0x662509203436662eull,0x6625202c39313164ull,
0x646625202c353364ull,0x202f2f093b383131ull,0x6e722e706372090aull,0x662509203436662eull,
0x646625202c303464ull,0x202020203b393131ull,0x756d090a202f2f09ull,0x2509203436662e6cull,
0x6625202c31346466ull,0x646625202c373364ull,0x202f2f09203b3034ull,0x36662e646461090aull,
0x3234646625092034ull,0x2c3134646625202cull,0x203b313464662520ull,0x756d090a202f2f09ull,
0x2509203436662e6cull,0x6625202c33346466ull,0x646625202c323464ull,0x202f2f09203b3234ull,
0x36662e766f6d090aull,0x3231646625092034ull,0x6265336430202c30ull,0x6561336230383331ull,
0x2f093b6531663038ull,0x333632302e31202full,0x6d090a36302d6533ull,0x09203436662e766full,
0x202c313231646625ull,0x6565306465336430ull,0x6238613762383532ull,0x34202f2f093b3430ull,
0x2d6539343633302eull,0x2e64616d090a3630ull,0x09203436662e6e72ull,0x202c323231646625ull,
0x202c303231646625ull,0x25202c3334646625ull,0x2f093b3132316466ull,0x2e766f6d090a202full,
0x6466250920343666ull,0x336430202c333231ull,0x3936363262336665ull,0x3b66363736323066ull,
0x37382e31202f2f09ull,0x0a35302d65343438ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c343231ull,0x646625202c323231ull,0x31646625202c3334ull,0x0a202f2f093b3332ull,
0x3436662e766f6d09ull,0x3532316466250920ull,0x373166336430202cull,0x6261396162633534ull,
0x2f2f093b36353930ull,0x31383737382e3820ull,0x616d090a35302d65ull,0x3436662e6e722e64ull,
0x3632316466250920ull,0x343231646625202cull,0x2c3334646625202cull,0x3b35323164662520ull,
0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x30202c3732316466ull,0x6331376333663364ull,
0x3531356231643237ull,0x2e30202f2f093b34ull,0x3230343334303030ull,0x722e64616d090a38ull,
0x2509203436662e6eull,0x6625202c32356466ull,0x6625202c36323164ull,0x646625202c333464ull,
0x202f2f093b373231ull,0x3209636f6c2e090aull,0x0a30093038350936ull,0x3436662e766f6d09ull,
0x3832316466250920ull,0x323666336430202cull,0x6233323934323934ull,0x2f2f093b64323765ull,
0x33323230302e3020ull,0x64616d090a343132ull,0x203436662e6e722eull,0x202c323564662509ull,
0x25202c3235646625ull,0x6625202c33346466ull,0x2f2f093b38323164ull,0x09636f6c2e090a20ull,
0x3009313835093632ull,0x36662e766f6d090aull,0x3231646625092034ull,0x3866336430202c39ull,
0x3939393939393939ull,0x2f093b3463336139ull,0x353231302e30202full,0x6e722e64616d090aull,
0x662509203436662eull,0x646625202c323564ull,0x34646625202c3235ull,0x3231646625202c33ull,
0x090a202f2f093b39ull,0x09363209636f6c2eull,0x6d090a3009323835ull,0x09203436662e766full,
0x202c303331646625ull,0x3535356266336430ull,0x3535353535353535ull,0x30202f2f093b3435ull,
0x333333333338302eull,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c323564ull,
0x34646625202c3235ull,0x3331646625202c33ull,0x090a202f2f093b30ull,0x09363209636f6c2eull,
0x73090a3009343835ull,0x09203436662e6275ull,0x25202c3635646625ull,0x6625202c37336466ull,
0x2f2f09203b323464ull,0x662e67656e090a20ull,0x3164662509203436ull,0x34646625202c3133ull,
0x2020202020203b32ull,0x6d090a202f2f0920ull,0x09203436622e766full,0x72252c333972257bull,
0x646625202c7d3439ull,0x2f2f0920203b3635ull,0x732e646461090a20ull,0x3539722509203233ull,
0x202c34397225202cull,0x3b36373538343031ull,0x6d090a202f2f0920ull,0x09203436622e766full,
0x72252c363972257bull,0x646625202c7d3739ull,0x2f2f0920203b3635ull,0x622e766f6d090a20ull,
0x3164662509203436ull,0x3972257b202c3233ull,0x3b7d353972252c36ull,0x6d090a202f2f0920ull,
0x36662e6e722e6461ull,0x3935646625092034ull,0x313331646625202cull,0x2c3733646625202cull,
0x3b32333164662520ull,0x6c2e090a202f2f09ull,0x383509363209636full,0x6c756d090a300938ull,
0x662509203436662eull,0x6625202c33333164ull,0x646625202c333464ull,0x0a202f2f093b3235ull,
0x3436662e6c756d09ull,0x2c32356466250920ull,0x202c323464662520ull,0x093b333331646625ull,
0x6f6c2e090a202f2full,0x3839350936320963ull,0x2e747663090a3009ull,0x732e3436662e6e72ull,
0x3664662509203233ull,0x3b30337225202c31ull,0x090a202f2f092020ull,0x203436662e766f6dull,
0x2c34333164662509ull,0x3236656633643020ull,0x3361666566323465ull,0x202f2f093b666539ull,
0x3734313339362e30ull,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c333664ull,
0x31646625202c3136ull,0x34646625202c3433ull,0x090a202f2f093b32ull,0x203436662e766f6dull,
0x2c35333164662509ull,0x6261376333643020ull,0x3839336233653963ull,0x202f2f093b663330ull,
0x6535303931332e32ull,0x64616d090a37312dull,0x203436662e6e722eull,0x2c36333164662509ull,
0x202c393564662520ull,0x25202c3034646625ull,0x2f2f093b32356466ull,0x732e67656e090a20ull,
0x3839722509203233ull,0x203b30337225202cull,0x2020202020202020ull,0x63090a202f2f0920ull,
0x36662e6e722e7476ull,0x2509203233732e34ull,0x25202c3733316466ull,0x2f2f09203b383972ull,
0x662e766f6d090a20ull,0x3164662509203436ull,0x66336430202c3833ull,0x6566323465323665ull,
0x093b666539336166ull,0x3339362e30202f2full,0x64616d090a373431ull,0x203436662e6e722eull,
0x2c39333164662509ull,0x2c37333164662520ull,0x2c38333164662520ull,0x093b333664662520ull,
0x627573090a202f2full,0x662509203436662eull,0x6625202c30343164ull,0x6625202c39333164ull,
0x202f2f093b323464ull,0x36662e627573090aull,0x3431646625092034ull,0x3331646625202c31ull,
0x3431646625202c36ull,0x090a202f2f093b30ull,0x662e6e722e64616dull,0x3764662509203436ull,
0x3136646625202c31ull,0x353331646625202cull,0x313431646625202cull,0x61090a202f2f093bull,
0x09203436662e6464ull,0x202c323431646625ull,0x25202c3336646625ull,0x2f2f093b31376466ull,
0x752e617262090a20ull,0x5f744c240920696eull,0x203b343730335f31ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x353732345f315f74ull,0x6c3c2f2f200a3a34ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c34303320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x333836355f315f74ull,0x09636f6c2e090a34ull,0x3009313036093632ull,
0x36662e736261090aull,0x3431646625092034ull,0x3b31646625202c33ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x30202c3434316466ull,0x3030303066663764ull,
0x3030303030303030ull,0x6e69202f2f093b30ull,0x2e70746573090a66ull,0x09203436662e656cull,
0x6625202c31327025ull,0x6625202c33343164ull,0x2f2f093b34343164ull,0x3132702540090a20ull,
0x4c24092061726220ull,0x373734365f315f74ull,0x2020202020203b30ull,0x2f200a202f2f0920ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,
0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,0x6461090a34333836ull,
0x2509203436662e64ull,0x25202c3234316466ull,0x646625202c316466ull,0x202f2f0920203b31ull,
0x6e752e617262090aull,0x315f744c24092069ull,0x20203b343730335full,0x2020202020202020ull,
0x744c240a202f2f09ull,0x30373734365f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,0x3431646625092034ull,
0x3030306430202c35ull,0x3030303030303030ull,0x2f093b3030303030ull,0x746573090a30202full,
0x3436662e71652e70ull,0x202c323270250920ull,0x6625202c31646625ull,0x2f2f093b35343164ull,
0x3270252140090a20ull,0x2409206172622032ull,0x3235365f315f744cull,0x20202020203b3238ull,
0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,
0x6f6d090a34333836ull,0x2509203436662e76ull,0x30202c3234316466ull,0x3030303066666664ull,
0x3030303030303030ull,0x692d202f2f093b30ull,0x2e617262090a666eull,0x744c240920696e75ull,
0x3b343730335f315full,0x2020202020202020ull,0x240a202f2f092020ull,0x3235365f315f744cull,
0x3c2f2f200a3a3238ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3836355f315f744cull,
0x2e766f6d090a3433ull,0x6466250920343666ull,0x376430202c363431ull,0x3030303030306666ull,
0x3b30303030303030ull,0x0a666e69202f2f09ull,0x71652e7074657309ull,0x702509203436662eull,
0x31646625202c3332ull,0x363431646625202cull,0x40090a202f2f093bull,0x7262203332702521ull,
0x315f744c24092061ull,0x203b34393735365full,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,
0x3431646625092034ull,0x3b31646625202c32ull,0x2020202020202020ull,0x7262090a202f2f09ull,
0x240920696e752e61ull,0x3730335f315f744cull,0x2020202020203b34ull,0x202f2f0920202020ull,
0x365f315f744c240aull,0x2f200a3a34393735ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,
0x355f315f744c2420ull,0x6f6d090a34333836ull,0x2509203436662e76ull,0x30202c3234316466ull,
0x3030303866666664ull,0x3030303030303030ull,0x616e202f2f093b30ull,0x5f315f744c240a6eull,
0x2f200a3a34373033ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,
0x6c2e090a34333836ull,0x343509363209636full,0x67656e090a300935ull,0x662509203436662eull,
0x6625202c37343164ull,0x2020203b32343164ull,0x0a202f2f09202020ull,0x3436622e766f6d09ull,
0x2c393972257b0920ull,0x202c7d3030317225ull,0x093b373431646625ull,0x766f6d090a202f2full,
0x722509203233732eull,0x30317225202c3831ull,0x2020202020203b30ull,0x0a202f2f09202020ull,
0x363209636f6c2e09ull,0x090a300936343509ull,0x203436622e766f6dull,0x252c393172257b09ull,
0x25202c7d31303172ull,0x2f093b3734316466ull,0x636f6c2e090a202full,0x0938343509363209ull,
0x662e766f6d090a30ull,0x3164662509203436ull,0x30306430202c3834ull,0x3030303030303030ull,
0x093b303030303030ull,0x6573090a30202f2full,0x3233752e74672e74ull,0x722509203436662eull,
0x646625202c323031ull,0x646625202c373431ull,0x202f2f093b383431ull,0x33732e67656e090aull,
0x3330317225092032ull,0x3b3230317225202cull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203436662e76ull,0x30202c3934316466ull,0x3030303066663764ull,0x3030303030303030ull,
0x6e69202f2f093b30ull,0x6c2e746573090a66ull,0x36662e3233752e74ull,0x3430317225092034ull,
0x373431646625202cull,0x393431646625202cull,0x6e090a202f2f093bull,0x09203233732e6765ull,
0x25202c3530317225ull,0x2020203b34303172ull,0x2f2f092020202020ull,0x622e646e61090a20ull,
0x3031722509203233ull,0x3330317225202c36ull,0x3b3530317225202cull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x30202c3730317225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e7165ull,0x7225202c34327025ull,0x317225202c363031ull,
0x0a202f2f093b3730ull,0x6220343270254009ull,0x5f744c2409206172ull,0x3b30393234345f31ull,
0x0920202020202020ull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3836355f315f744cull,0x2e766f6d090a3433ull,0x3172250920323375ull,0x38343031202c3830ull,
0x202020203b353735ull,0x090a202f2f092020ull,0x2e74672e70746573ull,0x3270250920323375ull,
0x3030317225202c35ull,0x3b3830317225202cull,0x2540090a202f2f09ull,0x2061726220353270ull,
0x365f315f744c2409ull,0x2020203b32363536ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3430332065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333836355f31ull,0x363209636f6c2e09ull,
0x090a300934353509ull,0x203436662e766f6dull,0x2c30353164662509ull,0x3030353334643020ull,
0x3030303030303030ull,0x202f2f093b303030ull,0x6534343130382e31ull,0x6c756d090a36312bull,
0x662509203436662eull,0x6625202c31353164ull,0x6625202c37343164ull,0x2f2f093b30353164ull,
0x622e766f6d090a20ull,0x3172257b09203436ull,0x7d383172252c3930ull,0x313531646625202cull,
0x2e090a202f2f093bull,0x3509363209636f6cull,0x6f6d090a30093535ull,0x7b09203436622e76ull,
0x3172252c39317225ull,0x646625202c7d3031ull,0x202f2f093b313531ull,0x33732e766f6d090aull,
0x2c30337225092032ull,0x203b373730312d20ull,0x2020202020202020ull,0x7262090a202f2f09ull,
0x240920696e752e61ull,0x3336365f315f744cull,0x20202020203b3630ull,0x202f2f0920202020ull,
0x365f315f744c240aull,0x2f200a3a32363536ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,
0x355f315f744c2420ull,0x6f6d090a34333836ull,0x2509203233732e76ull,0x30312d202c303372ull,
0x20202020203b3332ull,0x202f2f0920202020ull,0x365f315f744c240aull,0x2f200a3a36303336ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,
0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,0x6c2e090a34333836ull,
0x363509363209636full,0x726873090a300930ull,0x722509203233732eull,0x317225202c313131ull,
0x20203b3032202c38ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,0x2c32313172250920ull,
0x202c313131722520ull,0x0920203b37343032ull,0x646461090a202f2full,0x722509203233732eull,
0x30337225202c3033ull,0x3b3231317225202cull,0x0a202f2f09202020ull,0x363209636f6c2e09ull,
0x090a300932363509ull,0x203233622e646e61ull,0x25202c3333722509ull,0x31322d202c383172ull,
0x3337303533343634ull,0x6f090a202f2f093bull,0x2509203233622e72ull,0x337225202c343372ull,
0x3632373031202c33ull,0x2f093b3834323339ull,0x2e766f6d090a202full,0x6466250920343662ull,
0x3172257b202c3533ull,0x3b7d343372252c39ull,0x090a202f2f092020ull,0x203233752e766f6dull,
0x202c333131722509ull,0x3537323133373031ull,0x2f092020203b3238ull,0x70746573090a202full,
0x203233752e656c2eull,0x25202c3632702509ull,0x317225202c343372ull,0x0a202f2f093b3331ull,
0x6220363270254009ull,0x5f744c2409206172ull,0x3b38313836365f31ull,0x0920202020202020ull,
0x3c2f2f200a202f2full,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3836355f315f744cull,
0x636f6c2e090a3433ull,0x0934363509363209ull,0x622e766f6d090a30ull,0x3172257b09203436ull,
0x35313172252c3431ull,0x3533646625202c7dull,0x73090a202f2f093bull,0x09203233732e6275ull,
0x25202c3631317225ull,0x3031202c35313172ull,0x2f093b3637353834ull,0x2e766f6d090a202full,
0x72257b0920343662ull,0x313172252c373131ull,0x33646625202c7d38ull,0x090a202f2f093b35ull,
0x203436622e766f6dull,0x202c353364662509ull,0x252c37313172257bull,0x2f093b7d36313172ull,
0x636f6c2e090a202full,0x0935363509363209ull,0x732e646461090a30ull,0x3033722509203233ull,
0x202c30337225202cull,0x2020202020203b31ull,0x4c240a202f2f0920ull,0x313836365f315f74ull,
0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c34303320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x333836355f315f74ull,
0x09636f6c2e090a34ull,0x3009393735093632ull,0x36662e766f6d090aull,0x3531646625092034ull,
0x6666626430202c32ull,0x3030303030303030ull,0x2f093b3030303030ull,0x6461090a312d202full,
0x2509203436662e64ull,0x6625202c37336466ull,0x646625202c353364ull,0x202f2f093b323531ull,
0x36662e766f6d090aull,0x3531646625092034ull,0x6666336430202c33ull,0x3030303030303030ull,
0x2f093b3030303030ull,0x646461090a31202full,0x662509203436662eull,0x6625202c34353164ull,
0x646625202c353364ull,0x202f2f093b333531ull,0x6e722e706372090aull,0x662509203436662eull,
0x646625202c303464ull,0x202020203b343531ull,0x756d090a202f2f09ull,0x2509203436662e6cull,
0x6625202c31346466ull,0x646625202c373364ull,0x202f2f09203b3034ull,0x36662e646461090aull,
0x3234646625092034ull,0x2c3134646625202cull,0x203b313464662520ull,0x756d090a202f2f09ull,
0x2509203436662e6cull,0x6625202c33346466ull,0x646625202c323464ull,0x202f2f09203b3234ull,
0x36662e766f6d090aull,0x3531646625092034ull,0x6265336430202c35ull,0x6561336230383331ull,
0x2f093b6531663038ull,0x333632302e31202full,0x6d090a36302d6533ull,0x09203436662e766full,
0x202c363531646625ull,0x6565306465336430ull,0x6238613762383532ull,0x34202f2f093b3430ull,
0x2d6539343633302eull,0x2e64616d090a3630ull,0x09203436662e6e72ull,0x202c373531646625ull,
0x202c353531646625ull,0x25202c3334646625ull,0x2f093b3635316466ull,0x2e766f6d090a202full,
0x6466250920343666ull,0x336430202c383531ull,0x3936363262336665ull,0x3b66363736323066ull,
0x37382e31202f2f09ull,0x0a35302d65343438ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c393531ull,0x646625202c373531ull,0x31646625202c3334ull,0x0a202f2f093b3835ull,
0x3436662e766f6d09ull,0x3036316466250920ull,0x373166336430202cull,0x6261396162633534ull,
0x2f2f093b36353930ull,0x31383737382e3820ull,0x616d090a35302d65ull,0x3436662e6e722e64ull,
0x3136316466250920ull,0x393531646625202cull,0x2c3334646625202cull,0x3b30363164662520ull,
0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x30202c3236316466ull,0x6331376333663364ull,
0x3531356231643237ull,0x2e30202f2f093b34ull,0x3230343334303030ull,0x722e64616d090a38ull,
0x2509203436662e6eull,0x6625202c32356466ull,0x6625202c31363164ull,0x646625202c333464ull,
0x202f2f093b323631ull,0x3209636f6c2e090aull,0x0a30093038350936ull,0x3436662e766f6d09ull,
0x3336316466250920ull,0x323666336430202cull,0x6233323934323934ull,0x2f2f093b64323765ull,
0x33323230302e3020ull,0x64616d090a343132ull,0x203436662e6e722eull,0x202c323564662509ull,
0x25202c3235646625ull,0x6625202c33346466ull,0x2f2f093b33363164ull,0x09636f6c2e090a20ull,
0x3009313835093632ull,0x36662e766f6d090aull,0x3631646625092034ull,0x3866336430202c34ull,
0x3939393939393939ull,0x2f093b3463336139ull,0x353231302e30202full,0x6e722e64616d090aull,
0x662509203436662eull,0x646625202c323564ull,0x34646625202c3235ull,0x3631646625202c33ull,
0x090a202f2f093b34ull,0x09363209636f6c2eull,0x6d090a3009323835ull,0x09203436662e766full,
0x202c353631646625ull,0x3535356266336430ull,0x3535353535353535ull,0x30202f2f093b3435ull,
0x333333333338302eull,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c323564ull,
0x34646625202c3235ull,0x3631646625202c33ull,0x090a202f2f093b35ull,0x09363209636f6c2eull,
0x73090a3009343835ull,0x09203436662e6275ull,0x25202c3635646625ull,0x6625202c37336466ull,
0x2f2f09203b323464ull,0x662e67656e090a20ull,0x3164662509203436ull,0x34646625202c3636ull,
0x2020202020203b32ull,0x6d090a202f2f0920ull,0x09203436622e766full,0x252c39313172257bull,
0x25202c7d30323172ull,0x2f2f093b36356466ull,0x732e646461090a20ull,0x3231722509203233ull,
0x3032317225202c31ull,0x373538343031202cull,0x090a202f2f093b36ull,0x203436622e766f6dull,
0x2c32323172257b09ull,0x202c7d3332317225ull,0x2f093b3635646625ull,0x2e766f6d090a202full,
0x6466250920343662ull,0x72257b202c373631ull,0x323172252c323231ull,0x0a202f2f093b7d31ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x31646625202c3935ull,0x33646625202c3636ull,
0x3631646625202c37ull,0x090a202f2f093b37ull,0x09363209636f6c2eull,0x6d090a3009383835ull,
0x09203436662e6c75ull,0x202c383631646625ull,0x25202c3334646625ull,0x2f2f093b32356466ull,
0x662e6c756d090a20ull,0x3564662509203436ull,0x3234646625202c32ull,0x383631646625202cull,
0x2e090a202f2f093bull,0x3509363209636f6cull,0x7663090a30093839ull,0x3436662e6e722e74ull,
0x662509203233732eull,0x337225202c313664ull,0x202f2f0920203b30ull,0x36662e766f6d090aull,
0x3631646625092034ull,0x6566336430202c39ull,0x6665663234653236ull,0x2f093b6665393361ull,
0x313339362e30202full,0x2e64616d090a3734ull,0x09203436662e6e72ull,0x25202c3336646625ull,
0x6625202c31366466ull,0x6625202c39363164ull,0x202f2f093b323464ull,0x36662e766f6d090aull,
0x3731646625092034ull,0x3763336430202c30ull,0x3362336539636261ull,0x2f093b6633303839ull,
0x303931332e32202full,0x6d090a37312d6535ull,0x36662e6e722e6461ull,0x3731646625092034ull,
0x3935646625202c31ull,0x2c3034646625202cull,0x093b323564662520ull,0x67656e090a202f2full,
0x722509203233732eull,0x337225202c343231ull,0x2020202020203b30ull,0x0a202f2f09202020ull,
0x2e6e722e74766309ull,0x203233732e343666ull,0x2c32373164662509ull,0x093b343231722520ull,
0x766f6d090a202f2full,0x662509203436662eull,0x6430202c33373164ull,0x3234653236656633ull,
0x6665393361666566ull,0x362e30202f2f093bull,0x6d090a3734313339ull,0x36662e6e722e6461ull,
0x3731646625092034ull,0x3731646625202c34ull,0x3731646625202c32ull,0x3336646625202c33ull,
0x73090a202f2f093bull,0x09203436662e6275ull,0x202c353731646625ull,0x202c343731646625ull,
0x2f093b3234646625ull,0x2e627573090a202full,0x6466250920343666ull,0x646625202c363731ull,
0x646625202c313731ull,0x202f2f093b353731ull,0x6e722e64616d090aull,0x662509203436662eull,
0x646625202c313764ull,0x31646625202c3136ull,0x31646625202c3037ull,0x0a202f2f093b3637ull,
0x3436662e64646109ull,0x3737316466250920ull,0x2c3336646625202cull,0x093b313764662520ull,
0x617262090a202f2full,0x4c240920696e752eull,0x363835335f315f74ull,0x202020202020203bull,
0x0a202f2f09202020ull,0x34345f315f744c24ull,0x2f2f200a3a303932ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,0x2064616568202c34ull,
0x2064656c6562616cull,0x36355f315f744c24ull,0x6f6c2e090a343338ull,0x3130360936320963ull,
0x2e736261090a3009ull,0x6466250920343666ull,0x646625202c383731ull,0x202020203b323431ull,
0x090a202f2f092020ull,0x203436662e766f6dull,0x2c39373164662509ull,0x3030666637643020ull,
0x3030303030303030ull,0x202f2f093b303030ull,0x746573090a666e69ull,0x3436662e656c2e70ull,
0x202c373270250920ull,0x202c383731646625ull,0x093b393731646625ull,0x702540090a202f2full,
0x0920617262203732ull,0x37365f315f744c24ull,0x202020203b303333ull,0x0a202f2f09202020ull,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c34303320ull,0x6c6562616c206461ull,0x315f744c24206465ull,0x090a34333836355full,
0x203436662e646461ull,0x2c30383164662509ull,0x2c32343164662520ull,0x3b32343164662520ull,
0x656e090a202f2f09ull,0x2509203436662e67ull,0x25202c3737316466ull,0x20203b3038316466ull,
0x202f2f0920202020ull,0x6e752e617262090aull,0x315f744c24092069ull,0x20203b363835335full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x30333337365f315full,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,
0x3831646625092034ull,0x3030306430202c31ull,0x3030303030303030ull,0x2f093b3030303030ull,
0x746573090a30202full,0x3436662e71652e70ull,0x202c383270250920ull,0x202c373431646625ull,
0x093b313831646625ull,0x252140090a202f2full,0x2061726220383270ull,0x365f315f744c2409ull,
0x2020203b32343837ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,
0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c34303320ull,0x6c6562616c206461ull,
0x315f744c24206465ull,0x090a34333836355full,0x203436662e766f6dull,0x2c37373164662509ull,
0x3030666666643020ull,0x3030303030303030ull,0x202f2f093b303030ull,0x7262090a666e692dull,
0x240920696e752e61ull,0x3835335f315f744cull,0x2020202020203b36ull,0x202f2f0920202020ull,
0x365f315f744c240aull,0x2f200a3a32343837ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,
0x355f315f744c2420ull,0x6f6d090a34333836ull,0x2509203436662e76ull,0x30202c3238316466ull,
0x3030303066663764ull,0x3030303030303030ull,0x6e69202f2f093b30ull,0x2e70746573090a66ull,
0x09203436662e7165ull,0x6625202c39327025ull,0x6625202c37343164ull,0x2f2f093b32383164ull,
0x3270252140090a20ull,0x2409206172622039ull,0x3338365f315f744cull,0x20202020203b3435ull,
0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3430ull,0x64656c6562616c20ull,0x355f315f744c2420ull,
0x6f6d090a34333836ull,0x2509203436662e76ull,0x25202c3737316466ull,0x20203b3734316466ull,
0x202f2f0920202020ull,0x6e752e617262090aull,0x315f744c24092069ull,0x20203b363835335full,
0x2020202020202020ull,0x744c240a202f2f09ull,0x34353338365f315full,0x6f6c3c2f2f200a3aull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x34333836355f315full,0x36662e766f6d090aull,
0x3731646625092034ull,0x6666666430202c37ull,0x3030303030303038ull,0x2f093b3030303030ull,
0x4c240a6e616e202full,0x363835335f315f74ull,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c34303320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333836355f315full,0x3109636f6c2e090aull,0x0a30093337310936ull,
0x3436662e766f6d09ull,0x2c37326466250920ull,0x3b37373164662520ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x3a34313138355f31ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3430332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a34333836355f31ull,0x363109636f6c2e09ull,0x090a300935373109ull,
0x203436662e766f6dull,0x2c33383164662509ull,0x3935646633643020ull,0x3034653363323339ull,
0x202f2f093b643633ull,0x3537343733332e30ull,0x36662e766f6d090aull,0x3831646625092034ull,
0x6566336430202c34ull,0x3866633663633366ull,0x2f093b3133316362ull,0x313637392e30202full,
0x2e766f6d090a3936ull,0x6466250920343666ull,0x336430202c353831ull,0x3237303539346366ull,
0x3b36383630393636ull,0x36312e30202f2f09ull,0x6f6d090a38393730ull,0x2509203436662e76ull,
0x30202c3638316466ull,0x6165346339663364ull,0x3332343465333764ull,0x2e30202f2f093b37ull,
0x0a39333436373230ull,0x3436662e766f6d09ull,0x3738316466250920ull,0x663666336430202cull,
0x6533356533343637ull,0x2f2f093b35383736ull,0x34383330302e3020ull,0x766f6d090a373530ull,
0x662509203436662eull,0x6430202c38383164ull,0x6532366539336633ull,0x3634383839613061ull,
0x302e30202f2f093bull,0x0a39313539333030ull,0x3436662e766f6d09ull,0x3938316466250920ull,
0x303066336430202cull,0x3566353032626564ull,0x2f2f093b38303238ull,0x38363731322e3320ull,
0x6f6d090a35302d65ull,0x2509203436662e76ull,0x30202c3039316466ull,0x6431363339653364ull,
0x3562376239303735ull,0x2e32202f2f093b36ull,0x302d653731383838ull,0x662e766f6d090a37ull,
0x3164662509203436ull,0x65336430202c3139ull,0x6130356333396139ull,0x093b646135643230ull,
0x3036392e33202f2full,0x090a37302d653233ull,0x662e6e722e64616dull,0x3164662509203436ull,
0x31646625202c3239ull,0x32646625202c3139ull,0x3931646625202c37ull,0x090a202f2f093b30ull,
0x662e6e722e64616dull,0x3164662509203436ull,0x32646625202c3339ull,0x3931646625202c37ull,
0x3831646625202c32ull,0x090a202f2f093b39ull,0x662e6e722e64616dull,0x3164662509203436ull,
0x32646625202c3439ull,0x3931646625202c37ull,0x3831646625202c33ull,0x090a202f2f093b38ull,
0x662e6e722e64616dull,0x3164662509203436ull,0x32646625202c3539ull,0x3931646625202c37ull,
0x3831646625202c34ull,0x090a202f2f093b37ull,0x662e6e722e64616dull,0x3164662509203436ull,
0x32646625202c3639ull,0x3931646625202c37ull,0x3831646625202c35ull,0x090a202f2f093b36ull,
0x662e6e722e64616dull,0x3164662509203436ull,0x32646625202c3739ull,0x3931646625202c37ull,
0x3831646625202c36ull,0x090a202f2f093b35ull,0x662e6e722e64616dull,0x3164662509203436ull,
0x32646625202c3839ull,0x3931646625202c37ull,0x3831646625202c37ull,0x090a202f2f093b34ull,
0x662e6e722e64616dull,0x3164662509203436ull,0x32646625202c3939ull,0x3931646625202c37ull,
0x3831646625202c38ull,0x090a202f2f093b33ull,0x203436662e67656eull,0x2c30303264662509ull,
0x3b39393164662520ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x6466250920343666ull,
0x306430202c313032ull,0x3030303030303030ull,0x3b30303030303030ull,0x73090a30202f2f09ull,
0x662e746c2e707465ull,0x3033702509203436ull,0x202c36646625202cull,0x093b313032646625ull,
0x6c6573090a202f2full,0x2509203436662e70ull,0x6625202c37326466ull,0x6625202c30303264ull,
0x7025202c39393164ull,0x0a202f2f093b3033ull,0x37355f315f744c24ull,0x2f2f200a3a323036ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x303320656e696c20ull,
0x2064616568202c34ull,0x2064656c6562616cull,0x36355f315f744c24ull,0x766f6d090a343338ull,
0x662509203436662eull,0x32646625202c3464ull,0x2020202020203b37ull,0x0a202f2f09202020ull,
0x38325f315f744c24ull,0x3c2f2f200a3a3831ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x34303320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3836355f315f744cull,0x636f6c2e090a3433ull,0x0935303309363109ull,0x722e747663090a30ull,
0x36662e3233662e6eull,0x202c326625092034ull,0x2020203b34646625ull,0x73090a202f2f0920ull,
0x6c61626f6c672e74ull,0x255b09203233662eull,0x202c5d302b396472ull,0x2f2f09203b326625ull,
0x313530313a646920ull,0x33752e646461090aull,0x202c377225092032ull,0x377225202c397225ull,
0x202020202020203bull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x647225202c396472ull,
0x3b36647225202c39ull,0x202f2f0920202020ull,0x36752e646461090aull,0x2c37647225092034ull,
0x25202c3764722520ull,0x202020203b366472ull,0x6573090a202f2f09ull,0x33752e746c2e7074ull,
0x2c31337025092032ull,0x7225202c37722520ull,0x202f2f0920203b31ull,0x203133702540090aull,
0x744c240920617262ull,0x34333836355f315full,0x202020202020203bull,0x7262090a202f2f09ull,
0x240920696e752e61ull,0x3139365f315f744cull,0x20202020203b3232ull,0x202f2f0920202020ull,
0x355f315f744c240aull,0x2e090a3a36363036ull,0x3309363109636f6cull,0x756d090a30093131ull,
0x752e6f6c2e34326cull,0x3231722509203233ull,0x202c347225202c35ull,0x202f2f093b337225ull,
0x33752e646461090aull,0x3632317225092032ull,0x2c3532317225202cull,0x2020203b32722520ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x7225202c37323172ull,0x202020203b363231ull,
0x202f2f0920202020ull,0x672e70746573090aull,0x2509203233752e65ull,0x317225202c323370ull,
0x3b317225202c3632ull,0x2540090a202f2f09ull,0x2061726220323370ull,0x365f315f744c2409ull,
0x2020203b32323139ull,0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233752e34ull,
0x7225202c30316472ull,0x202020203b363231ull,0x7663090a202f2f09ull,0x31752e3233752e74ull,
0x3832317225092036ull,0x696174636e25202cull,0x202f2f093b782e64ull,0x2e34326c756d090aull,
0x09203233752e6f6cull,0x25202c3932317225ull,0x32317225202c3472ull,0x090a202f2f093b38ull,
0x752e6f6c2e6c756dull,0x3164722509203436ull,0x3031647225202c31ull,0x2f0920203b34202cull,
0x2e747663090a202full,0x203233752e343673ull,0x202c323164722509ull,0x20203b3932317225ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x202c303331722509ull,0x203b31202c317225ull,
0x2f09202020202020ull,0x2e747663090a202full,0x752e3436662e6e72ull,0x3264662509203233ull,
0x33317225202c3230ull,0x090a202f2f093b30ull,0x662e6e722e706372ull,0x3264662509203436ull,
0x32646625202c3330ull,0x2f092020203b3230ull,0x702e646c090a202full,0x3436752e6d617261ull,
0x2c33316472250920ull,0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x65737265766e6936ull,
0x656e72654b444e43ull,0x645f6a5f5366506cull,0x5d74757074754f5full,0x3a6469202f2f093bull,
0x635f5f2039343031ull,0x5f6d726170616475ull,0x65766e6936315a5full,0x654b444e43657372ull,
0x5f5366506c656e72ull,0x7074754f5f645f6aull,0x090a3078302b7475ull,0x203436752e646461ull,
0x202c343164722509ull,0x25202c3331647225ull,0x2f09203b31316472ull,0x2e6c756d090a202full,
0x09203436752e6f6cull,0x25202c3531647225ull,0x3b34202c32316472ull,0x240a202f2f092020ull,
0x3639365f315f744cull,0x3c2f2f200a3a3433ull,0x6f4c203e706f6f6cull,0x2079646f6220706full,
0x33313320656e696cull,0x3109636f6c2e090aull,0x0a30093331330936ull,0x3233752e64646109ull,
0x2c31333172250920ull,0x202c373231722520ull,0x0920202020203b31ull,0x747663090a202f2full,
0x2e3436662e6e722eull,0x6466250920323375ull,0x317225202c343032ull,0x0a202f2f093b3133ull,
0x3436662e6c756d09ull,0x3530326466250920ull,0x343032646625202cull,0x333032646625202cull,
0x6d090a202f2f093bull,0x09203436662e766full,0x202c363032646625ull,0x3030306666336430ull,
0x3030303030303030ull,0x31202f2f093b3030ull,0x65672e746573090aull,0x3436662e3233752eull,
0x2c32333172250920ull,0x2c35303264662520ull,0x3b36303264662520ull,0x656e090a202f2f09ull,
0x2509203233732e67ull,0x7225202c33333172ull,0x202020203b323331ull,0x202f2f0920202020ull,
0x36662e766f6d090aull,0x3032646625092034ull,0x3030306430202c37ull,0x3030303030303030ull,
0x2f093b3030303030ull,0x746573090a30202full,0x2e3233752e656c2eull,0x3172250920343666ull,
0x32646625202c3433ull,0x32646625202c3530ull,0x0a202f2f093b3730ull,0x3233732e67656e09ull,
0x2c35333172250920ull,0x203b343331722520ull,0x0920202020202020ull,0x2e726f090a202f2full,
0x3172250920323362ull,0x33317225202c3633ull,0x3533317225202c33ull,0x0a202f2f0920203bull,
0x3233752e766f6d09ull,0x2c37333172250920ull,0x20202020203b3020ull,0x0920202020202020ull,
0x746573090a202f2full,0x3233732e71652e70ull,0x202c333370250920ull,0x25202c3633317225ull,
0x2f2f093b37333172ull,0x3333702540090a20ull,0x4c24092061726220ull,0x393839365f315f74ull,
0x2020202020203b30ull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3331ull,0x64656c6562616c20ull,
0x365f315f744c2420ull,0x6f6d090a34333639ull,0x2509203436662e76ull,0x30202c3830326466ull,
0x3030303866666664ull,0x3030303030303030ull,0x616e202f2f093b30ull,0x752e617262090a6eull,
0x5f744c240920696eull,0x20203b3835325f31ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x393839365f315f74ull,0x6c3c2f2f200a3a30ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x333639365f315f74ull,0x09636f6c2e090a34ull,0x3009363631093631ull,0x36662e766f6d090aull,
0x3032646625092034ull,0x6566626430202c39ull,0x3030303030303030ull,0x2f093b3030303030ull,
0x090a352e302d202full,0x203436662e646461ull,0x2c30313264662509ull,0x2c35303264662520ull,
0x3b39303264662520ull,0x6261090a202f2f09ull,0x2509203436662e73ull,0x25202c3131326466ull,
0x20203b3031326466ull,0x202f2f0920202020ull,0x36662e766f6d090aull,0x3132646625092034ull,
0x6466336430202c32ull,0x3165613734316561ull,0x2f093b3165613734ull,0x090a32342e30202full,
0x2e746c2e70746573ull,0x3370250920343666ull,0x3132646625202c34ull,0x3132646625202c31ull,
0x090a202f2f093b32ull,0x6220343370252140ull,0x5f744c2409206172ull,0x3b38353630375f31ull,
0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x333639365f315f74ull,0x09636f6c2e090a34ull,0x3009383631093631ull,0x36662e6c756d090aull,
0x3132646625092034ull,0x3132646625202c33ull,0x3132646625202c30ull,0x090a202f2f093b30ull,
0x203436662e766f6dull,0x2c34313264662509ull,0x3034303034643020ull,0x3638326231333964ull,
0x202f2f093b643032ull,0x0a33363630352e32ull,0x3436662e766f6d09ull,0x3531326466250920ull,
0x323330636430202cull,0x3435656130376439ull,0x2f2f093b65643361ull,0x3531362e38312d20ull,
0x36662e766f6d090aull,0x3132646625092034ull,0x3430346430202c36ull,0x3734633231326234ull,
0x2f093b6366366333ull,0x3139332e3134202full,0x662e766f6d090a32ull,0x3264662509203436ull,
0x30636430202c3731ull,0x3735396530373933ull,0x093b383737373733ull,0x342e35322d202f2full,
0x64616d090a313134ull,0x203436662e6e722eull,0x2c38313264662509ull,0x2c37313264662520ull,
0x2c33313264662520ull,0x3b36313264662520ull,0x616d090a202f2f09ull,0x3436662e6e722e64ull,
0x3931326466250920ull,0x333132646625202cull,0x383132646625202cull,0x353132646625202cull,
0x6d090a202f2f093bull,0x36662e6e722e6461ull,0x3232646625092034ull,0x3132646625202c30ull,
0x3132646625202c33ull,0x3132646625202c39ull,0x090a202f2f093b34ull,0x203436662e6c756dull,
0x2c31323264662509ull,0x2c30313264662520ull,0x3b30323264662520ull,0x6f6d090a202f2f09ull,
0x2509203436662e76ull,0x30202c3232326466ull,0x3030303066663364ull,0x3030303030303030ull,
0x0a31202f2f093b30ull,0x3436662e766f6d09ull,0x3332326466250920ull,0x303230636430202cull,
0x3535363030373266ull,0x2f2f093b64323730ull,0x353337342e382d20ull,0x662e766f6d090a31ull,
0x3264662509203436ull,0x30346430202c3432ull,0x3139373535313733ull,0x093b633230353138ull,
0x38302e3332202f2full,0x2e766f6d090a3433ull,0x6466250920343666ull,0x636430202c353232ull,
0x3066656630353330ull,0x3b64373565313037ull,0x2e31322d202f2f09ull,0x6f6d090a32323630ull,
0x2509203436662e76ull,0x30202c3632326466ull,0x6662303930303464ull,0x3461383535303230ull,
0x2e33202f2f093b37ull,0x6d090a3338303331ull,0x36662e6e722e6461ull,0x3232646625092034ull,
0x3232646625202c37ull,0x3132646625202c36ull,0x3232646625202c33ull,0x090a202f2f093b35ull,
0x662e6e722e64616dull,0x3264662509203436ull,0x32646625202c3832ull,0x32646625202c3331ull,
0x32646625202c3732ull,0x0a202f2f093b3432ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c393232ull,0x646625202c333132ull,0x646625202c383232ull,0x202f2f093b333232ull,
0x6e722e64616d090aull,0x662509203436662eull,0x6625202c30333264ull,0x6625202c33313264ull,
0x6625202c39323264ull,0x2f2f093b32323264ull,0x722e766964090a20ull,0x2509203436662e6eull,
0x6625202c37326466ull,0x6625202c31323264ull,0x2f2f093b30333264ull,0x752e617262090a20ull,
0x5f744c240920696eull,0x3b32303430375f31ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x353630375f315f74ull,0x6c3c2f2f200a3a38ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x333639365f315f74ull,0x662e766f6d090a34ull,0x3264662509203436ull,0x30306430202c3133ull,
0x3030303030303030ull,0x093b303030303030ull,0x6573090a30202f2full,0x36662e74672e7074ull,
0x2c35337025092034ull,0x2c30313264662520ull,0x3b31333264662520ull,0x2140090a202f2f09ull,
0x6172622035337025ull,0x5f315f744c240920ull,0x20203b3037313137ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3331332065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333639365f31ull,
0x363209636f6c2e09ull,0x090a300935343509ull,0x203436662e766f6dull,0x2c32333264662509ull,
0x3030666633643020ull,0x3030303030303030ull,0x202f2f093b303030ull,0x662e627573090a31ull,
0x3264662509203436ull,0x32646625202c3333ull,0x32646625202c3233ull,0x0a202f2f093b3530ull,
0x3436622e766f6d09ull,0x38333172257b0920ull,0x2c7d39333172252cull,0x3b33333264662520ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x317225202c383172ull,0x20202020203b3933ull,
0x202f2f0920202020ull,0x3209636f6c2e090aull,0x0a30093634350936ull,0x3436622e766f6d09ull,
0x2c393172257b0920ull,0x202c7d3034317225ull,0x093b333332646625ull,0x6f6c2e090a202f2full,
0x3834350936320963ull,0x2e766f6d090a3009ull,0x6466250920343666ull,0x306430202c343332ull,
0x3030303030303030ull,0x3b30303030303030ull,0x73090a30202f2f09ull,0x33752e74672e7465ull,
0x2509203436662e32ull,0x6625202c31343172ull,0x6625202c33333264ull,0x2f2f093b34333264ull,
0x732e67656e090a20ull,0x3431722509203233ull,0x3134317225202c32ull,0x202020202020203bull,
0x6d090a202f2f0920ull,0x09203436662e766full,0x202c353332646625ull,0x3030306666376430ull,
0x3030303030303030ull,0x69202f2f093b3030ull,0x2e746573090a666eull,0x662e3233752e746cull,
0x3431722509203436ull,0x3332646625202c33ull,0x3332646625202c33ull,0x090a202f2f093b35ull,
0x203233732e67656eull,0x202c343431722509ull,0x20203b3334317225ull,0x2f09202020202020ull,
0x2e646e61090a202full,0x3172250920323362ull,0x34317225202c3534ull,0x3434317225202c32ull,
0x090a202f2f09203bull,0x203233752e766f6dull,0x202c363431722509ull,0x2020202020203b30ull,
0x2f09202020202020ull,0x70746573090a202full,0x203233732e71652eull,0x25202c3633702509ull,
0x7225202c35343172ull,0x202f2f093b363431ull,0x203633702540090aull,0x744c240920617262ull,
0x32363337345f315full,0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,
0x6c20666f20747261ull,0x79646f6220706f6full,0x313320656e696c20ull,0x2064616568202c33ull,
0x2064656c6562616cull,0x39365f315f744c24ull,0x766f6d090a343336ull,0x722509203233752eull,
0x343031202c373431ull,0x2020203b35373538ull,0x0a202f2f09202020ull,0x74672e7074657309ull,
0x702509203233752eull,0x33317225202c3733ull,0x3734317225202c39ull,0x40090a202f2f093bull,
0x6172622037337025ull,0x5f315f744c240920ull,0x20203b3238363137ull,0x2f2f092020202020ull,
0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c33313320656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x34333639365f315full,
0x3209636f6c2e090aull,0x0a30093435350936ull,0x3436662e766f6d09ull,0x3633326466250920ull,
0x303533346430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x34343130382e3120ull,
0x756d090a36312b65ull,0x2509203436662e6cull,0x25202c3733326466ull,0x25202c3333326466ull,
0x2f093b3633326466ull,0x2e766f6d090a202full,0x72257b0920343662ull,0x383172252c383431ull,
0x3332646625202c7dull,0x090a202f2f093b37ull,0x09363209636f6c2eull,0x6d090a3009353535ull,
0x09203436622e766full,0x72252c393172257bull,0x6625202c7d393431ull,0x2f2f093b37333264ull,
0x732e766f6d090a20ull,0x3033722509203233ull,0x3b373730312d202cull,0x2020202020202020ull,
0x62090a202f2f0920ull,0x0920696e752e6172ull,0x31375f315f744c24ull,0x202020203b363234ull,
0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3238363137ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,
0x656c6562616c2064ull,0x5f315f744c242064ull,0x6d090a3433363936ull,0x09203233732e766full,
0x312d202c30337225ull,0x202020203b333230ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,
0x200a3a3632343137ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x2e090a3433363936ull,0x3509363209636f6cull,0x6873090a30093036ull,0x2509203233732e72ull,
0x7225202c30353172ull,0x203b3032202c3831ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x3135317225092032ull,0x2c3035317225202cull,0x20203b3734303220ull,0x6461090a202f2f09ull,
0x2509203233732e64ull,0x337225202c303372ull,0x3135317225202c30ull,0x202f2f092020203bull,
0x3209636f6c2e090aull,0x0a30093236350936ull,0x3233622e646e6109ull,0x202c333372250920ull,
0x322d202c38317225ull,0x3730353334363431ull,0x090a202f2f093b33ull,0x09203233622e726full,
0x7225202c34337225ull,0x32373031202c3333ull,0x093b383432333936ull,0x766f6d090a202f2full,
0x662509203436622eull,0x72257b202c353364ull,0x7d343372252c3931ull,0x0a202f2f0920203bull,
0x3233752e766f6d09ull,0x2c32353172250920ull,0x3732313337303120ull,0x092020203b323835ull,
0x746573090a202f2full,0x3233752e656c2e70ull,0x202c383370250920ull,0x7225202c34337225ull,
0x202f2f093b323531ull,0x203833702540090aull,0x744c240920617262ull,0x38333931375f315full,
0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,
0x39365f315f744c24ull,0x6f6c2e090a343336ull,0x3436350936320963ull,0x2e766f6d090a3009ull,
0x72257b0920343662ull,0x353172252c333531ull,0x33646625202c7d34ull,0x090a202f2f093b35ull,
0x203233732e627573ull,0x202c353531722509ull,0x31202c3435317225ull,0x093b363735383430ull,
0x766f6d090a202f2full,0x257b09203436622eull,0x3172252c36353172ull,0x646625202c7d3735ull,
0x0a202f2f093b3533ull,0x3436622e766f6d09ull,0x2c35336466250920ull,0x2c36353172257b20ull,
0x093b7d3535317225ull,0x6f6c2e090a202f2full,0x3536350936320963ull,0x2e646461090a3009ull,
0x3372250920323373ull,0x2c30337225202c30ull,0x20202020203b3120ull,0x240a202f2f092020ull,
0x3931375f315f744cull,0x3c2f2f200a3a3833ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x33313320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3639365f315f744cull,0x636f6c2e090a3433ull,0x0939373509363209ull,0x662e766f6d090a30ull,
0x3264662509203436ull,0x66626430202c3833ull,0x3030303030303066ull,0x093b303030303030ull,
0x61090a312d202f2full,0x09203436662e6464ull,0x25202c3733646625ull,0x6625202c35336466ull,
0x2f2f093b38333264ull,0x662e766f6d090a20ull,0x3264662509203436ull,0x66336430202c3933ull,
0x3030303030303066ull,0x093b303030303030ull,0x6461090a31202f2full,0x2509203436662e64ull,
0x25202c3034326466ull,0x6625202c35336466ull,0x2f2f093b39333264ull,0x722e706372090a20ull,
0x2509203436662e6eull,0x6625202c30346466ull,0x2020203b30343264ull,0x6d090a202f2f0920ull,
0x09203436662e6c75ull,0x25202c3134646625ull,0x6625202c37336466ull,0x2f2f09203b303464ull,
0x662e646461090a20ull,0x3464662509203436ull,0x3134646625202c32ull,0x3b3134646625202cull,
0x6d090a202f2f0920ull,0x09203436662e6c75ull,0x25202c3334646625ull,0x6625202c32346466ull,
0x2f2f09203b323464ull,0x662e766f6d090a20ull,0x3264662509203436ull,0x65336430202c3134ull,
0x6133623038333162ull,0x093b653166303865ull,0x3632302e31202f2full,0x090a36302d653333ull,
0x203436662e766f6dull,0x2c32343264662509ull,0x6530646533643020ull,0x3861376238353265ull,
0x202f2f093b343062ull,0x6539343633302e34ull,0x64616d090a36302dull,0x203436662e6e722eull,
0x2c33343264662509ull,0x2c31343264662520ull,0x202c333464662520ull,0x093b323432646625ull,
0x766f6d090a202f2full,0x662509203436662eull,0x6430202c34343264ull,0x3636326233666533ull,
0x6636373632306639ull,0x382e31202f2f093bull,0x35302d6534343837ull,0x6e722e64616d090aull,
0x662509203436662eull,0x6625202c35343264ull,0x6625202c33343264ull,0x646625202c333464ull,
0x202f2f093b343432ull,0x36662e766f6d090aull,0x3432646625092034ull,0x3166336430202c36ull,
0x6139616263353437ull,0x2f093b3635393062ull,0x383737382e38202full,0x6d090a35302d6531ull,
0x36662e6e722e6461ull,0x3432646625092034ull,0x3432646625202c37ull,0x3334646625202c35ull,
0x363432646625202cull,0x6d090a202f2f093bull,0x09203436662e766full,0x202c383432646625ull,
0x3137633366336430ull,0x3135623164323763ull,0x30202f2f093b3435ull,0x303433343030302eull,
0x2e64616d090a3832ull,0x09203436662e6e72ull,0x25202c3235646625ull,0x25202c3734326466ull,
0x6625202c33346466ull,0x2f2f093b38343264ull,0x09636f6c2e090a20ull,0x3009303835093632ull,
0x36662e766f6d090aull,0x3432646625092034ull,0x3666336430202c39ull,0x3332393432393432ull,
0x2f093b6432376562ull,0x323230302e30202full,0x616d090a34313233ull,0x3436662e6e722e64ull,
0x2c32356466250920ull,0x202c323564662520ull,0x25202c3334646625ull,0x2f093b3934326466ull,
0x636f6c2e090a202full,0x0931383509363209ull,0x662e766f6d090a30ull,0x3264662509203436ull,
0x66336430202c3035ull,0x3939393939393938ull,0x093b346333613939ull,0x3231302e30202f2full,
0x722e64616d090a35ull,0x2509203436662e6eull,0x6625202c32356466ull,0x646625202c323564ull,
0x32646625202c3334ull,0x0a202f2f093b3035ull,0x363209636f6c2e09ull,0x090a300932383509ull,
0x203436662e766f6dull,0x2c31353264662509ull,0x3535626633643020ull,0x3535353535353535ull,
0x202f2f093b343535ull,0x3333333338302e30ull,0x722e64616d090a33ull,0x2509203436662e6eull,
0x6625202c32356466ull,0x646625202c323564ull,0x32646625202c3334ull,0x0a202f2f093b3135ull,
0x363209636f6c2e09ull,0x090a300934383509ull,0x203436662e627573ull,0x202c363564662509ull,
0x25202c3733646625ull,0x2f09203b32346466ull,0x2e67656e090a202full,0x6466250920343666ull,
0x646625202c323532ull,0x20202020203b3234ull,0x090a202f2f092020ull,0x203436622e766f6dull,
0x2c38353172257b09ull,0x202c7d3935317225ull,0x2f093b3635646625ull,0x2e646461090a202full,
0x3172250920323373ull,0x35317225202c3036ull,0x3538343031202c39ull,0x0a202f2f093b3637ull,
0x3436622e766f6d09ull,0x31363172257b0920ull,0x2c7d32363172252cull,0x093b363564662520ull,
0x766f6d090a202f2full,0x662509203436622eull,0x257b202c33353264ull,0x3172252c31363172ull,
0x202f2f093b7d3036ull,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c393564ull,
0x646625202c323532ull,0x32646625202c3733ull,0x0a202f2f093b3335ull,0x363209636f6c2e09ull,
0x090a300938383509ull,0x203436662e6c756dull,0x2c34353264662509ull,0x202c333464662520ull,
0x2f093b3235646625ull,0x2e6c756d090a202full,0x6466250920343666ull,0x34646625202c3235ull,
0x3532646625202c32ull,0x090a202f2f093b34ull,0x09363209636f6c2eull,0x63090a3009383935ull,
0x36662e6e722e7476ull,0x2509203233732e34ull,0x7225202c31366466ull,0x2f2f0920203b3033ull,
0x662e766f6d090a20ull,0x3264662509203436ull,0x66336430202c3535ull,0x6566323465323665ull,
0x093b666539336166ull,0x3339362e30202f2full,0x64616d090a373431ull,0x203436662e6e722eull,
0x202c333664662509ull,0x25202c3136646625ull,0x25202c3535326466ull,0x2f2f093b32346466ull,
0x662e766f6d090a20ull,0x3264662509203436ull,0x63336430202c3635ull,0x6233653963626137ull,
0x093b663330383933ull,0x3931332e32202f2full,0x090a37312d653530ull,0x662e6e722e64616dull,
0x3264662509203436ull,0x35646625202c3735ull,0x3034646625202c39ull,0x3b3235646625202cull,
0x656e090a202f2f09ull,0x2509203233732e67ull,0x7225202c33363172ull,0x20202020203b3033ull,
0x202f2f0920202020ull,0x6e722e747663090aull,0x3233732e3436662eull,0x3835326466250920ull,
0x3b3336317225202cull,0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x30202c3935326466ull,
0x3465323665663364ull,0x6539336166656632ull,0x2e30202f2f093b66ull,0x090a373431333936ull,
0x662e6e722e64616dull,0x3264662509203436ull,0x32646625202c3036ull,0x32646625202c3835ull,
0x36646625202c3935ull,0x090a202f2f093b33ull,0x203436662e627573ull,0x2c31363264662509ull,
0x2c30363264662520ull,0x093b323464662520ull,0x627573090a202f2full,0x662509203436662eull,
0x6625202c32363264ull,0x6625202c37353264ull,0x2f2f093b31363264ull,0x722e64616d090a20ull,
0x2509203436662e6eull,0x6625202c31376466ull,0x646625202c313664ull,0x646625202c363532ull,
0x202f2f093b323632ull,0x36662e646461090aull,0x3237646625092034ull,0x2c3336646625202cull,
0x203b313764662520ull,0x7262090a202f2f09ull,0x240920696e752e61ull,0x3335315f315f744cull,
0x2020202020203b38ull,0x202f2f0920202020ull,0x345f315f744c240aull,0x2f200a3a32363337ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,
0x64616568202c3331ull,0x64656c6562616c20ull,0x365f315f744c2420ull,0x6c2e090a34333639ull,
0x303609363209636full,0x736261090a300931ull,0x662509203436662eull,0x6625202c33363264ull,
0x2020203b33333264ull,0x0a202f2f09202020ull,0x3436662e766f6d09ull,0x3436326466250920ull,
0x306666376430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x6573090a666e6920ull,
0x36662e656c2e7074ull,0x2c39337025092034ull,0x2c33363264662520ull,0x3b34363264662520ull,
0x2540090a202f2f09ull,0x2061726220393370ull,0x375f315f744c2409ull,0x2020203b30353432ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3331332065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x0a34333639365f31ull,0x3436662e64646109ull,0x2c32376466250920ull,0x2c33333264662520ull,
0x3b33333264662520ull,0x7262090a202f2f09ull,0x240920696e752e61ull,0x3335315f315f744cull,
0x2020202020203b38ull,0x202f2f0920202020ull,0x375f315f744c240aull,0x2f200a3a30353432ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,
0x64616568202c3331ull,0x64656c6562616c20ull,0x365f315f744c2420ull,0x6f6d090a34333639ull,
0x2509203436662e76ull,0x30202c3536326466ull,0x3030303030303064ull,0x3030303030303030ull,
0x0a30202f2f093b30ull,0x71652e7074657309ull,0x702509203436662eull,0x32646625202c3034ull,
0x32646625202c3333ull,0x0a202f2f093b3536ull,0x2030347025214009ull,0x744c240920617262ull,
0x32363932375f315full,0x092020202020203bull,0x3c2f2f200a202f2full,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x33313320656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3639365f315f744cull,0x2e766f6d090a3433ull,0x6466250920343666ull,
0x66666430202c3237ull,0x3030303030303066ull,0x093b303030303030ull,0x0a666e692d202f2full,
0x696e752e61726209ull,0x5f315f744c240920ull,0x2020203b38333531ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x3a32363932375f31ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3331332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a34333639365f31ull,0x3436662e766f6d09ull,0x3636326466250920ull,
0x306666376430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x6573090a666e6920ull,
0x36662e71652e7074ull,0x2c31347025092034ull,0x2c33333264662520ull,0x3b36363264662520ull,
0x2140090a202f2f09ull,0x6172622031347025ull,0x5f315f744c240920ull,0x20203b3437343337ull,
0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,
0x6e696c2079646f62ull,0x68202c3331332065ull,0x6562616c20646165ull,0x5f744c242064656cull,
0x0a34333639365f31ull,0x3436662e766f6d09ull,0x2c32376466250920ull,0x3b33333264662520ull,
0x0920202020202020ull,0x617262090a202f2full,0x4c240920696e752eull,0x383335315f315f74ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x33375f315f744c24ull,0x2f2f200a3a343734ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313320656e696c20ull,
0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,0x766f6d090a343336ull,
0x662509203436662eull,0x666430202c323764ull,0x3030303030386666ull,0x3b30303030303030ull,
0x0a6e616e202f2f09ull,0x35315f315f744c24ull,0x3c2f2f200a3a3833ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x33313320656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3639365f315f744cull,0x636f6c2e090a3433ull,0x0935343509363209ull,
0x662e67656e090a30ull,0x3264662509203436ull,0x37646625202c3736ull,0x2020202020203b32ull,
0x6d090a202f2f0920ull,0x09203436622e766full,0x252c34363172257bull,0x25202c7d35363172ull,
0x2f093b3736326466ull,0x2e766f6d090a202full,0x3172250920323373ull,0x3536317225202c38ull,
0x202020202020203bull,0x090a202f2f092020ull,0x09363209636f6c2eull,0x6d090a3009363435ull,
0x09203436622e766full,0x72252c393172257bull,0x6625202c7d363631ull,0x2f2f093b37363264ull,
0x09636f6c2e090a20ull,0x3009383435093632ull,0x36662e766f6d090aull,0x3632646625092034ull,
0x3030306430202c38ull,0x3030303030303030ull,0x2f093b3030303030ull,0x746573090a30202full,
0x2e3233752e74672eull,0x3172250920343666ull,0x32646625202c3736ull,0x32646625202c3736ull,
0x0a202f2f093b3836ull,0x3233732e67656e09ull,0x2c38363172250920ull,0x203b373631722520ull,
0x0920202020202020ull,0x766f6d090a202f2full,0x662509203436662eull,0x6430202c39363264ull,
0x3030303030666637ull,0x3030303030303030ull,0x666e69202f2f093bull,0x746c2e746573090aull,
0x3436662e3233752eull,0x2c39363172250920ull,0x2c37363264662520ull,0x3b39363264662520ull,
0x656e090a202f2f09ull,0x2509203233732e67ull,0x7225202c30373172ull,0x202020203b393631ull,
0x202f2f0920202020ull,0x33622e646e61090aull,0x3137317225092032ull,0x2c3836317225202cull,
0x203b303731722520ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x3b30202c32373172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x652e70746573090aull,0x2509203233732e71ull,
0x317225202c323470ull,0x37317225202c3137ull,0x090a202f2f093b32ull,0x7262203234702540ull,
0x315f744c24092061ull,0x203b38393838345full,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,0x752e766f6d090a34ull,
0x3731722509203233ull,0x3538343031202c33ull,0x20202020203b3537ull,0x73090a202f2f0920ull,
0x752e74672e707465ull,0x3334702509203233ull,0x2c3536317225202cull,0x093b333731722520ull,
0x702540090a202f2full,0x0920617262203334ull,0x34375f315f744c24ull,0x202020203b323432ull,
0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,
0x656e696c2079646full,0x6568202c33313320ull,0x6c6562616c206461ull,0x315f744c24206465ull,
0x090a34333639365full,0x09363209636f6c2eull,0x6d090a3009343535ull,0x09203436662e766full,
0x202c303732646625ull,0x3030303533346430ull,0x3030303030303030ull,0x31202f2f093b3030ull,
0x2b6534343130382eull,0x2e6c756d090a3631ull,0x6466250920343666ull,0x646625202c313732ull,
0x646625202c373632ull,0x202f2f093b303732ull,0x36622e766f6d090aull,0x373172257b092034ull,
0x2c7d383172252c34ull,0x3b31373264662520ull,0x6c2e090a202f2f09ull,0x353509363209636full,
0x766f6d090a300935ull,0x257b09203436622eull,0x373172252c393172ull,0x32646625202c7d35ull,
0x0a202f2f093b3137ull,0x3233732e766f6d09ull,0x202c303372250920ull,0x20203b373730312dull,
0x0920202020202020ull,0x617262090a202f2full,0x4c240920696e752eull,0x383933375f315f74ull,
0x2020202020203b36ull,0x0a202f2f09202020ull,0x34375f315f744c24ull,0x2f2f200a3a323432ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313320656e696c20ull,
0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,0x766f6d090a343336ull,
0x722509203233732eull,0x3230312d202c3033ull,0x2020202020203b33ull,0x0a202f2f09202020ull,
0x33375f315f744c24ull,0x2f2f200a3a363839ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,
0x39365f315f744c24ull,0x6f6c2e090a343336ull,0x3036350936320963ull,0x2e726873090a3009ull,
0x3172250920323373ull,0x38317225202c3637ull,0x2020203b3032202cull,0x090a202f2f092020ull,
0x203233622e646e61ull,0x202c373731722509ull,0x32202c3637317225ull,0x2f0920203b373430ull,
0x2e646461090a202full,0x3372250920323373ull,0x2c30337225202c30ull,0x203b373731722520ull,
0x090a202f2f092020ull,0x09363209636f6c2eull,0x61090a3009323635ull,0x09203233622e646eull,
0x7225202c33337225ull,0x3431322d202c3831ull,0x3b33373035333436ull,0x726f090a202f2f09ull,
0x722509203233622eull,0x33337225202c3433ull,0x393632373031202cull,0x2f2f093b38343233ull,
0x622e766f6d090a20ull,0x3364662509203436ull,0x393172257b202c35ull,0x203b7d343372252cull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x31202c3837317225ull,0x3835373231333730ull,
0x2f2f092020203b32ull,0x2e70746573090a20ull,0x09203233752e656cull,0x7225202c34347025ull,
0x37317225202c3433ull,0x090a202f2f093b38ull,0x7262203434702540ull,0x315f744c24092061ull,
0x203b38393434375full,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x333639365f315f74ull,0x09636f6c2e090a34ull,0x3009343635093632ull,
0x36622e766f6d090aull,0x373172257b092034ull,0x7d30383172252c39ull,0x3b3533646625202cull,
0x7573090a202f2f09ull,0x2509203233732e62ull,0x7225202c31383172ull,0x343031202c303831ull,
0x2f2f093b36373538ull,0x622e766f6d090a20ull,0x3172257b09203436ull,0x33383172252c3238ull,
0x3533646625202c7dull,0x6d090a202f2f093bull,0x09203436622e766full,0x7b202c3533646625ull,
0x72252c3238317225ull,0x2f2f093b7d313831ull,0x09636f6c2e090a20ull,0x3009353635093632ull,
0x33732e646461090aull,0x2c30337225092032ull,0x31202c3033722520ull,0x202020202020203bull,
0x744c240a202f2f09ull,0x38393434375f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c33313320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333639365f315full,0x3209636f6c2e090aull,0x0a30093937350936ull,
0x3436662e766f6d09ull,0x3237326466250920ull,0x306666626430202cull,0x3030303030303030ull,
0x2f2f093b30303030ull,0x646461090a312d20ull,0x662509203436662eull,0x646625202c373364ull,
0x32646625202c3533ull,0x0a202f2f093b3237ull,0x3436662e766f6d09ull,0x3337326466250920ull,
0x306666336430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x2e646461090a3120ull,
0x6466250920343666ull,0x646625202c343732ull,0x32646625202c3533ull,0x0a202f2f093b3337ull,
0x2e6e722e70637209ull,0x6466250920343666ull,0x32646625202c3034ull,0x09202020203b3437ull,
0x6c756d090a202f2full,0x662509203436662eull,0x646625202c313464ull,0x34646625202c3733ull,
0x0a202f2f09203b30ull,0x3436662e64646109ull,0x2c32346466250920ull,0x202c313464662520ull,
0x09203b3134646625ull,0x6c756d090a202f2full,0x662509203436662eull,0x646625202c333464ull,
0x34646625202c3234ull,0x0a202f2f09203b32ull,0x3436662e766f6d09ull,0x3537326466250920ull,
0x316265336430202cull,0x3865613362303833ull,0x2f2f093b65316630ull,0x33333632302e3120ull,
0x6f6d090a36302d65ull,0x2509203436662e76ull,0x30202c3637326466ull,0x3265653064653364ull,
0x3062386137623835ull,0x2e34202f2f093b34ull,0x302d653934363330ull,0x722e64616d090a36ull,
0x2509203436662e6eull,0x25202c3737326466ull,0x25202c3537326466ull,0x6625202c33346466ull,
0x2f2f093b36373264ull,0x662e766f6d090a20ull,0x3264662509203436ull,0x65336430202c3837ull,
0x6639363632623366ull,0x093b663637363230ull,0x3837382e31202f2full,0x090a35302d653434ull,
0x662e6e722e64616dull,0x3264662509203436ull,0x32646625202c3937ull,0x34646625202c3737ull,
0x3732646625202c33ull,0x090a202f2f093b38ull,0x203436662e766f6dull,0x2c30383264662509ull,
0x3437316633643020ull,0x3062613961626335ull,0x202f2f093b363539ull,0x6531383737382e38ull,
0x64616d090a35302dull,0x203436662e6e722eull,0x2c31383264662509ull,0x2c39373264662520ull,
0x202c333464662520ull,0x093b303832646625ull,0x766f6d090a202f2full,0x662509203436662eull,
0x6430202c32383264ull,0x3763313763336633ull,0x3435313562316432ull,0x302e30202f2f093bull,
0x3832303433343030ull,0x6e722e64616d090aull,0x662509203436662eull,0x646625202c323564ull,
0x646625202c313832ull,0x32646625202c3334ull,0x0a202f2f093b3238ull,0x363209636f6c2e09ull,
0x090a300930383509ull,0x203436662e766f6dull,0x2c33383264662509ull,0x3432366633643020ull,
0x6562333239343239ull,0x202f2f093b643237ull,0x3233323230302e30ull,0x2e64616d090a3431ull,
0x09203436662e6e72ull,0x25202c3235646625ull,0x6625202c32356466ull,0x646625202c333464ull,
0x202f2f093b333832ull,0x3209636f6c2e090aull,0x0a30093138350936ull,0x3436662e766f6d09ull,
0x3438326466250920ull,0x393866336430202cull,0x3939393939393939ull,0x2f2f093b34633361ull,
0x0a353231302e3020ull,0x2e6e722e64616d09ull,0x6466250920343666ull,0x35646625202c3235ull,
0x3334646625202c32ull,0x343832646625202cull,0x2e090a202f2f093bull,0x3509363209636f6cull,
0x6f6d090a30093238ull,0x2509203436662e76ull,0x30202c3538326466ull,0x3535353562663364ull,
0x3535353535353535ull,0x2e30202f2f093b34ull,0x0a33333333333830ull,0x2e6e722e64616d09ull,
0x6466250920343666ull,0x35646625202c3235ull,0x3334646625202c32ull,0x353832646625202cull,
0x2e090a202f2f093bull,0x3509363209636f6cull,0x7573090a30093438ull,0x2509203436662e62ull,
0x6625202c36356466ull,0x646625202c373364ull,0x202f2f09203b3234ull,0x36662e67656e090aull,
0x3832646625092034ull,0x3234646625202c36ull,0x202020202020203bull,0x6f6d090a202f2f09ull,
0x7b09203436622e76ull,0x72252c3438317225ull,0x6625202c7d353831ull,0x202f2f093b363564ull,
0x33732e646461090aull,0x3638317225092032ull,0x2c3538317225202cull,0x3637353834303120ull,
0x6d090a202f2f093bull,0x09203436622e766full,0x252c37383172257bull,0x25202c7d38383172ull,
0x2f2f093b36356466ull,0x622e766f6d090a20ull,0x3264662509203436ull,0x3172257b202c3738ull,
0x36383172252c3738ull,0x090a202f2f093b7dull,0x662e6e722e64616dull,0x3564662509203436ull,
0x3832646625202c39ull,0x3733646625202c36ull,0x373832646625202cull,0x2e090a202f2f093bull,
0x3509363209636f6cull,0x756d090a30093838ull,0x2509203436662e6cull,0x25202c3838326466ull,
0x6625202c33346466ull,0x202f2f093b323564ull,0x36662e6c756d090aull,0x3235646625092034ull,
0x2c3234646625202cull,0x3b38383264662520ull,0x6c2e090a202f2f09ull,0x393509363209636full,
0x747663090a300938ull,0x2e3436662e6e722eull,0x6466250920323373ull,0x30337225202c3136ull,
0x0a202f2f0920203bull,0x3436662e766f6d09ull,0x3938326466250920ull,0x366566336430202cull,
0x6166656632346532ull,0x2f2f093b66653933ull,0x34313339362e3020ull,0x722e64616d090a37ull,
0x2509203436662e6eull,0x6625202c33366466ull,0x646625202c313664ull,0x646625202c393832ull,
0x0a202f2f093b3234ull,0x3436662e766f6d09ull,0x3039326466250920ull,0x613763336430202cull,
0x3933623365396362ull,0x2f2f093b66333038ull,0x35303931332e3220ull,0x616d090a37312d65ull,
0x3436662e6e722e64ull,0x3139326466250920ull,0x2c3935646625202cull,0x202c303464662520ull,
0x2f093b3235646625ull,0x2e67656e090a202full,0x3172250920323373ull,0x30337225202c3938ull,
0x202020202020203bull,0x090a202f2f092020ull,0x662e6e722e747663ull,0x09203233732e3436ull,
0x202c323932646625ull,0x2f093b3938317225ull,0x2e766f6d090a202full,0x6466250920343666ull,
0x336430202c333932ull,0x6632346532366566ull,0x3b66653933616665ull,0x39362e30202f2f09ull,
0x616d090a37343133ull,0x3436662e6e722e64ull,0x3439326466250920ull,0x323932646625202cull,
0x333932646625202cull,0x3b3336646625202cull,0x7573090a202f2f09ull,0x2509203436662e62ull,
0x25202c3539326466ull,0x25202c3439326466ull,0x2f2f093b32346466ull,0x662e627573090a20ull,
0x3264662509203436ull,0x32646625202c3639ull,0x32646625202c3139ull,0x0a202f2f093b3539ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x36646625202c3137ull,0x3932646625202c31ull,
0x3932646625202c30ull,0x090a202f2f093b36ull,0x203436662e646461ull,0x2c37303164662509ull,
0x202c333664662520ull,0x2f093b3137646625ull,0x2e617262090a202full,0x744c240920696e75ull,
0x3b303530325f315full,0x2020202020202020ull,0x240a202f2f092020ull,0x3838345f315f744cull,
0x3c2f2f200a3a3839ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x33313320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3639365f315f744cull,
0x636f6c2e090a3433ull,0x0931303609363209ull,0x662e736261090a30ull,0x3264662509203436ull,
0x37646625202c3739ull,0x2020202020203b32ull,0x6d090a202f2f0920ull,0x09203436662e766full,
0x202c383932646625ull,0x3030306666376430ull,0x3030303030303030ull,0x69202f2f093b3030ull,
0x70746573090a666eull,0x203436662e656c2eull,0x25202c3534702509ull,0x25202c3739326466ull,
0x2f093b3839326466ull,0x34702540090a202full,0x2409206172622035ull,0x3035375f315f744cull,
0x20202020203b3031ull,0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x61090a3433363936ull,0x09203436662e6464ull,0x202c393932646625ull,
0x25202c3237646625ull,0x2f2f093b32376466ull,0x662e67656e090a20ull,0x3164662509203436ull,
0x32646625202c3730ull,0x20202020203b3939ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,
0x30325f315f744c24ull,0x20202020203b3035ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,
0x200a3a3031303537ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x6d090a3433363936ull,0x09203436662e766full,0x202c303033646625ull,0x3030303030306430ull,
0x3030303030303030ull,0x30202f2f093b3030ull,0x652e70746573090aull,0x2509203436662e71ull,
0x646625202c363470ull,0x646625202c373632ull,0x202f2f093b303033ull,0x363470252140090aull,
0x4c24092061726220ull,0x323535375f315f74ull,0x2020202020203b32ull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313320656e696c20ull,
0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,0x766f6d090a343336ull,
0x662509203436662eull,0x6430202c37303164ull,0x3030303030666666ull,0x3030303030303030ull,
0x6e692d202f2f093bull,0x752e617262090a66ull,0x5f744c240920696eull,0x203b303530325f31ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x323535375f315f74ull,0x6c3c2f2f200a3a32ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,0x662e766f6d090a34ull,
0x3364662509203436ull,0x66376430202c3130ull,0x3030303030303066ull,0x093b303030303030ull,
0x090a666e69202f2full,0x2e71652e70746573ull,0x3470250920343666ull,0x3632646625202c37ull,
0x3033646625202c37ull,0x090a202f2f093b31ull,0x6220373470252140ull,0x5f744c2409206172ull,
0x3b34333036375f31ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x333639365f315f74ull,0x662e766f6d090a34ull,0x3164662509203436ull,
0x32646625202c3730ull,0x20202020203b3736ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,
0x30325f315f744c24ull,0x20202020203b3035ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,
0x200a3a3433303637ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x6d090a3433363936ull,0x09203436662e766full,0x202c373031646625ull,0x3030386666666430ull,
0x3030303030303030ull,0x6e202f2f093b3030ull,0x315f744c240a6e61ull,0x200a3a303530325full,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e090a3433363936ull,
0x3109363109636f6cull,0x6f6d090a30093137ull,0x2509203436662e76ull,0x6625202c37326466ull,
0x2020203b37303164ull,0x202f2f0920202020ull,0x6e752e617262090aull,0x315f744c24092069ull,
0x203b34313930375full,0x2020202020202020ull,0x744c240a202f2f09ull,0x30373131375f315full,
0x6f6c3c2f2f200a3aull,0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,
0x202c33313320656eull,0x62616c2064616568ull,0x744c242064656c65ull,0x34333639365f315full,
0x3209636f6c2e090aull,0x0a30093534350936ull,0x3436622e766f6d09ull,0x30393172257b0920ull,
0x2c7d31393172252cull,0x3b35303264662520ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x317225202c383172ull,0x20202020203b3139ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,
0x0a30093634350936ull,0x3436622e766f6d09ull,0x2c393172257b0920ull,0x202c7d3239317225ull,
0x093b353032646625ull,0x6f6c2e090a202f2full,0x3834350936320963ull,0x2e766f6d090a3009ull,
0x6466250920343666ull,0x306430202c323033ull,0x3030303030303030ull,0x3b30303030303030ull,
0x73090a30202f2f09ull,0x33752e74672e7465ull,0x2509203436662e32ull,0x6625202c33393172ull,
0x6625202c35303264ull,0x2f2f093b32303364ull,0x732e67656e090a20ull,0x3931722509203233ull,
0x3339317225202c34ull,0x202020202020203bull,0x6d090a202f2f0920ull,0x09203436662e766full,
0x202c333033646625ull,0x3030306666376430ull,0x3030303030303030ull,0x69202f2f093b3030ull,
0x2e746573090a666eull,0x662e3233752e746cull,0x3931722509203436ull,0x3032646625202c35ull,
0x3033646625202c35ull,0x090a202f2f093b33ull,0x203233732e67656eull,0x202c363931722509ull,
0x20203b3539317225ull,0x2f09202020202020ull,0x2e646e61090a202full,0x3172250920323362ull,
0x39317225202c3739ull,0x3639317225202c34ull,0x090a202f2f09203bull,0x203233752e766f6dull,
0x202c383931722509ull,0x2020202020203b30ull,0x2f09202020202020ull,0x70746573090a202full,
0x203233732e71652eull,0x25202c3834702509ull,0x7225202c37393172ull,0x202f2f093b383931ull,
0x203834702540090aull,0x744c240920617262ull,0x34333430355f315full,0x202020202020203bull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,
0x766f6d090a343336ull,0x722509203233752eull,0x343031202c393931ull,0x2020203b35373538ull,
0x0a202f2f09202020ull,0x74672e7074657309ull,0x702509203233752eull,0x39317225202c3934ull,
0x3939317225202c31ull,0x40090a202f2f093bull,0x6172622039347025ull,0x5f315f744c240920ull,
0x20203b3230383637ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c33313320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333639365f315full,0x3209636f6c2e090aull,0x0a30093435350936ull,
0x3436662e766f6d09ull,0x3430336466250920ull,0x303533346430202cull,0x3030303030303030ull,
0x2f2f093b30303030ull,0x34343130382e3120ull,0x756d090a36312b65ull,0x2509203436662e6cull,
0x25202c3530336466ull,0x25202c3530326466ull,0x2f093b3430336466ull,0x2e766f6d090a202full,
0x72257b0920343662ull,0x383172252c303032ull,0x3033646625202c7dull,0x090a202f2f093b35ull,
0x09363209636f6c2eull,0x6d090a3009353535ull,0x09203436622e766full,0x72252c393172257bull,
0x6625202c7d313032ull,0x2f2f093b35303364ull,0x732e766f6d090a20ull,0x3033722509203233ull,
0x3b373730312d202cull,0x2020202020202020ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,
0x36375f315f744c24ull,0x202020203b363435ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,
0x200a3a3230383637ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x6d090a3433363936ull,0x09203233732e766full,0x312d202c30337225ull,0x202020203b333230ull,
0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3634353637ull,0x3e706f6f6c3c2f2full,
0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,
0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e090a3433363936ull,0x3509363209636f6cull,
0x6873090a30093036ull,0x2509203233732e72ull,0x7225202c32303272ull,0x203b3032202c3831ull,
0x202f2f0920202020ull,0x33622e646e61090aull,0x3330327225092032ull,0x2c3230327225202cull,
0x20203b3734303220ull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x337225202c303372ull,
0x3330327225202c30ull,0x202f2f092020203bull,0x3209636f6c2e090aull,0x0a30093236350936ull,
0x3233622e646e6109ull,0x202c333372250920ull,0x322d202c38317225ull,0x3730353334363431ull,
0x090a202f2f093b33ull,0x09203233622e726full,0x7225202c34337225ull,0x32373031202c3333ull,
0x093b383432333936ull,0x766f6d090a202f2full,0x662509203436622eull,0x72257b202c353364ull,
0x7d343372252c3931ull,0x0a202f2f0920203bull,0x3233752e766f6d09ull,0x2c34303272250920ull,
0x3732313337303120ull,0x092020203b323835ull,0x746573090a202f2full,0x3233752e656c2e70ull,
0x202c303570250920ull,0x7225202c34337225ull,0x202f2f093b343032ull,0x203035702540090aull,
0x744c240920617262ull,0x38353037375f315full,0x202020202020203bull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313320656e696c20ull,
0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,0x6f6c2e090a343336ull,
0x3436350936320963ull,0x2e766f6d090a3009ull,0x72257b0920343662ull,0x303272252c353032ull,
0x33646625202c7d36ull,0x090a202f2f093b35ull,0x203233732e627573ull,0x202c373032722509ull,
0x31202c3630327225ull,0x093b363735383430ull,0x766f6d090a202f2full,0x257b09203436622eull,
0x3272252c38303272ull,0x646625202c7d3930ull,0x0a202f2f093b3533ull,0x3436622e766f6d09ull,
0x2c35336466250920ull,0x2c38303272257b20ull,0x093b7d3730327225ull,0x6f6c2e090a202f2full,
0x3536350936320963ull,0x2e646461090a3009ull,0x3372250920323373ull,0x2c30337225202c30ull,
0x20202020203b3120ull,0x240a202f2f092020ull,0x3037375f315f744cull,0x3c2f2f200a3a3835ull,
0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,0x33313320656e696cull,
0x6c2064616568202cull,0x242064656c656261ull,0x3639365f315f744cull,0x636f6c2e090a3433ull,
0x0939373509363209ull,0x662e766f6d090a30ull,0x3364662509203436ull,0x66626430202c3630ull,
0x3030303030303066ull,0x093b303030303030ull,0x61090a312d202f2full,0x09203436662e6464ull,
0x25202c3733646625ull,0x6625202c35336466ull,0x2f2f093b36303364ull,0x662e766f6d090a20ull,
0x3364662509203436ull,0x66336430202c3730ull,0x3030303030303066ull,0x093b303030303030ull,
0x6461090a31202f2full,0x2509203436662e64ull,0x25202c3830336466ull,0x6625202c35336466ull,
0x2f2f093b37303364ull,0x722e706372090a20ull,0x2509203436662e6eull,0x6625202c30346466ull,
0x2020203b38303364ull,0x6d090a202f2f0920ull,0x09203436662e6c75ull,0x25202c3134646625ull,
0x6625202c37336466ull,0x2f2f09203b303464ull,0x662e646461090a20ull,0x3464662509203436ull,
0x3134646625202c32ull,0x3b3134646625202cull,0x6d090a202f2f0920ull,0x09203436662e6c75ull,
0x25202c3334646625ull,0x6625202c32346466ull,0x2f2f09203b323464ull,0x662e766f6d090a20ull,
0x3364662509203436ull,0x65336430202c3930ull,0x6133623038333162ull,0x093b653166303865ull,
0x3632302e31202f2full,0x090a36302d653333ull,0x203436662e766f6dull,0x2c30313364662509ull,
0x6530646533643020ull,0x3861376238353265ull,0x202f2f093b343062ull,0x6539343633302e34ull,
0x64616d090a36302dull,0x203436662e6e722eull,0x2c31313364662509ull,0x2c39303364662520ull,
0x202c333464662520ull,0x093b303133646625ull,0x766f6d090a202f2full,0x662509203436662eull,
0x6430202c32313364ull,0x3636326233666533ull,0x6636373632306639ull,0x382e31202f2f093bull,
0x35302d6534343837ull,0x6e722e64616d090aull,0x662509203436662eull,0x6625202c33313364ull,
0x6625202c31313364ull,0x646625202c333464ull,0x202f2f093b323133ull,0x36662e766f6d090aull,
0x3133646625092034ull,0x3166336430202c34ull,0x6139616263353437ull,0x2f093b3635393062ull,
0x383737382e38202full,0x6d090a35302d6531ull,0x36662e6e722e6461ull,0x3133646625092034ull,
0x3133646625202c35ull,0x3334646625202c33ull,0x343133646625202cull,0x6d090a202f2f093bull,
0x09203436662e766full,0x202c363133646625ull,0x3137633366336430ull,0x3135623164323763ull,
0x30202f2f093b3435ull,0x303433343030302eull,0x2e64616d090a3832ull,0x09203436662e6e72ull,
0x25202c3235646625ull,0x25202c3531336466ull,0x6625202c33346466ull,0x2f2f093b36313364ull,
0x09636f6c2e090a20ull,0x3009303835093632ull,0x36662e766f6d090aull,0x3133646625092034ull,
0x3666336430202c37ull,0x3332393432393432ull,0x2f093b6432376562ull,0x323230302e30202full,
0x616d090a34313233ull,0x3436662e6e722e64ull,0x2c32356466250920ull,0x202c323564662520ull,
0x25202c3334646625ull,0x2f093b3731336466ull,0x636f6c2e090a202full,0x0931383509363209ull,
0x662e766f6d090a30ull,0x3364662509203436ull,0x66336430202c3831ull,0x3939393939393938ull,
0x093b346333613939ull,0x3231302e30202f2full,0x722e64616d090a35ull,0x2509203436662e6eull,
0x6625202c32356466ull,0x646625202c323564ull,0x33646625202c3334ull,0x0a202f2f093b3831ull,
0x363209636f6c2e09ull,0x090a300932383509ull,0x203436662e766f6dull,0x2c39313364662509ull,
0x3535626633643020ull,0x3535353535353535ull,0x202f2f093b343535ull,0x3333333338302e30ull,
0x722e64616d090a33ull,0x2509203436662e6eull,0x6625202c32356466ull,0x646625202c323564ull,
0x33646625202c3334ull,0x0a202f2f093b3931ull,0x363209636f6c2e09ull,0x090a300934383509ull,
0x203436662e627573ull,0x202c363564662509ull,0x25202c3733646625ull,0x2f09203b32346466ull,
0x2e67656e090a202full,0x6466250920343666ull,0x646625202c303233ull,0x20202020203b3234ull,
0x090a202f2f092020ull,0x203436622e766f6dull,0x2c30313272257b09ull,0x202c7d3131327225ull,
0x2f093b3635646625ull,0x2e646461090a202full,0x3272250920323373ull,0x31327225202c3231ull,
0x3538343031202c31ull,0x0a202f2f093b3637ull,0x3436622e766f6d09ull,0x33313272257b0920ull,
0x2c7d34313272252cull,0x093b363564662520ull,0x766f6d090a202f2full,0x662509203436622eull,
0x257b202c31323364ull,0x3272252c33313272ull,0x202f2f093b7d3231ull,0x6e722e64616d090aull,
0x662509203436662eull,0x646625202c393564ull,0x646625202c303233ull,0x33646625202c3733ull,
0x0a202f2f093b3132ull,0x363209636f6c2e09ull,0x090a300938383509ull,0x203436662e6c756dull,
0x2c32323364662509ull,0x202c333464662520ull,0x2f093b3235646625ull,0x2e6c756d090a202full,
0x6466250920343666ull,0x34646625202c3235ull,0x3233646625202c32ull,0x090a202f2f093b32ull,
0x09363209636f6c2eull,0x63090a3009383935ull,0x36662e6e722e7476ull,0x2509203233732e34ull,
0x7225202c31366466ull,0x2f2f0920203b3033ull,0x662e766f6d090a20ull,0x3364662509203436ull,
0x66336430202c3332ull,0x6566323465323665ull,0x093b666539336166ull,0x3339362e30202f2full,
0x64616d090a373431ull,0x203436662e6e722eull,0x202c333664662509ull,0x25202c3136646625ull,
0x25202c3332336466ull,0x2f2f093b32346466ull,0x662e766f6d090a20ull,0x3364662509203436ull,
0x63336430202c3432ull,0x6233653963626137ull,0x093b663330383933ull,0x3931332e32202f2full,
0x090a37312d653530ull,0x662e6e722e64616dull,0x3364662509203436ull,0x35646625202c3532ull,
0x3034646625202c39ull,0x3b3235646625202cull,0x656e090a202f2f09ull,0x2509203233732e67ull,
0x7225202c35313272ull,0x20202020203b3033ull,0x202f2f0920202020ull,0x6e722e747663090aull,
0x3233732e3436662eull,0x3632336466250920ull,0x3b3531327225202cull,0x6f6d090a202f2f09ull,
0x2509203436662e76ull,0x30202c3732336466ull,0x3465323665663364ull,0x6539336166656632ull,
0x2e30202f2f093b66ull,0x090a373431333936ull,0x662e6e722e64616dull,0x3364662509203436ull,
0x33646625202c3832ull,0x33646625202c3632ull,0x36646625202c3732ull,0x090a202f2f093b33ull,
0x203436662e627573ull,0x2c39323364662509ull,0x2c38323364662520ull,0x093b323464662520ull,
0x627573090a202f2full,0x662509203436662eull,0x6625202c30333364ull,0x6625202c35323364ull,
0x2f2f093b39323364ull,0x722e64616d090a20ull,0x2509203436662e6eull,0x6625202c31376466ull,
0x646625202c313664ull,0x646625202c343233ull,0x202f2f093b303333ull,0x36662e646461090aull,
0x3431646625092034ull,0x3336646625202c32ull,0x3b3137646625202cull,0x7262090a202f2f09ull,
0x240920696e752e61ull,0x3431355f315f744cull,0x202020202020203bull,0x202f2f0920202020ull,
0x355f315f744c240aull,0x2f200a3a34333430ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3331ull,0x64656c6562616c20ull,
0x365f315f744c2420ull,0x6c2e090a34333639ull,0x303609363209636full,0x736261090a300931ull,
0x662509203436662eull,0x6625202c31333364ull,0x2020203b35303264ull,0x0a202f2f09202020ull,
0x3436662e766f6d09ull,0x3233336466250920ull,0x306666376430202cull,0x3030303030303030ull,
0x2f2f093b30303030ull,0x6573090a666e6920ull,0x36662e656c2e7074ull,0x2c31357025092034ull,
0x2c31333364662520ull,0x3b32333364662520ull,0x2540090a202f2f09ull,0x2061726220313570ull,
0x375f315f744c2409ull,0x2020203b30373537ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3331332065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333639365f31ull,0x3436662e64646109ull,
0x3234316466250920ull,0x353032646625202cull,0x353032646625202cull,0x62090a202f2f093bull,
0x0920696e752e6172ull,0x31355f315f744c24ull,0x2020202020203b34ull,0x2f2f092020202020ull,
0x5f315f744c240a20ull,0x200a3a3037353737ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x6d090a3433363936ull,0x09203436662e766full,0x202c333333646625ull,
0x3030303030306430ull,0x3030303030303030ull,0x30202f2f093b3030ull,0x652e70746573090aull,
0x2509203436662e71ull,0x646625202c323570ull,0x646625202c353032ull,0x202f2f093b333333ull,
0x323570252140090aull,0x4c24092061726220ull,0x383038375f315f74ull,0x2020202020203b32ull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,
0x766f6d090a343336ull,0x662509203436662eull,0x6430202c32343164ull,0x3030303030666666ull,
0x3030303030303030ull,0x6e692d202f2f093bull,0x752e617262090a66ull,0x5f744c240920696eull,
0x20203b3431355f31ull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x383038375f315f74ull,
0x6c3c2f2f200a3a32ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,
0x2c33313320656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,
0x662e766f6d090a34ull,0x3364662509203436ull,0x66376430202c3433ull,0x3030303030303066ull,
0x093b303030303030ull,0x090a666e69202f2full,0x2e71652e70746573ull,0x3570250920343666ull,
0x3032646625202c33ull,0x3333646625202c35ull,0x090a202f2f093b34ull,0x6220333570252140ull,
0x5f744c2409206172ull,0x3b34393538375f31ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,0x662e766f6d090a34ull,
0x3164662509203436ull,0x32646625202c3234ull,0x20202020203b3530ull,0x62090a202f2f0920ull,
0x0920696e752e6172ull,0x31355f315f744c24ull,0x2020202020203b34ull,0x2f2f092020202020ull,
0x5f315f744c240a20ull,0x200a3a3439353837ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x6d090a3433363936ull,0x09203436662e766full,0x202c323431646625ull,
0x3030386666666430ull,0x3030303030303030ull,0x6e202f2f093b3030ull,0x315f744c240a6e61ull,
0x2f200a3a3431355full,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3320656e696c2079ull,0x64616568202c3331ull,0x64656c6562616c20ull,0x365f315f744c2420ull,
0x6c2e090a34333639ull,0x343509363209636full,0x67656e090a300935ull,0x662509203436662eull,
0x6625202c35333364ull,0x2020203b32343164ull,0x0a202f2f09202020ull,0x3436622e766f6d09ull,
0x36313272257b0920ull,0x2c7d37313272252cull,0x3b35333364662520ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x327225202c383172ull,0x20202020203b3731ull,0x202f2f0920202020ull,
0x3209636f6c2e090aull,0x0a30093634350936ull,0x3436622e766f6d09ull,0x2c393172257b0920ull,
0x202c7d3831327225ull,0x093b353333646625ull,0x6f6c2e090a202f2full,0x3834350936320963ull,
0x2e766f6d090a3009ull,0x6466250920343666ull,0x306430202c363333ull,0x3030303030303030ull,
0x3b30303030303030ull,0x73090a30202f2f09ull,0x33752e74672e7465ull,0x2509203436662e32ull,
0x6625202c39313272ull,0x6625202c35333364ull,0x2f2f093b36333364ull,0x732e67656e090a20ull,
0x3232722509203233ull,0x3931327225202c30ull,0x202020202020203bull,0x6d090a202f2f0920ull,
0x09203436662e766full,0x202c373333646625ull,0x3030306666376430ull,0x3030303030303030ull,
0x69202f2f093b3030ull,0x2e746573090a666eull,0x662e3233752e746cull,0x3232722509203436ull,
0x3333646625202c31ull,0x3333646625202c35ull,0x090a202f2f093b37ull,0x203233732e67656eull,
0x202c323232722509ull,0x20203b3132327225ull,0x2f09202020202020ull,0x2e646e61090a202full,
0x3272250920323362ull,0x32327225202c3332ull,0x3232327225202c30ull,0x090a202f2f09203bull,
0x203233752e766f6dull,0x202c343232722509ull,0x2020202020203b30ull,0x2f09202020202020ull,
0x70746573090a202full,0x203233732e71652eull,0x25202c3435702509ull,0x7225202c33323272ull,
0x202f2f093b343232ull,0x203435702540090aull,0x744c240920617262ull,0x30373931355f315full,
0x202020202020203bull,0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,
0x79646f6220706f6full,0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,
0x39365f315f744c24ull,0x766f6d090a343336ull,0x722509203233752eull,0x343031202c353232ull,
0x2020203b35373538ull,0x0a202f2f09202020ull,0x74672e7074657309ull,0x702509203233752eull,
0x31327225202c3535ull,0x3532327225202c37ull,0x40090a202f2f093bull,0x6172622035357025ull,
0x5f315f744c240920ull,0x20203b3236333937ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c33313320656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x34333639365f315full,0x3209636f6c2e090aull,
0x0a30093435350936ull,0x3436662e766f6d09ull,0x3833336466250920ull,0x303533346430202cull,
0x3030303030303030ull,0x2f2f093b30303030ull,0x34343130382e3120ull,0x756d090a36312b65ull,
0x2509203436662e6cull,0x25202c3933336466ull,0x25202c3533336466ull,0x2f093b3833336466ull,
0x2e766f6d090a202full,0x72257b0920343662ull,0x383172252c363232ull,0x3333646625202c7dull,
0x090a202f2f093b39ull,0x09363209636f6c2eull,0x6d090a3009353535ull,0x09203436622e766full,
0x72252c393172257bull,0x6625202c7d373232ull,0x2f2f093b39333364ull,0x732e766f6d090a20ull,
0x3033722509203233ull,0x3b373730312d202cull,0x2020202020202020ull,0x62090a202f2f0920ull,
0x0920696e752e6172ull,0x39375f315f744c24ull,0x202020203b363031ull,0x2f2f092020202020ull,
0x5f315f744c240a20ull,0x200a3a3236333937ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x6d090a3433363936ull,0x09203233732e766full,0x312d202c30337225ull,
0x202020203b333230ull,0x2f2f092020202020ull,0x5f315f744c240a20ull,0x200a3a3630313937ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e090a3433363936ull,
0x3509363209636f6cull,0x6873090a30093036ull,0x2509203233732e72ull,0x7225202c38323272ull,
0x203b3032202c3831ull,0x202f2f0920202020ull,0x33622e646e61090aull,0x3932327225092032ull,
0x2c3832327225202cull,0x20203b3734303220ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x337225202c303372ull,0x3932327225202c30ull,0x202f2f092020203bull,0x3209636f6c2e090aull,
0x0a30093236350936ull,0x3233622e646e6109ull,0x202c333372250920ull,0x322d202c38317225ull,
0x3730353334363431ull,0x090a202f2f093b33ull,0x09203233622e726full,0x7225202c34337225ull,
0x32373031202c3333ull,0x093b383432333936ull,0x766f6d090a202f2full,0x662509203436622eull,
0x72257b202c353364ull,0x7d343372252c3931ull,0x0a202f2f0920203bull,0x3233752e766f6d09ull,
0x2c30333272250920ull,0x3732313337303120ull,0x092020203b323835ull,0x746573090a202f2full,
0x3233752e656c2e70ull,0x202c363570250920ull,0x7225202c34337225ull,0x202f2f093b303332ull,
0x203635702540090aull,0x744c240920617262ull,0x38313639375f315full,0x202020202020203bull,
0x2f2f200a202f2f09ull,0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,
0x313320656e696c20ull,0x2064616568202c33ull,0x2064656c6562616cull,0x39365f315f744c24ull,
0x6f6c2e090a343336ull,0x3436350936320963ull,0x2e766f6d090a3009ull,0x72257b0920343662ull,
0x333272252c313332ull,0x33646625202c7d32ull,0x090a202f2f093b35ull,0x203233732e627573ull,
0x202c333332722509ull,0x31202c3233327225ull,0x093b363735383430ull,0x766f6d090a202f2full,
0x257b09203436622eull,0x3272252c34333272ull,0x646625202c7d3533ull,0x0a202f2f093b3533ull,
0x3436622e766f6d09ull,0x2c35336466250920ull,0x2c34333272257b20ull,0x093b7d3333327225ull,
0x6f6c2e090a202f2full,0x3536350936320963ull,0x2e646461090a3009ull,0x3372250920323373ull,
0x2c30337225202c30ull,0x20202020203b3120ull,0x240a202f2f092020ull,0x3639375f315f744cull,
0x3c2f2f200a3a3831ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,0x2079646f6220706full,
0x33313320656e696cull,0x6c2064616568202cull,0x242064656c656261ull,0x3639365f315f744cull,
0x636f6c2e090a3433ull,0x0939373509363209ull,0x662e766f6d090a30ull,0x3364662509203436ull,
0x66626430202c3034ull,0x3030303030303066ull,0x093b303030303030ull,0x61090a312d202f2full,
0x09203436662e6464ull,0x25202c3733646625ull,0x6625202c35336466ull,0x2f2f093b30343364ull,
0x662e766f6d090a20ull,0x3364662509203436ull,0x66336430202c3134ull,0x3030303030303066ull,
0x093b303030303030ull,0x6461090a31202f2full,0x2509203436662e64ull,0x25202c3234336466ull,
0x6625202c35336466ull,0x2f2f093b31343364ull,0x722e706372090a20ull,0x2509203436662e6eull,
0x6625202c30346466ull,0x2020203b32343364ull,0x6d090a202f2f0920ull,0x09203436662e6c75ull,
0x25202c3134646625ull,0x6625202c37336466ull,0x2f2f09203b303464ull,0x662e646461090a20ull,
0x3464662509203436ull,0x3134646625202c32ull,0x3b3134646625202cull,0x6d090a202f2f0920ull,
0x09203436662e6c75ull,0x25202c3334646625ull,0x6625202c32346466ull,0x2f2f09203b323464ull,
0x662e766f6d090a20ull,0x3364662509203436ull,0x65336430202c3334ull,0x6133623038333162ull,
0x093b653166303865ull,0x3632302e31202f2full,0x090a36302d653333ull,0x203436662e766f6dull,
0x2c34343364662509ull,0x6530646533643020ull,0x3861376238353265ull,0x202f2f093b343062ull,
0x6539343633302e34ull,0x64616d090a36302dull,0x203436662e6e722eull,0x2c35343364662509ull,
0x2c33343364662520ull,0x202c333464662520ull,0x093b343433646625ull,0x766f6d090a202f2full,
0x662509203436662eull,0x6430202c36343364ull,0x3636326233666533ull,0x6636373632306639ull,
0x382e31202f2f093bull,0x35302d6534343837ull,0x6e722e64616d090aull,0x662509203436662eull,
0x6625202c37343364ull,0x6625202c35343364ull,0x646625202c333464ull,0x202f2f093b363433ull,
0x36662e766f6d090aull,0x3433646625092034ull,0x3166336430202c38ull,0x6139616263353437ull,
0x2f093b3635393062ull,0x383737382e38202full,0x6d090a35302d6531ull,0x36662e6e722e6461ull,
0x3433646625092034ull,0x3433646625202c39ull,0x3334646625202c37ull,0x383433646625202cull,
0x6d090a202f2f093bull,0x09203436662e766full,0x202c303533646625ull,0x3137633366336430ull,
0x3135623164323763ull,0x30202f2f093b3435ull,0x303433343030302eull,0x2e64616d090a3832ull,
0x09203436662e6e72ull,0x25202c3235646625ull,0x25202c3934336466ull,0x6625202c33346466ull,
0x2f2f093b30353364ull,0x09636f6c2e090a20ull,0x3009303835093632ull,0x36662e766f6d090aull,
0x3533646625092034ull,0x3666336430202c31ull,0x3332393432393432ull,0x2f093b6432376562ull,
0x323230302e30202full,0x616d090a34313233ull,0x3436662e6e722e64ull,0x2c32356466250920ull,
0x202c323564662520ull,0x25202c3334646625ull,0x2f093b3135336466ull,0x636f6c2e090a202full,
0x0931383509363209ull,0x662e766f6d090a30ull,0x3364662509203436ull,0x66336430202c3235ull,
0x3939393939393938ull,0x093b346333613939ull,0x3231302e30202f2full,0x722e64616d090a35ull,
0x2509203436662e6eull,0x6625202c32356466ull,0x646625202c323564ull,0x33646625202c3334ull,
0x0a202f2f093b3235ull,0x363209636f6c2e09ull,0x090a300932383509ull,0x203436662e766f6dull,
0x2c33353364662509ull,0x3535626633643020ull,0x3535353535353535ull,0x202f2f093b343535ull,
0x3333333338302e30ull,0x722e64616d090a33ull,0x2509203436662e6eull,0x6625202c32356466ull,
0x646625202c323564ull,0x33646625202c3334ull,0x0a202f2f093b3335ull,0x363209636f6c2e09ull,
0x090a300934383509ull,0x203436662e627573ull,0x202c363564662509ull,0x25202c3733646625ull,
0x2f09203b32346466ull,0x2e67656e090a202full,0x6466250920343666ull,0x646625202c343533ull,
0x20202020203b3234ull,0x090a202f2f092020ull,0x203436622e766f6dull,0x2c36333272257b09ull,
0x202c7d3733327225ull,0x2f093b3635646625ull,0x2e646461090a202full,0x3272250920323373ull,
0x33327225202c3833ull,0x3538343031202c37ull,0x0a202f2f093b3637ull,0x3436622e766f6d09ull,
0x39333272257b0920ull,0x2c7d30343272252cull,0x093b363564662520ull,0x766f6d090a202f2full,
0x662509203436622eull,0x257b202c35353364ull,0x3272252c39333272ull,0x202f2f093b7d3833ull,
0x6e722e64616d090aull,0x662509203436662eull,0x646625202c393564ull,0x646625202c343533ull,
0x33646625202c3733ull,0x0a202f2f093b3535ull,0x363209636f6c2e09ull,0x090a300938383509ull,
0x203436662e6c756dull,0x2c36353364662509ull,0x202c333464662520ull,0x2f093b3235646625ull,
0x2e6c756d090a202full,0x6466250920343666ull,0x34646625202c3235ull,0x3533646625202c32ull,
0x090a202f2f093b36ull,0x09363209636f6c2eull,0x63090a3009383935ull,0x36662e6e722e7476ull,
0x2509203233732e34ull,0x7225202c31366466ull,0x2f2f0920203b3033ull,0x662e766f6d090a20ull,
0x3364662509203436ull,0x66336430202c3735ull,0x6566323465323665ull,0x093b666539336166ull,
0x3339362e30202f2full,0x64616d090a373431ull,0x203436662e6e722eull,0x202c333664662509ull,
0x25202c3136646625ull,0x25202c3735336466ull,0x2f2f093b32346466ull,0x662e766f6d090a20ull,
0x3364662509203436ull,0x63336430202c3835ull,0x6233653963626137ull,0x093b663330383933ull,
0x3931332e32202f2full,0x090a37312d653530ull,0x662e6e722e64616dull,0x3364662509203436ull,
0x35646625202c3935ull,0x3034646625202c39ull,0x3b3235646625202cull,0x656e090a202f2f09ull,
0x2509203233732e67ull,0x7225202c31343272ull,0x20202020203b3033ull,0x202f2f0920202020ull,
0x6e722e747663090aull,0x3233732e3436662eull,0x3036336466250920ull,0x3b3134327225202cull,
0x6f6d090a202f2f09ull,0x2509203436662e76ull,0x30202c3136336466ull,0x3465323665663364ull,
0x6539336166656632ull,0x2e30202f2f093b66ull,0x090a373431333936ull,0x662e6e722e64616dull,
0x3364662509203436ull,0x33646625202c3236ull,0x33646625202c3036ull,0x36646625202c3136ull,
0x090a202f2f093b33ull,0x203436662e627573ull,0x2c33363364662509ull,0x2c32363364662520ull,
0x093b323464662520ull,0x627573090a202f2full,0x662509203436662eull,0x6625202c34363364ull,
0x6625202c39353364ull,0x2f2f093b33363364ull,0x722e64616d090a20ull,0x2509203436662e6eull,
0x6625202c31376466ull,0x646625202c313664ull,0x646625202c383533ull,0x202f2f093b343633ull,
0x36662e646461090aull,0x3731646625092034ull,0x3336646625202c37ull,0x3b3137646625202cull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3230315f315f744cull,0x2020202020203b36ull,
0x202f2f0920202020ull,0x355f315f744c240aull,0x2f200a3a30373931ull,0x203e706f6f6c3c2full,
0x20666f2074726150ull,0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3331ull,
0x64656c6562616c20ull,0x365f315f744c2420ull,0x6c2e090a34333639ull,0x303609363209636full,
0x736261090a300931ull,0x662509203436662eull,0x6625202c35363364ull,0x2020203b32343164ull,
0x0a202f2f09202020ull,0x3436662e766f6d09ull,0x3636336466250920ull,0x306666376430202cull,
0x3030303030303030ull,0x2f2f093b30303030ull,0x6573090a666e6920ull,0x36662e656c2e7074ull,
0x2c37357025092034ull,0x2c35363364662520ull,0x3b36363364662520ull,0x2540090a202f2f09ull,
0x2061726220373570ull,0x385f315f744c2409ull,0x2020203b30333130ull,0x202f2f0920202020ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3331332065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333639365f31ull,
0x3436662e64646109ull,0x3736336466250920ull,0x323431646625202cull,0x323431646625202cull,
0x6e090a202f2f093bull,0x09203436662e6765ull,0x202c373731646625ull,0x203b373633646625ull,
0x2f2f092020202020ull,0x752e617262090a20ull,0x5f744c240920696eull,0x203b363230315f31ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x333130385f315f74ull,0x6c3c2f2f200a3a30ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,0x662e766f6d090a34ull,
0x3364662509203436ull,0x30306430202c3836ull,0x3030303030303030ull,0x093b303030303030ull,
0x6573090a30202f2full,0x36662e71652e7074ull,0x2c38357025092034ull,0x2c35333364662520ull,
0x3b38363364662520ull,0x2140090a202f2f09ull,0x6172622038357025ull,0x5f315f744c240920ull,
0x20203b3234363038ull,0x202f2f0920202020ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3331332065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a34333639365f31ull,0x3436662e766f6d09ull,0x3737316466250920ull,
0x306666666430202cull,0x3030303030303030ull,0x2f2f093b30303030ull,0x62090a666e692d20ull,
0x0920696e752e6172ull,0x30315f315f744c24ull,0x20202020203b3632ull,0x2f2f092020202020ull,
0x5f315f744c240a20ull,0x200a3a3234363038ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,
0x6f6220706f6f6c20ull,0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,
0x5f315f744c242064ull,0x6d090a3433363936ull,0x09203436662e766full,0x202c393633646625ull,
0x3030306666376430ull,0x3030303030303030ull,0x69202f2f093b3030ull,0x70746573090a666eull,
0x203436662e71652eull,0x25202c3935702509ull,0x25202c3533336466ull,0x2f093b3936336466ull,
0x70252140090a202full,0x0920617262203935ull,0x31385f315f744c24ull,0x202020203b343531ull,
0x200a202f2f092020ull,0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,
0x20656e696c207964ull,0x616568202c333133ull,0x656c6562616c2064ull,0x5f315f744c242064ull,
0x6d090a3433363936ull,0x09203436662e766full,0x202c373731646625ull,0x203b353333646625ull,
0x2f2f092020202020ull,0x752e617262090a20ull,0x5f744c240920696eull,0x203b363230315f31ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x353131385f315f74ull,0x6c3c2f2f200a3a34ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333639365f315f74ull,0x662e766f6d090a34ull,
0x3164662509203436ull,0x66666430202c3737ull,0x3030303030303866ull,0x093b303030303030ull,
0x240a6e616e202f2full,0x3230315f315f744cull,0x6c3c2f2f200a3a36ull,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c33313320656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x333639365f315f74ull,0x09636f6c2e090a34ull,0x3009333731093631ull,
0x36662e766f6d090aull,0x3732646625092034ull,0x373731646625202cull,0x202020202020203bull,
0x744c240a202f2f09ull,0x34313930375f315full,0x6f6c3c2f2f200a3aull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c33313320656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x34333639365f315full,0x3109636f6c2e090aull,0x0a30093537310936ull,
0x3436662e766f6d09ull,0x3037336466250920ull,0x356466336430202cull,0x3465336332333939ull,
0x2f2f093b64363330ull,0x37343733332e3020ull,0x662e766f6d090a35ull,0x3364662509203436ull,
0x66336430202c3137ull,0x6663366363336665ull,0x093b313331636238ull,0x3637392e30202f2full,
0x766f6d090a393631ull,0x662509203436662eull,0x6430202c32373364ull,0x3730353934636633ull,
0x3638363039363632ull,0x312e30202f2f093bull,0x6d090a3839373036ull,0x09203436662e766full,
0x202c333733646625ull,0x6534633966336430ull,0x3234346533376461ull,0x30202f2f093b3733ull,
0x393334363732302eull,0x36662e766f6d090aull,0x3733646625092034ull,0x3666336430202c34ull,
0x3335653334363766ull,0x2f093b3538373665ull,0x383330302e30202full,0x6f6d090a37353034ull,
0x2509203436662e76ull,0x30202c3537336466ull,0x3236653933663364ull,0x3438383961306165ull,
0x2e30202f2f093b36ull,0x3931353933303030ull,0x36662e766f6d090aull,0x3733646625092034ull,
0x3066336430202c36ull,0x6635303262656430ull,0x2f093b3830323835ull,0x363731322e33202full,
0x6d090a35302d6538ull,0x09203436662e766full,0x202c373733646625ull,0x3136333965336430ull,
0x6237623930373564ull,0x32202f2f093b3635ull,0x2d6537313838382eull,0x2e766f6d090a3730ull,
0x6466250920343666ull,0x336430202c383733ull,0x3035633339613965ull,0x3b64613564323061ull,
0x36392e33202f2f09ull,0x0a37302d65323330ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c393733ull,0x646625202c383733ull,0x33646625202c3732ull,0x0a202f2f093b3737ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x646625202c303833ull,0x33646625202c3732ull,
0x33646625202c3937ull,0x0a202f2f093b3637ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c313833ull,0x33646625202c3732ull,0x33646625202c3038ull,0x0a202f2f093b3537ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x646625202c323833ull,0x33646625202c3732ull,
0x33646625202c3138ull,0x0a202f2f093b3437ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c333833ull,0x33646625202c3732ull,0x33646625202c3238ull,0x0a202f2f093b3337ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x646625202c343833ull,0x33646625202c3732ull,
0x33646625202c3338ull,0x0a202f2f093b3237ull,0x2e6e722e64616d09ull,0x6466250920343666ull,
0x646625202c353833ull,0x33646625202c3732ull,0x33646625202c3438ull,0x0a202f2f093b3137ull,
0x2e6e722e64616d09ull,0x6466250920343666ull,0x646625202c363833ull,0x33646625202c3732ull,
0x33646625202c3538ull,0x0a202f2f093b3037ull,0x3436662e67656e09ull,0x3738336466250920ull,
0x363833646625202cull,0x092020202020203bull,0x766f6d090a202f2full,0x662509203436662eull,
0x6430202c38383364ull,0x3030303030303030ull,0x3030303030303030ull,0x090a30202f2f093bull,
0x2e746c2e70746573ull,0x3670250920343666ull,0x3132646625202c30ull,0x3833646625202c30ull,
0x090a202f2f093b38ull,0x3436662e706c6573ull,0x2c37326466250920ull,0x2c37383364662520ull,
0x2c36383364662520ull,0x2f093b3036702520ull,0x315f744c240a202full,0x0a3a32303430375full,
0x706f6f6c3c2f2f20ull,0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,
0x6568202c33313320ull,0x6c6562616c206461ull,0x315f744c24206465ull,0x090a34333639365full,
0x203436662e766f6dull,0x2c38303264662509ull,0x203b373264662520ull,0x2f09202020202020ull,
0x315f744c240a202full,0x2f200a3a3835325full,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3320656e696c2079ull,0x64616568202c3331ull,0x64656c6562616c20ull,
0x365f315f744c2420ull,0x6c2e090a34333639ull,0x313309363109636full,0x747663090a300933ull,
0x2e3233662e6e722eull,0x3366250920343666ull,0x383032646625202cull,0x0a202f2f0920203bull,
0x626f6c672e747309ull,0x09203233662e6c61ull,0x302b34316472255bull,0x093b336625202c5dull,
0x30313a6469202f2full,0x2e646461090a3235ull,0x3172250920323375ull,0x32317225202c3732ull,
0x3732317225202c39ull,0x090a202f2f09203bull,0x203436752e646461ull,0x202c343164722509ull,
0x25202c3431647225ull,0x2f09203b35316472ull,0x70746573090a202full,0x203233752e746c2eull,
0x25202c3136702509ull,0x7225202c37323172ull,0x090a202f2f093b31ull,0x7262203136702540ull,
0x315f744c24092061ull,0x203b34333639365full,0x2f09202020202020ull,0x315f744c240a202full,
0x0a3a32323139365full,0x35355f315f744c24ull,0x6c2e090a3a303138ull,0x313309363109636full,
0x697865090a300936ull,0x2020202020203b74ull,0x2020202020202020ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x5f646e6557444c24ull,0x65766e6936315a5full,0x654b444e43657372ull,
0x5f5366506c656e72ull,0x2f2f207d090a3a6aull,0x766e6936315a5f20ull,0x4b444e4365737265ull,
0x5366506c656e7265ull,0x000000000a0a6a5full
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"1fb21eba98e09d02",(char*)"quasirandomGenerator_SM13.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0,0x15f85d8a};
# 5 "/tmp/tmpxft_00005971_00000000-4_quasirandomGenerator_SM13.cudafe1.stub.c" 2
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 85 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1
# 86 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2
# 111 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
extern "C" {


extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 226 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 68 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 69 "/usr/local/cuda/bin/../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 864 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 920 "/usr/local/cuda/bin/../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/usr/local/cuda/bin/../include/device_functions.h" 1 3
# 426 "/usr/local/cuda/bin/../include/device_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 427 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 2367 "/usr/local/cuda/bin/../include/device_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/common_types.h" 1 3
# 37 "/usr/local/cuda/bin/../include/common_types.h" 3
union __cudart_FloatUintCvt {
    float f;
    unsigned int i;
};

union __cudart_FloatIntCvt {
    float f;
    int i;
};

union __cudart_DoubleUlonglongCvt {
    double d;
    unsigned long long int i;
};

union __cudart_DoubleLonglongCvt {
    double d;
    long long int i;
};

union __cudart_DoubleInthiloCvt {
    double d;
    signed int i[2];
};

struct __cudart_UintUint {
    unsigned int lo;
    unsigned int hi;
};
# 2368 "/usr/local/cuda/bin/../include/device_functions.h" 2 3

static const unsigned char __internal_rcpTab[128] =
{
  0xff, 0xfd, 0xfb, 0xf9, 0xf7, 0xf5, 0xf4, 0xf2,
  0xf0, 0xee, 0xed, 0xeb, 0xe9, 0xe8, 0xe6, 0xe4,
  0xe3, 0xe1, 0xe0, 0xde, 0xdd, 0xdb, 0xda, 0xd8,
  0xd7, 0xd5, 0xd4, 0xd3, 0xd1, 0xd0, 0xcf, 0xcd,
  0xcc, 0xcb, 0xca, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb,
  0xba, 0xb9, 0xb8, 0xb7, 0xb6, 0xb5, 0xb4, 0xb3,
  0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac, 0xab,
  0xaa, 0xa9, 0xa8, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4,
  0xa3, 0xa3, 0xa2, 0xa1, 0xa0, 0x9f, 0x9f, 0x9e,
  0x9d, 0x9c, 0x9c, 0x9b, 0x9a, 0x99, 0x99, 0x98,
  0x97, 0x97, 0x96, 0x95, 0x95, 0x94, 0x93, 0x93,
  0x92, 0x91, 0x91, 0x90, 0x8f, 0x8f, 0x8e, 0x8e,
  0x8d, 0x8c, 0x8c, 0x8b, 0x8b, 0x8a, 0x89, 0x89,
  0x88, 0x88, 0x87, 0x87, 0x86, 0x85, 0x85, 0x84,
  0x84, 0x83, 0x83, 0x82, 0x82, 0x81, 0x81, 0x80
};

static const unsigned int __internal_invSqrtCubeTab[96] =
{
  0xfa0bf8fe, 0xee6b28fa, 0xe5f024f7, 0xdaf268f3,
  0xd2f000f0, 0xc890c0ec, 0xc10378e9, 0xb9a758e6,
  0xb4da40e4, 0xadcea0e1, 0xa6f278de, 0xa279c0dc,
  0x9beb48d9, 0x97a5c4d7, 0x916340d4, 0x8d4fc8d2,
  0x895000d0, 0x8563b8ce, 0x818ac0cc, 0x7dc4e8ca,
  0x7a1200c8, 0x7671d8c6, 0x72e440c4, 0x6f6908c2,
  0x6db240c1, 0x6a523cbf, 0x670424bd, 0x6563c0bc,
  0x623028ba, 0x609ce8b9, 0x5d8364b7, 0x5bfd18b6,
  0x58fd40b4, 0x5783a8b3, 0x560e48b2, 0x533000b0,
  0x51c70caf, 0x506238ae, 0x4da4c0ac, 0x4c4c10ab,
  0x4af768aa, 0x49a6b8a9, 0x485a00a8, 0x471134a7,
  0x45cc58a6, 0x434e40a4, 0x4214f8a3, 0x40df88a2,
  0x3fade0a1, 0x3e8000a0, 0x3d55dc9f, 0x3c2f789e,
  0x3c2f789e, 0x3b0cc49d, 0x39edc09c, 0x38d2609b,
  0x37baa89a, 0x36a68899, 0x35960098, 0x34890497,
  0x34890497, 0x337f9896, 0x3279ac95, 0x31774094,
  0x30784893, 0x30784893, 0x2f7cc892, 0x2e84b091,
  0x2d900090, 0x2d900090, 0x2c9eac8f, 0x2bb0b88e,
  0x2bb0b88e, 0x2ac6148d, 0x29dec08c, 0x29dec08c,
  0x28fab08b, 0x2819e88a, 0x2819e88a, 0x273c5889,
  0x273c5889, 0x26620088, 0x258ad487, 0x258ad487,
  0x24b6d886, 0x24b6d886, 0x23e5fc85, 0x23184084,
  0x23184084, 0x224d9883, 0x224d9883, 0x21860882,
  0x21860882, 0x20c18081, 0x20c18081, 0x20000080
};

static float __internal_frcp_kernel (float x,enum cudaRoundMode mode)
{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int sign;
  unsigned f, y;

  arg.f = x;
  sign = arg.i & 0x80000000;
  expo = (arg.i >> 23);
  expo = expo & 0xff;
  f = expo - 1;

  if (f <= 0xFD) {
    y = (arg.i << 8);
    y = y | 0x80000000;

    arg.i = __internal_rcpTab[(y >> 24) - 128];

    f = arg.i * arg.i;
    f = f << 16;
    prod = ((unsigned long long)y) * f;
    arg.i = (arg.i << 24) - (unsigned)(prod >> 32);

    f = arg.i + arg.i;
    prod = ((unsigned long long)y) * f;
    f = (unsigned)(-(int)(prod >> 32));
    prod = ((unsigned long long)arg.i) * f;
    y = y >> 8;

    expo = (2 * 127) - expo - 2;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 6;
    } else {
      arg.i = (arg.i + 32) >> 6;
    }
    if ((int)expo >= 0) {
      f = y * arg.i;
      arg.i = ((expo << 23) + arg.i) | sign;
    } else {

      expo = -(int)expo;
      arg.i = arg.i >> expo;
      f = y * arg.i;
      arg.i = arg.i | sign;
    }
    if (mode == cudaRoundNearest) {
      expo = f + y;
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)expo < 0) expo = (unsigned)(-(int)expo);
      if (expo < f) arg.i++;
    } else if (mode == cudaRoundZero) {
      if ((int)f > 0) arg.i = arg.i - 1;
    } else if (mode == cudaRoundPosInf) {
      if (((int)f > 0) && sign) arg.i = arg.i - 1;
      if (((int)f < 0) && !sign) arg.i = arg.i + 1;
    } else {
      if (((int)f > 0) && !sign) arg.i = arg.i - 1;
      if (((int)f < 0) && sign) arg.i = arg.i + 1;
    }
    return arg.f;
  } else {

    if (!(arg.i << 1)) {
      arg.i = 0x7F800000 | arg.i;
      return arg.f;
    }

    if ((arg.i << 1) == 0xff000000) {
      arg.i &= 0x80000000;
      return arg.f;
    }

    if ((arg.i << 1) > 0xff000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    f = 0;
    arg.i <<= 8;
    do {
      f++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i |= sign;
    arg.f = __internal_frcp_kernel (arg.f, mode);
    expo = ((arg.i << 1) >> 24);
    if ((expo + f) < 255) {
      arg.i = (arg.i + (f << 23));
      return arg.f;
    }
    if (mode == cudaRoundNearest) {
      arg.i = (arg.i & 0x80000000) | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      arg.i = (arg.i & 0x80000000) | 0x7f7fffff;
    } else if (mode == cudaRoundPosInf) {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f7fffff : 0x7f800000);
    } else {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f800000 : 0x7f7fffff);
    }
    return arg.f;
  }
}

static float __internal_fsqrt_kernel (float radicand, enum cudaRoundMode mode)

{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int s, f, x;

  arg.f = radicand;
  expo = arg.i >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((arg.i <= 0x80000000) && (f <= 0xFD)) {

    x = (arg.i << 8) | 0x80000000;
    x = x >> (expo & 1);

    arg.i = f = __internal_invSqrtCubeTab[((unsigned)x >> 25) - 32];

    prod = ((unsigned long long)x) * f;
    arg.i = ((arg.i * 3) << 22) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)arg.i) * arg.i;
    s = (unsigned)(prod >> 32);
    prod = ((unsigned long long)x) * s;
    f = 0x30000000 - (unsigned)(prod >> 32);
    prod = ((unsigned long long)f) * arg.i;
    arg.i = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * arg.i;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 3;
    } else {
      arg.i = (arg.i + 4) >> 3;
    }
    x = (x << 16) - (arg.i * arg.i);

    if (mode == cudaRoundNearest) {
      f = x - (2 * arg.i + 1);
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)x < 0) x = (unsigned)(-(int)x);
      if (f < x) arg.i ++;
    } else if ((mode == cudaRoundZero) || (mode == cudaRoundMinInf)) {
      if ((int)x < 0) arg.i--;
    } else if (mode == cudaRoundPosInf) {
      if ((int)x > 0) arg.i++;
    }
    arg.i = arg.i + (((expo + 125) & ~0x1) << 22);
    return arg.f;
  } else {

    if (!(arg.i << 1) || (arg.i == 0x7F800000)) {
      return arg.f;
    }

    if ((arg.i << 1) > 0xFF000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    if (arg.i & 0x80000000) {
      arg.i = 0xFFC00000;
      return arg.f;
    }

    x = 0;
    arg.i <<= 8;
    do {
      x++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i += (x & 1) << 23;
    x += (x & 1);
    arg.f = __internal_fsqrt_kernel (arg.f, mode);
    arg.i -= ((x >> 1) << 23);
    return arg.f;
  }
}

static float __internal_fdiv_kernel (float dividend, float divisor, enum cudaRoundMode mode)

{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  volatile union __cudart_FloatUintCvt cvtx, cvty, res;

  cvtx.f = dividend;
  cvty.f = divisor;
  expox = ((cvtx.i >> 23) & 0xff) - 1;
  expoy = ((cvty.i >> 23) & 0xff) - 1;
  sign = ((cvtx.i ^ cvty.i) & 0x80000000);

  if ((expox <= 0xFD) && (expoy <= 0xFD)) {
divide:
    expox = expox - expoy + 127 - 1;
    expoy = expox;

    y = (cvty.i << 8) | 0x80000000;
    x = (cvtx.i & 0x00ffffff) | 0x00800000;

    r = __internal_rcpTab[(y >> 24) - 128];

    f = r * r;
    prod = ((unsigned long long)y) * (f << 16);
    r = (r << 24) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)y) * (r << 1);
    f = (unsigned)-(int)(prod >> 32);
    prod = ((unsigned long long)f) * (r << 1);
    r = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * (r << 1);

    if (((int)((prod >> 32) << 8)) > 0) {
      expox--;
      prod = prod + prod;
    }
    if (mode == cudaRoundNearest) {

      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem0, rem1, inc;

        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        rem0 = rem1 - y;
        inc = abs(rem0) < abs(rem1);

        res.i = sign | ((expox << 23) + r + inc);
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f800000;
        return res.f;
      } else {

        int shift = -(int)expox;
        if (shift > 23) {

          r = (shift < 25) && ((x != y) || (r > 0x00ff0000));
          res.i = sign | r;
          return res.f;
        }
        if (x == y) {

          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          remhi = remlo - y;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if ((remhi < remlo) || ((remhi == remlo) && (r & 1))) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundZero) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if (rem1 < 0) r--;
        r = (expox << 23) + r;
        if (r == 0x7f800000) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f7fffff;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift < 31)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = 0;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) & (r != 0)) r--;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundPosInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (sign)) r--;
        if ((rem1 > 0) && (!sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f7fffff : 0x7f800000;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (sign)) r--;
          if ((remlo > 0) && (!sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundMinInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (!sign)) r--;
        if ((rem1 > 0) && (sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (!sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f800000 : 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (!sign)) r--;
          if ((remlo > 0) && (sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    }
  }
  {
    int xzero, yzero, xinf, yinf, xnan, ynan;

    xnan = (cvtx.i << 1) > 0xff000000;
    ynan = (cvty.i << 1) > 0xff000000;

    if (xnan) {
      res.i = cvtx.i | 0x00400000;
      return res.f;
    }
    if (ynan) {
      res.i = cvty.i | 0x00400000;
      return res.f;
    }
    xzero = (cvtx.i << 1) == 0x00000000;
    yzero = (cvty.i << 1) == 0x00000000;
    xinf = (cvtx.i << 1) == 0xff000000;
    yinf = (cvty.i << 1) == 0xff000000;

    if ((xzero & yzero) | (xinf & yinf)) {
      res.i = 0xffc00000;
      return res.f;
    }

    if (xzero | yinf) {
      res.i = sign;
      return res.f;
    }

    if (yzero | xinf) {
      res.i = sign | 0x7f800000;
      return res.f;
    }

    if ((int)expox < 0) {
      cvtx.i = cvtx.i << 9;
      while ((int)cvtx.i >= 0) {
        expox--;
        cvtx.i = cvtx.i + cvtx.i;
      }
      cvtx.i = cvtx.i >> 8;
    }
    if ((int)expoy < 0) {
      cvty.i = cvty.i << 9;
      while ((int)cvty.i >= 0) {
        expoy--;
        cvty.i = cvty.i + cvty.i;
      }
      cvty.i = cvty.i >> 8;
    }
    goto divide;
  }
}

static float __internal_fmul_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;

  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (mode == cudaRoundNearest) {
        if (yy.i < 0x80000000) return xx.f;
        xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
      } else if (mode == cudaRoundZero) {
      } else if (mode == cudaRoundPosInf) {
        xx.i += (yy.i && !expo_y);
      } else if (mode == cudaRoundMinInf) {
        xx.i += (yy.i && expo_y);
      }
      return xx.f;
    } else if ((int)expo_x >= 254) {

      if (mode == cudaRoundNearest) {
         xx.i = expo_y | 0x7F800000;
      } else if (mode == cudaRoundZero) {
         xx.i = expo_y | 0x7F7FFFFF;
      } else if (mode == cudaRoundPosInf) {
         xx.i = (expo_y ? 0xff7fffff : 0x7F800000);
      } else {
         xx.i = (expo_y ? 0xFF800000 : 0x7f7fffff);
      }
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (mode == cudaRoundNearest) {
        if (expo_x > 25) {

          xx.i = expo_y;
          return xx.f;
        } else {
          yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
          xx.i = expo_y + (xx.i >> expo_x);
          xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
          return xx.f;
        }
      } else if (mode == cudaRoundZero) {
        if (expo_x > 25) expo_x = 25;
        xx.i = expo_y + (xx.i >> expo_x);
        return xx.f;
      } else if (mode == cudaRoundPosInf) {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && !expo_y);
        return xx.f;
      } else {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && expo_y);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fmaf_kernel (float a, float b, float c, enum cudaRoundMode mode)

{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;
  volatile union __cudart_FloatUintCvt cvt;

  cvt.f = a;
  xx = cvt.i;
  cvt.f = b;
  yy = cvt.i;
  cvt.f = c;
  zz = cvt.i;

  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return b + b;
    }
    if ((zz << 1) > 0xff000000) {
      return c + c;
    }
    if ((xx << 1) > 0xff000000) {
      return a + a;
    }
# 3148 "/usr/local/cuda/bin/../include/device_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      cvt.i = 0xffc00000;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          cvt.i = 0xffc00000;
          return cvt.f;
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      cvt.i = xx;
      return cvt.f;
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      cvt.i = yy;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      cvt.i = zz;
      return cvt.f;
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          cvt.i = zz;
          return cvt.f;
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      if (mode == cudaRoundMinInf) {
        zz = 0x80000000 & (xx ^ yy ^ zz);
      } else {
        zz &= 0x7fffffff;
      }
      cvt.i = zz;
      return cvt.f;
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      cvt.i = zz;
      return cvt.f;
    }

    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;

  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }

    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        if (mode == cudaRoundMinInf) {
          xx = 0x80000000;
        }
        cvt.i = xx;
        return cvt.f;
      }
      if ((int)xx < 0) {


        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    if (mode == cudaRoundNearest) {
      s = xx & 1;
      xx += (temp == 0x80000000) ? s : (temp >> 31);
    } else if (mode == cudaRoundPosInf) {
      xx += temp && !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += temp && expo_y;
    }
    xx = xx + (expo_x << 23);
    cvt.i = xx;
    return cvt.f;
  } else if ((int)expo_x >= 126) {

    if (mode == cudaRoundNearest) {
      xx = expo_y | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      xx = expo_y | 0x7F7FFFFF;
    } else if (mode == cudaRoundPosInf) {
      xx = expo_y ? 0xFF7FFFFF : 0x7f800000;
    } else if (mode == cudaRoundMinInf) {
      xx = expo_y ? 0xff800000 : 0x7f7fffff;
    }
    cvt.i = xx;
    return cvt.f;
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    xx = 0;
    if (mode == cudaRoundPosInf) {
      xx += !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += !!expo_y;
    }
    cvt.i = expo_y | xx;
    return cvt.f;
  }
  temp = (xx << (32 - expo_x)) | ((temp) ? 1 : 0);
  xx = xx >> expo_x;
  if (mode == cudaRoundNearest) {
    xx = xx + ((temp == 0x80000000) ? (xx & 1) : (temp >> 31));
  } else if (mode == cudaRoundPosInf) {
    xx = xx + (!expo_y && temp);
  } else if (mode == cudaRoundMinInf) {
    xx = xx + (expo_y && temp);
  }
  xx = expo_y + xx;
  cvt.i = xx;
  return cvt.f;
}


static float __internal_fadd_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          if (mode == cudaRoundMinInf) {
            xx.i = 0x80000000;
          } else if (mode == cudaRoundPosInf) {
            xx.i = 0;
          }
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);
        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      if (mode == cudaRoundMinInf) {
        xx.i += (temp && (xx.i & 0x80000000));
      } else if (mode == cudaRoundPosInf) {
        xx.i += (temp && !(xx.i & 0x80000000));
      }
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

      temp = xx.i & 0x80000000;
      if (mode == cudaRoundMinInf) {
        xx.i = (temp ? 0xFF800000 : 0x7f7fffff);
      } else if (mode == cudaRoundPosInf) {
        xx.i = (temp ? 0xff7fffff : 0x7F800000);
      }
      return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;
    expo_x = (unsigned)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    if (mode == cudaRoundMinInf) {
      xx.i += (temp && yy.i);
    } else if (mode == cudaRoundPosInf) {
      xx.i += (temp && !yy.i);
    }
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (mode == cudaRoundMinInf) {
        if (!(xx.i << 1)) {
          xx.i = xx.i | yy.i;
        }
      } else if (mode == cudaRoundPosInf) {
        if (xx.i == 0x80000000) {
          xx.i = yy.i;
        }
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __frcp_rn (float a)
{
  return __internal_frcp_kernel (a, cudaRoundNearest);
}

static float __frcp_rz (float a)
{
  return __internal_frcp_kernel (a, cudaRoundZero);
}

static float __frcp_rd (float a)
{
  return __internal_frcp_kernel (a, cudaRoundMinInf);
}

static float __frcp_ru (float a)
{
  return __internal_frcp_kernel (a, cudaRoundPosInf);
}

static float __fsqrt_rn (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundNearest);
}

static float __fsqrt_rz (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundZero);
}

static float __fsqrt_rd (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundMinInf);
}

static float __fsqrt_ru (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundPosInf);
}

static float __fdiv_rn (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundNearest);
}

static float __fdiv_rz (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundZero);
}

static float __fdiv_rd (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundMinInf);
}

static float __fdiv_ru (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundPosInf);
}

static float __fadd_rd (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundMinInf);
}

static float __fadd_ru (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmul_rd (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundMinInf);
}

static float __fmul_ru (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmaf_rn (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundNearest);
}

static float __fmaf_rz (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundZero);
}

static float __fmaf_ru (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundPosInf);
}

static float __fmaf_rd (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundMinInf);
}

static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 3737 "/usr/local/cuda/bin/../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  if (__cuda___isnanf(a)) return 0.0f;
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union __cudart_FloatIntCvt u;

  u.i = a;
  return u.f;
}

static int __float_as_int(float a)
{
  volatile union __cudart_FloatIntCvt u;

  u.f = a;
  return u.i;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
        xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 4518 "/usr/local/cuda/bin/../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 4537 "/usr/local/cuda/bin/../include/device_functions.h" 3
static void __prof_trigger(int a)
{
}

static void __threadfence(void)
{
}

static void __threadfence_block(void)
{
}



static void __trap(void)
{
  __builtin_trap();
}
# 4573 "/usr/local/cuda/bin/../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0xffc00000);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __fdividef (__sinf(a), __cosf(a));

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
    res = 0;
  } else {
    res = 32;
    ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}

static unsigned int __brev(unsigned int a)
{
  a = ((a >> 1) & 0x55555555) + ((a & 0x55555555) << 1);
  a = ((a >> 2) & 0x33333333) + ((a & 0x33333333) << 2);
  a = ((a >> 4) & 0x0F0F0F0F) + ((a & 0x0F0F0F0F) << 4);
  a = ((a >> 8) & 0x00FF00FF) + ((a & 0x00FF00FF) << 8);
  a = ( a >> 16 ) + ( a << 16);
  return a;
}

static unsigned long long int __brevll(unsigned long long int a)
{
  unsigned int hi = (unsigned int)(a >> 32);
  unsigned int lo = (unsigned int)(a & 0xffffffffULL);
  unsigned int t;
  t = __brev(lo);
  lo = __brev(hi);
  return ((unsigned long long int)t << 32) + (unsigned long long int)lo;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}
# 4812 "/usr/local/cuda/bin/../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return a / b;
}



static int __internal_double2int(double a, enum cudaRoundMode rndMode);
static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode);
static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode);
static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode);

static int __double2int_rz(double a)
{
  return __internal_double2int(a, cudaRoundZero);
}

static unsigned int __double2uint_rz(double a)
{
  return __internal_double2uint(a, cudaRoundZero);
}

static long long int __double2ll_rz(double a)
{
  return __internal_double2ll(a, cudaRoundZero);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __internal_double2ull(a, cudaRoundZero);
}
# 4856 "/usr/local/cuda/bin/../include/device_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h" 1 3
# 257 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static int __iAtomicAdd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = (old >= val) ? 0 : old + 1; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = ((old == 0) | (old > val)) ? val : (old - 1); __cudaMutexOperation(0);




  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}
# 4857 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h" 1 3
# 118 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);



  return old;
}





static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 4858 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 1 3
# 267 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.i = a;
  return u.d;
}

static long long int __double_as_longlong(double a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.d = a;
  return u.i;
}

static float __internal_double2float_kernel(double a)
{
  volatile union __cudart_DoubleUlonglongCvt xx;
  volatile union __cudart_FloatUintCvt res;

  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;
  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct __cudart_UintUint xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 656 "/usr/local/cuda/bin/../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __longlong_as_double(0x8000000000000000ULL));
}
# 4859 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 1 3
# 1910 "/usr/local/cuda/bin/../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 4860 "/usr/local/cuda/bin/../include/device_functions.h" 2 3
# 945 "/usr/local/cuda/bin/../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 969 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1055 "/usr/local/cuda/bin/../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1151 "/usr/local/cuda/bin/../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
  return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
  return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1272 "/usr/local/cuda/bin/../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1286 "/usr/local/cuda/bin/../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}

static float __internal_fmad(float a, float b, float c)
{
  return a * b + c;
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = __internal_fmad (t, a2, 1.995081856004762E-001f/16.0f);
  t = __internal_fmad (t, a2, 3.333382699617026E-001f/4.0f);
  t = t * a2;
  t = __internal_fmad (t, a, a_2);
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = -5.674867153f;
  t0 = __internal_fmad (t4, -0.823362947f, t0);
  t0 = __internal_fmad (t0, t4, -6.565555096f);
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = __internal_fmad (t1, t4, 28.84246826f);
  t1 = __internal_fmad (t1, t4, 19.69667053f);
  t1 = 1.0f / t1;
  a = __internal_fmad (t0, t1, a);
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = __internal_fmad (4.114678393115178E-003f, a2, -8.231194034909670E-001f);
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = __internal_fmad (t, a, a);
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = __fdividef (t, z);
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = __internal_fmad ((float)e, 0.693147181f, z);
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = __internal_fmad (q, v, 1.99887797540072460E-001f/16.0f);
  q = __internal_fmad (q, v, 3.33333880955515580E-001f/4.0f);
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = __internal_fmad (-log_hi, v, u);
  u = __internal_fmad (-log_hi, f, u);
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) + (lo >> q);
      lo = (lo << e) + (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) + (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn (a * 0.636619772f);
  j = (float)q;
  a = __internal_fmad (-j, 1.5703125000000000e+000f, a);
  a = __internal_fmad (-j, 4.8351287841796875e-004f, a);
  a = __internal_fmad (-j, 3.1385570764541626e-007f, a);
  a = __internal_fmad (-j, 6.0771005065061922e-011f, a);
  *quadrant = q;
  return a;
}
# 1630 "/usr/local/cuda/bin/../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = __internal_fmad (j, -0.6931457519f, a);
  z = __internal_fmad (j, -1.4286067653e-6f, z);
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;

  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;

  j = __cuda_truncf(a * 3.321928094f);
  z = __internal_fmad (j, -3.0102920532226563e-001f, a);
  z = __internal_fmad (j, -7.9034171557301747e-007f, z);
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = __internal_fmad (sum, t, -0.2777655457e-2f);
      sum = __internal_fmad (sum, t, 0.83333273853e-1f);
      sum = __internal_fmad (sum, s, 0.918938533204672f);
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = -7.488903254816711E+002f;
      s = __internal_fmad (s, a, -1.234974215949363E+004f);
      s = __internal_fmad (s, a, -4.106137688064877E+004f);
      s = __internal_fmad (s, a, -4.831066242492429E+004f);
      s = __internal_fmad (s, a, -1.430333998207429E+005f);
      t = a - 2.592509840117874E+002f;
      t = __internal_fmad (t, a, -1.077717972228532E+004f);
      t = __internal_fmad (t, a, -9.268505031444956E+004f);
      t = __internal_fmad (t, a, -2.063535768623558E+005f);
      t = __fdividef (s, t);
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = 4.959849168282574E-005f;
    t = __internal_fmad (t, a, -2.208948403848352E-004f);
    t = __internal_fmad (t, a, 5.413142447864599E-004f);
    t = __internal_fmad (t, a, -1.204516976842832E-003f);
    t = __internal_fmad (t, a, 2.884251838546602E-003f);
    t = __internal_fmad (t, a, -7.382757963931180E-003f);
    t = __internal_fmad (t, a, 2.058131963026755E-002f);
    t = __internal_fmad (t, a, -6.735248600734503E-002f);
    t = __internal_fmad (t, a, 3.224670187176319E-001f);
    t = __internal_fmad (t, a, 4.227843368636472E-001f);
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = 4.588266515364258E-002f;
    t = __internal_fmad (t, a, 1.037396712740616E-001f);
    t = __internal_fmad (t, a, 1.228036339653591E-001f);
    t = __internal_fmad (t, a, 1.275242157462838E-001f);
    t = __internal_fmad (t, a, 1.432166835245778E-001f);
    t = __internal_fmad (t, a, 1.693435824224152E-001f);
    t = __internal_fmad (t, a, 2.074079329483975E-001f);
    t = __internal_fmad (t, a, 2.705875136435339E-001f);
    t = __internal_fmad (t, a, 4.006854436743395E-001f);
    t = __internal_fmad (t, a, 8.224669796332661E-001f);
    t = __internal_fmad (t, a, 5.772156651487230E-001f);
    t = t * a;
    return t;
  } else {
    t = 3.587515669447039E-003f;
    t = __internal_fmad (t, a, -5.471285428060787E-003f);
    t = __internal_fmad (t, a, -4.462712795343244E-002f);
    t = __internal_fmad (t, a, 1.673177015593242E-001f);
    t = __internal_fmad (t, a, -4.213597883575600E-002f);
    t = __internal_fmad (t, a, -6.558672843439567E-001f);
    t = __internal_fmad (t, a, 5.772153712885004E-001f);
    t = t * a;
    t = __internal_fmad (t, a, a);
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = -1.95152959e-4f;
  z = __internal_fmad (z, x2, 8.33216087e-3f);
  z = __internal_fmad (z, x2, -1.66666546e-1f);
  z = z * x2;
  z = __internal_fmad (z, x, x);
  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = __internal_fmad (z, x2, -1.38873163e-3f);
  z = __internal_fmad (z, x2, 4.16666457e-2f);
  z = __internal_fmad (z, x2, -5.00000000e-1f);
  z = __internal_fmad (z, x2, 1.00000000e+0f);
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __fadd_rn (a, -a);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = - (1.0f / z);
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = __internal_fmad (2.0f, z, __fdividef (0.125f, z));
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = __internal_fmad (z, a2, 1.983615978e-4f);
    z = __internal_fmad (z, a2, 8.333350058e-3f);
    z = __internal_fmad (z, a2, 1.666666650e-1f);
    z = z * a2;
    z = __internal_fmad (z, a, a);
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = __internal_fmad (2.0f, z, -__fdividef (0.125f, z));
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = __internal_fmad (t, z2, -5.267181327760551e-2f);
    t = __internal_fmad (t, z2, 1.332072505223051e-1f);
    t = __internal_fmad (t, z2, -3.333294663641083e-1f);
    t = t * z2;
    s = __internal_fmad (t, z, z);
  } else {
    s = 1.0f - __fdividef(2.0f,(__internal_expf_kernel(2.0f * t, 0.0f)+1.0f));
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = -0.501162291f;
  t3 = __internal_fmad (t3, t2, 0.915201485f);
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = __internal_fmad (t4, t2, 5.491230488f);
  t4 = 1.0f / t4;
  a = __internal_fmad (t3, t4, a);
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = __internal_fmad (-2.0f, t1, 1.570796327f);
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = __fdividef (a, t);
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(__internal_fmad (a, t, t));
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t =fa+__fdividef (fa,(oofa+__cuda_sqrtf(__internal_fmad(oofa,oofa,1.0f))));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = __fdividef ((2.0f * fa), (1.0f - fa));
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = __internal_fmad (-t, 0.6931457519f, a);
  z = __internal_fmad (-t, 1.4286067653e-6f, z);

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = __internal_fmad (u, z, 8.38241261853264930E-003f);
  u = __internal_fmad (u, z, 4.16678317762833940E-002f);
  u = __internal_fmad (u, z, 1.66663978874356580E-001f);
  u = __internal_fmad (u, z, 4.99999940395997040E-001f);
  u = u * z;
  u = __internal_fmad (u, z, z);
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = __internal_fmad (u, z, a);
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = __internal_fmad (t, t, 1.0f);
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t-(t-(__fdividef(s,(t*t))))*0.333333333f;
  if (__cuda___signbitf(a)) {
    t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = __internal_fmad (r, t, 4.90688891415893070E-003f);
    r = __internal_fmad (r, t, -2.67027980930150640E-002f);
    r = __internal_fmad (r, t, 1.12799056505903940E-001f);
    r = __internal_fmad (r, t, -3.76122956138427440E-001f);
    r = __internal_fmad (r, t, 1.12837911712623450E+000f);
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = __internal_fmad (t, 0.3275911f, 1.0f);
    q = 1.0f / q;
    r = 1.061405429f;
    r = __internal_fmad (r, q, -1.453152027f);
    r = __internal_fmad (r, q, 1.421413741f);
    r = __internal_fmad (r, q, -0.284496736f);
    r = __internal_fmad (r, q, 0.254829592f);
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = __internal_fmad (-q, r, 1.0f);
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfinvf (float a)
{
  float fa, t;

  fa = fabsf(a);
  if (fa >= 1.0f) {
    t = __cuda_rsqrtf (__int_as_float (0xffc00000));
    if (fa == 1.0f) {
      t = a * __int_as_float(0x7f800000);
    }
  } else if (fa > 0.9375f) {




    float p, q;

    t = __cuda_log1pf(-fa);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
    if (a < 0.0f) t = -t;
  } else if (fa > 0.75f) {




    float p, q;

    t = __internal_fmad (a, a, -0.87890625f);
    p = -7.1986748896e+0f;
    p = __internal_fmad (p, t, +1.3411974175e+1f);
    p = __internal_fmad (p, t, -5.1381573203e+0f);
    p = __internal_fmad (p, t, 4.9633374831e-1f);
    q = t -1.1436535838e+1f;
    q = __internal_fmad (q, t, 1.3568885572e+1f);
    q = __internal_fmad (q, t, -4.1747509256e+0f);
    q = __internal_fmad (q, t, 3.5327242323e-1f);
    p = __fdividef (p, q);
    t = a * p;
  } else {
    float a2;

    a2 = a * a;
    t = 6.1046168794766742E-001f;
    t = __internal_fmad (t, a2, -8.9504882462753121E-001f);
    t = __internal_fmad (t, a2, 7.0224162369928511E-001f);
    t = __internal_fmad (t, a2, -1.9993784895823222E-001f);
    t = __internal_fmad (t, a2, 1.1920613463949599E-001f);
    t = __internal_fmad (t, a2, 8.0131492246997685E-002f);
    t = __internal_fmad (t, a2, 1.2793154958377403E-001f);
    t = __internal_fmad (t, a2, 2.3200529172828793E-001f);
    t = __internal_fmad (t, a2, 8.8622695604694379E-001f);
    t = t * a;
  }
  return t;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = 4.014893410762552E-006f;
    p = __internal_fmad (p, a, 5.640401259462436E-001f);
    p = __internal_fmad (p, a, 2.626649872281140E+000f);
    p = __internal_fmad (p, a, 5.486372652389673E+000f);
    p = __internal_fmad (p, a, 5.250714831459401E+000f);
    q = a + 4.651376250488319E+000f;
    q = __internal_fmad (q, a, 1.026302828878470E+001f);
    q = __internal_fmad (q, a, 1.140762166021288E+001f);
    q = __internal_fmad (q, a, 5.251211619089947E+000f);

    h = 1.0f / q;
    q = __internal_fmad (-q * h, h, 2.0f * h);
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_erfcinvf (float a)
{
  float t;
  if (a <= 0.0f) {
    t = __int_as_float(0x7fffffff);
    if (a == 0.0f) {
      t = (1.0f - a) * __int_as_float(0x7f800000);
    }
  }
  else if (a >= 0.0625f) {
    t = __cuda_erfinvf (1.0f - a);
  }
  else {
    float p, q;
    t = __cuda_logf(a);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
  }
  return t;
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = __internal_fmad (-i, 0.5f, a);
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    if (!(fa > 0.0f)) a = a + a;
    return a;
  } else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  } else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  } else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    if (!(a > 0.0f)) orig_a = orig_a + orig_a;
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2638 "/usr/local/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2670 "/usr/local/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2723 "/usr/local/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2758 "/usr/local/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  return __fmaf_rn(a, b, c);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = __internal_fmad (t, prod.x, t);
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f / r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0 / r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = - ((b < 0.0f) ? (1.0f / a) : a);
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __cuda_rsqrtf(__int_as_float(0xffc00000));
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = -1.05767296987211380E-003f;
  t = __internal_fmad (t, a, 7.09279059435508670E-003f);
  t = __internal_fmad (t, a, -9.65347121958557050E-003f);
  t = __internal_fmad (t, a, -4.21736613253687960E-002f);
  t = __internal_fmad (t, a, 1.66542401247154280E-001f);
  t = __internal_fmad (t, a, -4.20043267827838460E-002f);
  t = __internal_fmad (t, a, -6.55878234051332940E-001f);
  t = __internal_fmad (t, a, 5.77215696929794240E-001f);
  t = __internal_fmad (t, a, 1.00000000000000000E+000f);
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = __fdividef(s, xx);
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  float u = __cuda_copysignf (0.5f, a);
  u = __cuda_truncf (a + u);
  if (fa > 8388608.0f) u = a;
  if (fa < 0.5f) u = __cuda_truncf (a);
  return u;

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3045 "/usr/local/cuda/bin/../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3176 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3734 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 61 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
static double __cuda_fabs(double a)
{
  return fabs(a);
}

static double __cuda_fmax(double a, double b)
{

  volatile union __cudart_DoubleUlonglongCvt cvta, cvtb;
  int nana, nanb;

  cvta.d = a;
  cvtb.d = b;
  nana = ((cvta.i << 1) > 0xffe0000000000000ULL);
  nanb = ((cvtb.i << 1) > 0xffe0000000000000ULL);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.d == 0.0) && (cvtb.d == 0.0)) {
    cvta.i &= cvtb.i;
    return cvta.d;
  }
  return a > b ? a : b;



}

static double __cuda_fmin(double a, double b)
{

  volatile union __cudart_DoubleUlonglongCvt cvta, cvtb;
  int nana, nanb;

  cvta.d = a;
  cvtb.d = b;
  nana = ((cvta.i << 1) > 0xffe0000000000000ULL);
  nanb = ((cvtb.i << 1) > 0xffe0000000000000ULL);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x8000000000000000ULL) {
    return __longlong_as_double(0x8000000000000000ULL) ;
  }
  return a < b ? a : b;



}

static double __cuda_ceil(double a)
{
  return ceil(a);
}

static double __cuda_floor(double a)
{
  return floor(a);
}

static double __cuda_trunc(double a)
{
  return trunc(a);
}

static double __cuda_nearbyint(double a)
{



  double res = nearbyint(a);





  return res;

}







static double __cuda_rint(double a)
{
  return __cuda_nearbyint(a);
}

static long int __cuda_lrint(double a)
{

  return (long int)__double2ll_rn(a);



}

static long long int __cuda_llrint(double a)
{
  return __double2ll_rn(a);
}

static int __cuda___signbit(double a)
{
  return (int)((unsigned int)__double2hiint(a) >> 31);
}

static int __cuda___finite(double a)
{
  return __cuda_fabs(a) < __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isinf(double a)
{
  return __cuda_fabs(a) == __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isnan(double a)
{
  return !(__cuda_fabs(a) <= __longlong_as_double(0x7ff0000000000000ULL));
}

static double __cuda_copysign(double a, double b)
{
  int alo, ahi, bhi;

  bhi = __double2hiint(b);
  alo = __double2loint(a);
  ahi = __double2hiint(a);
  ahi = (bhi & 0x80000000) | (ahi & ~0x80000000);
  return __hiloint2double(ahi, alo);
}


static unsigned long long int __cudart_i2opi_d [] = {
  0x6bfb5fb11f8d5d08ULL,
  0x3d0739f78a5292eaULL,
  0x7527bac7ebe5f17bULL,
  0x4f463f669e5fea2dULL,
  0x6d367ecf27cb09b7ULL,
  0xef2f118b5a0a6d1fULL,
  0x1ff897ffde05980fULL,
  0x9c845f8bbdf9283bULL,
  0x3991d639835339f4ULL,
  0xe99c7026b45f7e41ULL,
  0xe88235f52ebb4484ULL,
  0xfe1deb1cb129a73eULL,
  0x06492eea09d1921cULL,
  0xb7246e3a424dd2e0ULL,
  0xfe5163abdebbc561ULL,
  0xdb6295993c439041ULL,
  0xfc2757d1f534ddc0ULL,
  0xa2f9836e4e441529ULL,
};

static double __internal_trig_reduction_kerneld(double a, int *quadrant)
{
  double j;
  int q;
  if (__cuda_fabs(a) > 2147483648.0) {

    unsigned long long int ia;
    unsigned long long int s;
    unsigned long long int result[5];
    unsigned long long int phi, plo;
    unsigned long long int hi, lo;
    unsigned int e;
    int idx;

    ia = __double_as_longlong(a);
    s = ia & 0x8000000000000000ULL;
    e = (unsigned int)(((ia >> 52) & 0x7ff) - 1024);
    ia = (ia << 11) | 0x8000000000000000ULL;

    idx = 16 - (e >> 6);
    hi = 0;



    for (q = (idx-1); q < min(18,idx+3); q++) {
      plo = __cudart_i2opi_d[q] * ia;
      phi = __umul64hi (__cudart_i2opi_d[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q-(idx-1)] = lo;
    }
    result[q-(idx-1)] = hi;
    e = e & 63;



    hi = result[3];
    lo = result[2];
    if (e) {
      q = 64 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[1] >> q);
    }
    q = (int)(hi >> 62);

    hi = (hi << 2) | (lo >> 62);
    lo = (lo << 2);
    e = (hi | (lo > 0)) > 0x8000000000000000ULL;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned long long int t;
      hi = ~hi;
      lo = -(long long int)lo;
      t = (lo == 0ULL);
      hi += t;
      s = s ^ 0x8000000000000000ULL;
    }
    *quadrant = q;

    e = 0;
    while ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xC90FDAA22168C235ULL;
    hi = __umul64hi (hi, 0xC90FDAA22168C235ULL);
    if ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | ((((unsigned long long int)(e + 1022)) << 52) + (hi >> 11) +
              ((hi << 53) >= 0x8000000000000000ULL));
    return __longlong_as_double(ia);
  }

  q = __double2int_rn (a * 6.3661977236758138e-1);
  j = (double)q;




  a = __fma_rn (-j, 1.5707963267948966e+000, a);
  a = __fma_rn (-j, 6.1232339957367574e-017, a);
  a = __fma_rn (-j, 8.4784276603688985e-032, a);
  *quadrant = q;
  return a;
}


static double __internal_sin_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = 1.5896230157221844E-010;
  z = __fma_rn (z, x2, -2.5050747762850355E-008);
  z = __fma_rn (z, x2, 2.7557313621385676E-006);
  z = __fma_rn (z, x2, -1.9841269829589539E-004);
  z = __fma_rn (z, x2, 8.3333333333221182E-003);
  z = __fma_rn (z, x2, -1.6666666666666630E-001);
  z = z * x2;
  z = __fma_rn (z, x, x);
  return z;
}


static double __internal_cos_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = -1.136788825395985E-011;
  z = __fma_rn (z, x2, 2.087588480545065E-009);
  z = __fma_rn (z, x2, -2.755731555403950E-007);
  z = __fma_rn (z, x2, 2.480158729365970E-005);
  z = __fma_rn (z, x2, -1.388888888888074E-003);
  z = __fma_rn (z, x2, 4.166666666666664E-002);
  z = __fma_rn (z, x2, -5.000000000000000E-001);
  z = __fma_rn (z, x2, 1.000000000000000E+000);
  return z;
}


static double __internal_tan_kerneld(double x, int i)
{
  double x2, z, q;
  x2 = x * x;
  z = 9.8006287203286300E-006;
  z = __fma_rn (z, x2, -2.4279526494179897E-005);
  z = __fma_rn (z, x2, 4.8644173130937162E-005);
  z = __fma_rn (z, x2, -2.5640012693782273E-005);
  z = __fma_rn (z, x2, 6.7223984330880073E-005);
  z = __fma_rn (z, x2, 8.3559287318211639E-005);
  z = __fma_rn (z, x2, 2.4375039850848564E-004);
  z = __fma_rn (z, x2, 5.8886487754856672E-004);
  z = __fma_rn (z, x2, 1.4560454844672040E-003);
  z = __fma_rn (z, x2, 3.5921008885857180E-003);
  z = __fma_rn (z, x2, 8.8632379218613715E-003);
  z = __fma_rn (z, x2, 2.1869488399337889E-002);
  z = __fma_rn (z, x2, 5.3968253972902704E-002);
  z = __fma_rn (z, x2, 1.3333333333325342E-001);
  z = __fma_rn (z, x2, 3.3333333333333381E-001);
  z = z * x2;
  q = __fma_rn (z, x, x);
  if (i) {
    double s = q - x;
    double w = __fma_rn (z, x, -s);
    z = 1.0 / q;
    z = -z;
    s = __fma_rn (q, z, 1.0);
    q = __fma_rn (z, __fma_rn (z, w, s), z);
  }
  return q;
}

static double __cuda_sqrt(double a)
{
  return sqrt(a);
}

static double __cuda_rsqrt(double a)
{

    return 1.0 / sqrt(a);



}


static double __internal_expm1_kernel (double a)
{
  double t;
  t = 2.08842685477913050E-009;
  t = __fma_rn (t, a, 2.51366409033551950E-008);
  t = __fma_rn (t, a, 2.75574612072447230E-007);
  t = __fma_rn (t, a, 2.75571539284473460E-006);
  t = __fma_rn (t, a, 2.48015869443077950E-005);
  t = __fma_rn (t, a, 1.98412699878799470E-004);
  t = __fma_rn (t, a, 1.38888888892029890E-003);
  t = __fma_rn (t, a, 8.33333333327662860E-003);
  t = __fma_rn (t, a, 4.16666666666656370E-002);
  t = __fma_rn (t, a, 1.66666666666667380E-001);
  t = __fma_rn (t, a, 5.00000000000000000E-001);
  t = t * a;
  t = __fma_rn (t, a, a);
  return t;
}


static double __internal_atanh_kernel (double a_1, double a_2)
{
  double a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 7.597322383488143E-002/65536.0;
  t = __fma_rn (t, a2, 6.457518383364042E-002/16384.0);
  t = __fma_rn (t, a2, 7.705685707267146E-002/4096.0);
  t = __fma_rn (t, a2, 9.090417561104036E-002/1024.0);
  t = __fma_rn (t, a2, 1.111112158368149E-001/256.0);
  t = __fma_rn (t, a2, 1.428571416261528E-001/64.0);
  t = __fma_rn (t, a2, 2.000000000069858E-001/16.0);
  t = __fma_rn (t, a2, 3.333333333333198E-001/4.0);
  t = t * a2;
  t = __fma_rn (t, a, a_2);
  t = t + a_1;
  return t;
}

static double __internal_exp2i_kernel(int b)
{
  return __hiloint2double((b + 1023) << 20, 0);
}

static double __internal_half(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi - 0x00100000, ilo);
}

static double __internal_twice(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi + 0x00100000, ilo);
}

static double __cuda_sin(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a) || (a == 0.0)) {
    return __dmul_rn(a, 0.0);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static double __cuda_cos(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  double t, u, s, c;
  int i;
  if (__cuda___isinf(a)) {
    *sptr = __longlong_as_double(0xfff8000000000000ULL);
    *cptr = __longlong_as_double(0xfff8000000000000ULL);
    return;
  }
  if (a == 0.0) {
    *sptr = a;
    *cptr = 1.0;
    return;
  }
  t = __internal_trig_reduction_kerneld(a, &i);
  u = __internal_cos_kerneld(t);
  t = __internal_sin_kerneld(t);
  if (i & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (i & 2) {
    s = -s;
  }
  i++;
  if (i & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;
}

static double __cuda_tan(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  z = __internal_tan_kerneld(z, i & 1);
  return z;
}

static double __cuda_log(double a)
{
  double m, f, g, u, v, tmp, q, ulo, log_lo, log_hi;
  int ihi, ilo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);

  if ((a > 0.0) && (a < __longlong_as_double(0x7ff0000000000000ULL))) {
    int e = -1023;

    if ((unsigned)ihi < (unsigned)0x00100000) {
      a = a * 18014398509481984.0;
      e -= 54;
      ihi = __double2hiint(a);
      ilo = __double2loint(a);
    }



    e += ((ihi >> 20) & 0x7ff);
    ihi = (ihi & 0x800fffff) | 0x3ff00000;
    m = __hiloint2double (ihi, ilo);
    if ((unsigned)ihi > (unsigned)0x3ff6a09e) {
      m = __internal_half(m);
      e = e + 1;
    }

    f = m - 1.0;
    g = m + 1.0;
    g = 1.0 / g;
    u = f * g;
    u = u + u;

    v = u * u;
    q = 6.7261411553826339E-2/65536.0;
    q = __fma_rn (q, v, 6.6133829643643394E-2/16384.0);
    q = __fma_rn (q, v, 7.6940931149150890E-2/4096.0);
    q = __fma_rn (q, v, 9.0908745692137444E-2/1024.0);
    q = __fma_rn (q, v, 1.1111111499059706E-1/256.0);
    q = __fma_rn (q, v, 1.4285714283305975E-1/64.0);
    q = __fma_rn (q, v, 2.0000000000007223E-1/16.0);
    q = __fma_rn (q, v, 3.3333333333333326E-1/4.0);
    tmp = __internal_twice (f - u);
    tmp = __fma_rn (-u, f, tmp);
    ulo = g * tmp;

    q = q * v;
    q = q * u;

    log_hi = u;
    log_lo = ulo + q;

    q = __fma_rn ( e, 6.9314718055994529e-1, log_hi);
    tmp = __fma_rn (-e, 6.9314718055994529e-1, q);
    tmp = tmp - log_hi;
    log_hi = q;
    log_lo = log_lo - tmp;
    log_lo = __fma_rn (e, 2.3190468138462996e-17, log_lo);
    return log_hi + log_lo;
  } else {
    if (__cuda___isnan(a)) {
      return a + a;
    }

    if (a == 0) {
      return -__longlong_as_double(0x7ff0000000000000ULL);
    }

    if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
      return a;
    }

    return __longlong_as_double(0xfff8000000000000ULL);
  }
}


static double2 __internal_ddadd_xgty (double2 x, double2 y)
{
  double2 z;

  volatile

  double r, s, e;
  r = x.y + y.y;
  e = x.y - r;
  s = ((e + y.y) + y.x) + x.x;
  z.y = e = r + s;
  z.x = (r - e) + s;
  return z;
}


static double2 __internal_ddmul (double2 x, double2 y)
{

  volatile

  double e;
  double2 t, z;
  t.y = x.y * y.y;
  t.x = __fma_rn (x.y, y.y, -t.y);
  t.x = __fma_rn (x.x, y.x, t.x);
  t.x = __fma_rn (x.y, y.x, t.x);
  t.x = __fma_rn (x.x, y.y, t.x);
  z.y = e = t.y + t.x;
  z.x = (t.y - e) + t.x;
  return z;
}

static double2 __internal_log_ext_prec(double a)
{
  double2 res;
  double2 qq, cc, uu, tt;
  double f, g, u, v, q, ulo, tmp, m;
  int ilo, ihi, expo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  expo = (ihi >> 20) & 0x7ff;

  if (expo == 0) {
    a *= 18014398509481984.0;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
    expo = (ihi >> 20) & 0x7ff;
    expo -= 54;
  }
  expo -= 1023;




  ihi = (ihi & 0x800fffff) | 0x3ff00000;
  m = __hiloint2double (ihi, ilo);
  if ((unsigned)ihi > (unsigned)0x3ff6a09e) {
    m = __internal_half(m);
    expo = expo + 1;
  }





  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.6253631649203309E-2/65536.0;
  q = __fma_rn (q, v, 6.6250935587260612E-2/16384.0);
  q = __fma_rn (q, v, 7.6935437806732829E-2/4096.0);
  q = __fma_rn (q, v, 9.0908878711093280E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111322892790E-1/256.0);
  q = __fma_rn (q, v, 1.4285714284546502E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000003113E-1/16.0);
  q = q * v;

  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  qq.y = q;
  qq.x = 0.0;
  uu.y = u;
  uu.x = ulo;
  cc.y = 3.3333333333333331E-1/4.0;
  cc.x = -9.8201492846582465E-18/4.0;
  qq = __internal_ddadd_xgty (cc, qq);

  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  uu = __internal_ddadd_xgty (uu, qq);
  u = uu.y;
  ulo = uu.x;

  tt.y = expo * 6.9314718055966296e-001;
  tt.x = expo * 2.8235290563031577e-013;

  res = __internal_ddadd_xgty (tt, uu);
  return res;
}

static double __cuda_log2(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 1.4426950408889634e+0, t * 2.0355273740931033e-17);
}

static double __cuda_log10(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 4.3429448190325182e-1, t * 1.09831965021676510e-17);
}

static double __cuda_log1p(double a)
{
  double t;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x3fe55555) || ((int)i < (int)0xbfd99999)) {

    t = a + 2.0;
    t = a / t;
    t = -a * t;
    t = __internal_atanh_kernel(a, t);
    return t;
  }
  return __cuda_log (a + 1.0);
}

static double __internal_exp_kernel(double a, int scale)
{
  double t, fac, z;
  int i;

  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  t = __internal_expm1_kernel(z);
  z = __internal_exp2i_kernel(i + scale - 1);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp(double a)
{
  double t;
  int i;
  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40862e43) || ((int)i < (int)0xC0874911)) {
    t = __internal_exp_kernel(a, 0);
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_exp2(double a)
{
  double z;
  double t;
  double fac;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40900000) || ((int)i < (int)0xc090cc00)) {
    t = __cuda_rint (a);
    z = a - t;
    i = (int)t;
    fac = 2.0;
    if (i <= -1021) {
      i += 55;
      fac = 5.5511151231257827e-17;
    }

    z = __fma_rn (z, 6.9314718055994529e-1, z * 2.3190468138462996e-17);
    t = __internal_expm1_kernel(z);
    z = __internal_exp2i_kernel(i - 1);
    t = __fma_rn (t, z, z);
    t = t * fac;
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_exp10(double a)
{
  double z;
  double t;
  double fac;
  int i;

  i = __double2hiint(a);
  if (((unsigned)i < (unsigned)0x40734414) || ((int)i < (int)0xc07439b8)) {
    t = __cuda_rint (a * 3.3219280948873622e+0);
    i = (int)t;
    z = __fma_rn (t, -3.0102999566398120e-1, a);
    z = __fma_rn (t, -(-2.8037281277851704e-18), z);
    fac = 2.0;
    if (i <= -1021) {
      i += 55;
      fac = 5.5511151231257827e-17;
    }

    z = __fma_rn (z, 2.3025850929940459e+0, z * (-2.1707562233822494e-16));
    t = __internal_expm1_kernel(z);
    z = __internal_exp2i_kernel(i - 1);
    t = __fma_rn (t, z, z);
    t = t * fac;
    return t;
  }
  t = ((unsigned int)i >> 31) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_expm1(double a)
{
  double t, z, u;
  int i, j, k;

  k = __double2hiint(a);
  if (((unsigned)k < (unsigned)0x40862e43) || ((int)k < (int)0xc04a8000)) {
    t = __cuda_rint (a * 1.4426950408889634e+0);
    i = (int)t;
    z = __fma_rn (t, -6.9314718055994529e-1, a);
    z = __fma_rn (t, -2.3190468138462996e-17, z);
    k = k + k;
    if ((unsigned)k < (unsigned)0x7fb3e647) {
      z = a;
      i = 0;
    }
    t = __internal_expm1_kernel(z);
    j = i;
    if (i == 1024) j--;
    u = __internal_exp2i_kernel(j);
    a = u - 1.0;
    t = __fma_rn (t, u, a);
    if (i == 1024) t = t + t;
    if (k == 0) t = z;
    return t;
  }
  t = ((unsigned int)k >> 31) ? -1.0 : __longlong_as_double(0x7ff0000000000000ULL);
  if (__cuda___isnan(a)) {
    t = a + a;
  }
  return t;
}

static double __cuda_cosh(double a)
{
  double z;
  int i;

  z = __cuda_fabs(a);
  i = __double2hiint(z);
  if ((unsigned)i < (unsigned)0x408633cf) {
    z = __internal_exp_kernel(z, -2);
    z = __fma_rn(2.0, z, 0.125 / z);
    return z;
  } else {
    if (z > 0.0) a = __int_as_float(0x7f800000);
    return a + a;
  }
}

static double __cuda_sinh(double a)
{
  double s, z;
  s = a;
  a = __cuda_fabs(a);
  if (a < 1.0) {
    double a2 = a * a;

    z = 1.632386098183803E-010;
    z = __fma_rn (z, a2, 2.504854501385687E-008);
    z = __fma_rn (z, a2, 2.755734274788706E-006);
    z = __fma_rn (z, a2, 1.984126976294102E-004);
    z = __fma_rn (z, a2, 8.333333333452911E-003);
    z = __fma_rn (z, a2, 1.666666666666606E-001);
    z = z * a2;
    z = __fma_rn (z, a, a);
  } else if (a < 2.0) {
    z = __cuda_expm1(a);
    z = __internal_half (z + z / (z + 1.0));
  } else {
    z = __internal_exp_kernel(a, -1);
    z = z + (1.0 / (-4.0 * z));
    if (a >= 7.1047586007394398e+2) {
      z = __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  z = __cuda_copysign(z, s);
  return z;
}

static double __cuda_tanh(double a)
{
  double t;
  t = __cuda_fabs(a);
  if (t >= 0.55) {
    double s;
    s = 1.0 - 2.0 / (__internal_exp_kernel(2.0 * t, 0) + 1.0);
    if (t > 350.0) {
      s = 1.0;
    }
    a = __cuda_copysign(s, a);
  } else {
    double a2;
    a2 = a * a;
    t = 5.102147717274194E-005;
    t = __fma_rn (t, a2, -2.103023983278533E-004);
    t = __fma_rn (t, a2, 5.791370145050539E-004);
    t = __fma_rn (t, a2, -1.453216755611004E-003);
    t = __fma_rn (t, a2, 3.591719696944118E-003);
    t = __fma_rn (t, a2, -8.863194503940334E-003);
    t = __fma_rn (t, a2, 2.186948597477980E-002);
    t = __fma_rn (t, a2, -5.396825387607743E-002);
    t = __fma_rn (t, a2, 1.333333333316870E-001);
    t = __fma_rn (t, a2, -3.333333333333232E-001);
    t = t * a2;
    t = __fma_rn (t, a, a);
    a = __cuda_copysign(t, a);
  }
  return a;
}

static double __internal_atan_kernel(double a)
{
  double t, a2;
  a2 = a * a;
  t = -2.0258553044438358E-005 ;
  t = __fma_rn (t, a2, 2.2302240345758510E-004);
  t = __fma_rn (t, a2, -1.1640717779930576E-003);
  t = __fma_rn (t, a2, 3.8559749383629918E-003);
  t = __fma_rn (t, a2, -9.1845592187165485E-003);
  t = __fma_rn (t, a2, 1.6978035834597331E-002);
  t = __fma_rn (t, a2, -2.5826796814495994E-002);
  t = __fma_rn (t, a2, 3.4067811082715123E-002);
  t = __fma_rn (t, a2, -4.0926382420509971E-002);
  t = __fma_rn (t, a2, 4.6739496199157994E-002);
  t = __fma_rn (t, a2, -5.2392330054601317E-002);
  t = __fma_rn (t, a2, 5.8773077721790849E-002);
  t = __fma_rn (t, a2, -6.6658603633512573E-002);
  t = __fma_rn (t, a2, 7.6922129305867837E-002);
  t = __fma_rn (t, a2, -9.0909012354005225E-002);
  t = __fma_rn (t, a2, 1.1111110678749424E-001);
  t = __fma_rn (t, a2, -1.4285714271334815E-001);
  t = __fma_rn (t, a2, 1.9999999999755019E-001);
  t = __fma_rn (t, a2, -3.3333333333331860E-001);
  t = t * a2;
  t = __fma_rn (t, a, a);
  return t;
}

static double __cuda_atan2(double a, double b)
{
  double t0, t1, t3;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }


  t3 = __cuda_fabs(b);
  t1 = __cuda_fabs(a);
  if (t3 == 0.0 && t1 == 0.0) {
    t3 = __cuda___signbit(b) ? 3.1415926535897931e+0 : 0;
  } else if (__cuda___isinf(t3) && __cuda___isinf(t1)) {
    t3 = __cuda___signbit(b) ? 2.3561944901923448e+0 : 7.8539816339744828e-1;
  } else {
    t0 = __cuda_fmax (t1, t3);
    t1 = __cuda_fmin (t1, t3);
    t3 = t1 / t0;
    t3 = __internal_atan_kernel(t3);

    if (__cuda_fabs(a) > __cuda_fabs(b)) t3 = 1.5707963267948966e+0 - t3;
    if (b < 0.0) t3 = 3.1415926535897931e+0 - t3;
  }
  t3 = __cuda_copysign(t3, a);
  return t3;
}

static double __cuda_atan(double a)
{
  double t0, t1;

  t0 = __cuda_fabs(a);
  t1 = t0;
  if (t0 > 1.0) {
    t1 = 1.0 / t1;
  }

  t1 = __internal_atan_kernel(t1);

  if (t0 > 1.0) {
    t1 = 1.5707963267948966e+0 - t1;
  }
  return __cuda_copysign (t1, a);
}


static double __internal_asin_kernel(double a, double b)
{
  double r;
  r = 6.259798167646803E-002;
  r = __fma_rn (r, b, -7.620591484676952E-002);
  r = __fma_rn (r, b, 6.686894879337643E-002);
  r = __fma_rn (r, b, -1.787828218369301E-002);
  r = __fma_rn (r, b, 1.745227928732326E-002);
  r = __fma_rn (r, b, 1.000422754245580E-002);
  r = __fma_rn (r, b, 1.418108777515123E-002);
  r = __fma_rn (r, b, 1.733194598980628E-002);
  r = __fma_rn (r, b, 2.237350511593569E-002);
  r = __fma_rn (r, b, 3.038188875134962E-002);
  r = __fma_rn (r, b, 4.464285849810986E-002);
  r = __fma_rn (r, b, 7.499999998342270E-002);
  r = __fma_rn (r, b, 1.666666666667375E-001);
  r = r * b;
  return r;
}

static double __cuda_asin(double a)
{
  double fa, t0, t1;
  int ihi, ahi;
  ahi = __double2hiint(a);
  fa = __cuda_fabs(a);
  ihi = __double2hiint(fa);
  if (ihi < 0x3fe26666) {
    t1 = fa * fa;
    t1 = __internal_asin_kernel (fa, t1);
    t1 = __fma_rn (t1, fa, fa);
    t1 = __cuda_copysign(t1, a);
  } else {
    t1 = __fma_rn (-0.5, fa, 0.5);
    t0 = __cuda_sqrt (t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = -2.0 * t0;
    t1 = __fma_rn (t0, t1, 6.1232339957367660e-17);
    t0 = t0 + 7.8539816339744828e-1;
    t1 = t0 + t1;
    t1 = t1 + 7.8539816339744828e-1;
    if (ahi < 0x3ff00000) {
      t1 = __cuda_copysign(t1, a);
    }
  }
  return t1;
}

static double __cuda_acos(double a)
{
  double t0, t1;
  int ihi, ahi;


  if (__cuda___isnan(a)) {
    return a + a;
  }

  ahi = __double2hiint(a);
  t0 = __cuda_fabs (a);
  ihi = __double2hiint(t0);
  if (ihi < 0x3fe26666) {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    if ((unsigned)ahi >= (unsigned)0x80000000) {
      t0 = __fma_rn (1.0, t0, +6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 + t0;
    } else {
      t0 = __fma_rn (1.0, t0, -6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 - t0;
    }
  } else {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt(t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    t0 = 2.0 * t0;
    if ((unsigned)ahi >= (unsigned)0x80000000) {
      t0 = __fma_rn (1.0, t0, -1.2246467991473532e-16);
      t0 = 3.1415926535897931e+0 - t0;
    }
  }
  return t0;
}

static double __cuda_acosh(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = a - 1.0;
  if (__cuda_fabs(t) > 4503599627370496.0) {

    return 6.9314718055994529e-1 + __cuda_log(a);
  } else {
    t = t + __cuda_sqrt(__fma_rn(a, t, t));
    return __cuda_log1p(t);
  }
}

static double __cuda_asinh(double a)
{
# 1164 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
  double fa, t;
  fa = __cuda_fabs(a);
  if (fa > 1.0e153) {
    t = 6.9314718055994529e-1 + __cuda_log(fa);
  } else {
    t = fa * fa;
    t = __cuda_log1p (fa + t / (1.0 + __cuda_sqrt(1.0 + t)));
  }

  return __cuda_copysign(t, a);
}

static double __cuda_atanh(double a)
{
  double fa, t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  fa = __cuda_fabs(a);
  t = (2.0 * fa) / (1.0 - fa);
  t = 0.5 * __cuda_log1p(t);

  if (__cuda___isnan(t)) {
    return t;
  }

  if (__cuda___signbit(a)) {
    t = -t;
  }
  return t;
}

static double __cuda_hypot(double a, double b)
{
  double v, w, t;
  if (__cuda___isinf(a) || __cuda___isinf(b)) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  v = __cuda_fmax(a, b);
  w = __cuda_fmin(a, b);
  t = w / v;
  t = __fma_rn (t, t, 1.0);
  t = v * __cuda_sqrt(t);
  if (v == 0.0) {
    t = v + w;
  }
  return t;
}

static double __cuda_cbrt(double a)
{
  float s;
  double t, r;
  int ilo, ihi, expo, nexpo, denorm;
  if ((a == 0.0) || !(__cuda___finite(a))) {
    return a + a;
  }
  t = __cuda_fabs(a);
  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  denorm = 0;
  if (expo == 0) {

    t = t * 18014398509481984.0;
    denorm = 18;
    ilo = __double2loint(t);
    ihi = __double2hiint(t);
    expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  }

  nexpo = __float2int_rn(0.333333333f * (float)(expo - 1022));
  ihi -= (3 * nexpo) << 20;
  r = __hiloint2double(ihi, ilo);

  s = (float)r;
  t = __cuda_exp2f(0.333333333f * __log2f(s));

  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;
  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;

  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  ihi += (nexpo - denorm) << 20;
  t = __hiloint2double(ihi, ilo);
  if (__cuda___signbit(a)) {
     t = -t;
  }
  return t;
}

static double __internal_accurate_pow(double a, double b)
{
  double2 loga;
  double2 prod;
  double t_hi, t_lo;
  double tmp;



  double e;



  loga = __internal_log_ext_prec(a);


  if (__cuda_fabs(b) > 1e304) b *= 1.220703125e-4;

  t_hi = loga.y * b;
  t_lo = __fma_rn (loga.y, b, -t_hi);
  t_lo = __fma_rn (loga.x, b, t_lo);
  prod.y = e = t_hi + t_lo;
  prod.x = (t_hi - e) + t_lo;


  tmp = __cuda_exp(prod.y);

  if (!__cuda___isinf(tmp)) {



    tmp = __fma_rn (tmp, prod.x, tmp);
  }
  return tmp;
}

static double __cuda_pow(double a, double b)
{
  int bIsOddInteger;
  double t;
  if (a == 1.0 || b == 0.0) {
    return 1.0;
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return __cuda___signbit(b) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isinf(b)) {
    if (a == -1.0) {
      return 1.0;
    }
    t = __cuda_fabs(a) > 1.0 ? __longlong_as_double(0x7ff0000000000000ULL) : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0 * __cuda_floor(0.5 * b))) == 1.0;
  if (a == 0.0) {
    t = bIsOddInteger ? a : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  if (a == -__longlong_as_double(0x7ff0000000000000ULL)) {
    t = (b < 0.0) ? -1.0/a : -a;
    if (bIsOddInteger) {
      t = __longlong_as_double(__double_as_longlong(t)^0x8000000000000000ULL);
    }
    return t;
  }
  if ((a < 0.0) && (b != __cuda_trunc(b))) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  t = __cuda_fabs(a);
  t = __internal_accurate_pow(t, b);
  if ((a < 0.0) && bIsOddInteger) {
    t = __longlong_as_double(__double_as_longlong(t) ^ 0x8000000000000000ULL);
  }
  return t;
}

static double __cuda_erf(double a)
{
  double t, r, q;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = __cuda_fabs(a);
  if (t >= 1.0) {
    r = -1.28836351230756500E-019;
    r = __fma_rn (r, t, 1.30597472161093370E-017);
    r = __fma_rn (r, t, -6.33924401259620500E-016);
    r = __fma_rn (r, t, 1.96231865908940140E-014);
    r = __fma_rn (r, t, -4.35272243559990750E-013);
    r = __fma_rn (r, t, 7.37083927929352150E-012);
    r = __fma_rn (r, t, -9.91402142550461630E-011);
    r = __fma_rn (r, t, 1.08817017167760820E-009);
    r = __fma_rn (r, t, -9.93918713097634620E-009);
    r = __fma_rn (r, t, 7.66739923255145500E-008);
    r = __fma_rn (r, t, -5.05440278302806720E-007);
    r = __fma_rn (r, t, 2.87474157099000620E-006);
    r = __fma_rn (r, t, -1.42246725399722510E-005);
    r = __fma_rn (r, t, 6.16994555079419460E-005);
    r = __fma_rn (r, t, -2.36305221938908790E-004);
    r = __fma_rn (r, t, 8.05032844055371070E-004);
    r = __fma_rn (r, t, -2.45833366629108140E-003);
    r = __fma_rn (r, t, 6.78340988296706120E-003);
    r = __fma_rn (r, t, -1.70509103597554640E-002);
    r = __fma_rn (r, t, 3.93322852515666300E-002);
    r = __fma_rn (r, t, -8.37271292613764040E-002);
    r = __fma_rn (r, t, 1.64870423707623280E-001);
    r = __fma_rn (r, t, -2.99729521787681470E-001);
    r = __fma_rn (r, t, 4.99394435612628580E-001);
    r = __fma_rn (r, t, -7.52014596480123030E-001);
    r = __fma_rn (r, t, 9.99933138314926250E-001);
    r = __fma_rn (r, t, -1.12836725321102670E+000);
    r = __fma_rn (r, t, 9.99998988715182450E-001);
    q = __internal_exp_kernel(-t * t, 0);
    r = __fma_rn (r, -q, 1.0);
    if (t >= 6.5) {
      r = 1.0;
    }
    a = __cuda_copysign (r, a);
  } else {
    q = t * t;
    r = -7.77946848895991420E-010;
    r = __fma_rn (r, q, 1.37109803980285950E-008);
    r = __fma_rn (r, q, -1.62063137584932240E-007);
    r = __fma_rn (r, q, 1.64471315712790040E-006);
    r = __fma_rn (r, q, -1.49247123020098620E-005);
    r = __fma_rn (r, q, 1.20552935769006260E-004);
    r = __fma_rn (r, q, -8.54832592931448980E-004);
    r = __fma_rn (r, q, 5.22397760611847340E-003);
    r = __fma_rn (r, q, -2.68661706431114690E-002);
    r = __fma_rn (r, q, 1.12837916709441850E-001);
    r = __fma_rn (r, q, -3.76126389031835210E-001);
    r = __fma_rn (r, q, 1.12837916709551260E+000);
    a = r * a;
  }
  return a;
}

static double __cuda_erfinv(double a)
{
  double fa, t;

  fa = fabs(a);
  if (fa >= 1.0) {
    t = __longlong_as_double(0xfff8000000000000ULL);
    if (fa == 1.0) {
      t = a * __longlong_as_double(0x7ff0000000000000ULL);
    }
  } else if (fa >= 0.9375) {




    double p, q;

    t = __cuda_log1p(-fa);
    t = __cuda_rsqrt(-t);
    p = 2.7834010353747001060e-3;
    p = __fma_rn (p, t, 8.6030097526280260580e-1);
    p = __fma_rn (p, t, 2.1371214997265515515e+0);
    p = __fma_rn (p, t, 3.1598519601132090206e+0);
    p = __fma_rn (p, t, 3.5780402569085996758e+0);
    p = __fma_rn (p, t, 1.5335297523989890804e+0);
    p = __fma_rn (p, t, 3.4839207139657522572e-1);
    p = __fma_rn (p, t, 5.3644861147153648366e-2);
    p = __fma_rn (p, t, 4.3836709877126095665e-3);
    p = __fma_rn (p, t, 1.3858518113496718808e-4);
    p = __fma_rn (p, t, 1.1738352509991666680e-6);
    q = t+ 2.2859981272422905412e+0;
    q = __fma_rn (q, t, 4.3859045256449554654e+0);
    q = __fma_rn (q, t, 4.6632960348736635331e+0);
    q = __fma_rn (q, t, 3.9846608184671757296e+0);
    q = __fma_rn (q, t, 1.6068377709719017609e+0);
    q = __fma_rn (q, t, 3.5609087305900265560e-1);
    q = __fma_rn (q, t, 5.3963550303200816744e-2);
    q = __fma_rn (q, t, 4.3873424022706935023e-3);
    q = __fma_rn (q, t, 1.3858762165532246059e-4);
    q = __fma_rn (q, t, 1.1738313872397777529e-6);
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    double p, q;

    t = __fma_rn (a, a, -.87890625);
    p = .21489185007307062000e+0;
    p = __fma_rn (p, t, -.64200071507209448655e+1);
    p = __fma_rn (p, t, .29631331505876308123e+2);
    p = __fma_rn (p, t, -.47644367129787181803e+2);
    p = __fma_rn (p, t, .34810057749357500873e+2);
    p = __fma_rn (p, t, -.12954198980646771502e+2);
    p = __fma_rn (p, t, .25349389220714893917e+1);
    p = __fma_rn (p, t, -.24758242362823355486e+0);
    p = __fma_rn (p, t, .94897362808681080020e-2);
    q = t -.12831383833953226499e+2;
    q = __fma_rn (q, t, .41409991778428888716e+2);
    q = __fma_rn (q, t, -.53715373448862143349e+2);
    q = __fma_rn (q, t, .33880176779595142685e+2);
    q = __fma_rn (q, t, -.11315360624238054876e+2);
    q = __fma_rn (q, t, .20369295047216351160e+1);
    q = __fma_rn (q, t, -.18611650627372178511e+0);
    q = __fma_rn (q, t, .67544512778850945940e-2);
    p = p / q;
    t = a * p;
  } else {




    double p, q;

    t = __fma_rn (a, a, -.5625);
    p = -.23886240104308755900e+2;
    p = __fma_rn (p, t, .45560204272689128170e+3);
    p = __fma_rn (p, t, -.22977467176607144887e+4);
    p = __fma_rn (p, t, .46631433533434331287e+4);
    p = __fma_rn (p, t, -.43799652308386926161e+4);
    p = __fma_rn (p, t, .19007153590528134753e+4);
    p = __fma_rn (p, t, -.30786872642313695280e+3);
    q = t -.83288327901936570000e+2;
    q = __fma_rn (q, t, .92741319160935318800e+3);
    q = __fma_rn (q, t, -.35088976383877264098e+4);
    q = __fma_rn (q, t, .59039348134843665626e+4);
    q = __fma_rn (q, t, -.48481635430048872102e+4);
    q = __fma_rn (q, t, .18997769186453057810e+4);
    q = __fma_rn (q, t, -.28386514725366621129e+3);
    p = p / q;
    t = a * p;
  }
  return t;
}

static double __cuda_erfcinv(double a)
{
  double t;

  if (__cuda___isnan(a)) return a + a;

  if (a <= 0.0) {
    t = __longlong_as_double(0xfff8000000000000ULL);
    if (a == 0.0) {
      t = (1.0 - a) * __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  else if (a >= 0.0625) {
    t = __cuda_erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = __cuda_log(a);
    t = __cuda_rsqrt(-t);
    p = 2.7834010353747001060e-3;
    p = __fma_rn (p, t, 8.6030097526280260580e-1);
    p = __fma_rn (p, t, 2.1371214997265515515e+0);
    p = __fma_rn (p, t, 3.1598519601132090206e+0);
    p = __fma_rn (p, t, 3.5780402569085996758e+0);
    p = __fma_rn (p, t, 1.5335297523989890804e+0);
    p = __fma_rn (p, t, 3.4839207139657522572e-1);
    p = __fma_rn (p, t, 5.3644861147153648366e-2);
    p = __fma_rn (p, t, 4.3836709877126095665e-3);
    p = __fma_rn (p, t, 1.3858518113496718808e-4);
    p = __fma_rn (p, t, 1.1738352509991666680e-6);
    q = t+ 2.2859981272422905412e+0;
    q = __fma_rn (q, t, 4.3859045256449554654e+0);
    q = __fma_rn (q, t, 4.6632960348736635331e+0);
    q = __fma_rn (q, t, 3.9846608184671757296e+0);
    q = __fma_rn (q, t, 1.6068377709719017609e+0);
    q = __fma_rn (q, t, 3.5609087305900265560e-1);
    q = __fma_rn (q, t, 5.3963550303200816744e-2);
    q = __fma_rn (q, t, 4.3873424022706935023e-3);
    q = __fma_rn (q, t, 1.3858762165532246059e-4);
    q = __fma_rn (q, t, 1.1738313872397777529e-6);
    t = p / (q * t);
  }
  else {




    double p, q;
    t = __cuda_log(a);
    t = __cuda_rsqrt(-t);
    p = 6.9952990607058154858e-1;
    p = __fma_rn (p, t, 1.9507620287580568829e+0);
    p = __fma_rn (p, t, 8.2810030904462690216e-1);
    p = __fma_rn (p, t, 1.1279046353630280005e-1);
    p = __fma_rn (p, t, 6.0537914739162189689e-3);
    p = __fma_rn (p, t, 1.3714329569665128933e-4);
    p = __fma_rn (p, t, 1.2964481560643197452e-6);
    p = __fma_rn (p, t, 4.6156006321345332510e-9);
    p = __fma_rn (p, t, 4.5344689563209398450e-12);
    q = t+ 1.5771922386662040546e+0;
    q = __fma_rn (q, t, 2.1238242087454993542e+0);
    q = __fma_rn (q, t, 8.4001814918178042919e-1);
    q = __fma_rn (q, t, 1.1311889334355782065e-1);
    q = __fma_rn (q, t, 6.0574830550097140404e-3);
    q = __fma_rn (q, t, 1.3715891988350205065e-4);
    q = __fma_rn (q, t, 1.2964671850944981713e-6);
    q = __fma_rn (q, t, 4.6156017600933592558e-9);
    q = __fma_rn (q, t, 4.5344687377088206783e-12);
    t = p / (q * t);
  }
  return t;
}

static double __cuda_erfc(double a)
{
  double p, q, h, l;
  int ahi;

  ahi = __double2hiint(a);
  if (ahi < (int)0x3fe80000) {
    return 1.0 - __cuda_erf(a);
  }
  if (a > 27.3) {
    return 0.0;
  }
  if (ahi < (int)0x40140000) {
    p = 5.64189549785304440E-001;
    p = __fma_rn (p, a, 8.17405083437083490E+000);
    p = __fma_rn (p, a, 5.68958722557864720E+001);
    p = __fma_rn (p, a, 2.42568747802647010E+002);
    p = __fma_rn (p, a, 6.80381374390412930E+002);
    p = __fma_rn (p, a, 1.25873132236024590E+003);
    p = __fma_rn (p, a, 1.43925353963809330E+003);
    p = __fma_rn (p, a, 8.15949420587659230E+002);
    q = a+ 1.44881247113239940E+001;
    q = __fma_rn (q, a, 1.01345387970210510E+002);
    q = __fma_rn (q, a, 4.37184684964009650E+002);
    q = __fma_rn (q, a, 1.25588209225251330E+003);
    q = __fma_rn (q, a, 2.43864015012647630E+003);
    q = __fma_rn (q, a, 3.10570469008816280E+003);
    q = __fma_rn (q, a, 2.35995386578953550E+003);
    q = __fma_rn (q, a, 8.15949420692539320E+002);
  } else {
    p = 5.64189583545675280E-001;
    p = __fma_rn (p, a, 2.04728556066513970E+000);
    p = __fma_rn (p, a, 6.75128409662943610E+000);
    p = __fma_rn (p, a, 1.10459345071747900E+001);
    p = __fma_rn (p, a, 1.22570382896313600E+001);
    p = __fma_rn (p, a, 6.01884641114116460E+000);
    q = a+ 3.62871917534986780E+000;
    q = __fma_rn (q, a, 1.24663395327043550E+001);
    q = __fma_rn (q, a, 2.13927672803974790E+001);
    q = __fma_rn (q, a, 2.72082423532866070E+001);
    q = __fma_rn (q, a, 1.86422906830006700E+001);
    q = __fma_rn (q, a, 6.13809834548870550E+000);
  }
  p = p / q;
  h = a * a;
  l = __fma_rn (a, a, -h);
  q = __internal_exp_kernel(-h, 0);
  q = __fma_rn (l, -q, q);
  p = p * q;
  return p;
}


static double __internal_tgamma_kernel(double a)
{
  double t;
  t = -4.42689340712524750E-010;
  t = __fma_rn (t, a, -2.02665918466589540E-007);
  t = __fma_rn (t, a, 1.13812117211195270E-006);
  t = __fma_rn (t, a, -1.25077348166307480E-006);
  t = __fma_rn (t, a, -2.01365017404087710E-005);
  t = __fma_rn (t, a, 1.28050126073544860E-004);
  t = __fma_rn (t, a, -2.15241408115274180E-004);
  t = __fma_rn (t, a, -1.16516754597046040E-003);
  t = __fma_rn (t, a, 7.21894322484663810E-003);
  t = __fma_rn (t, a, -9.62197153268626320E-003);
  t = __fma_rn (t, a, -4.21977345547223940E-002);
  t = __fma_rn (t, a, 1.66538611382503560E-001);
  t = __fma_rn (t, a, -4.20026350341054440E-002);
  t = __fma_rn (t, a, -6.55878071520257120E-001);
  t = __fma_rn (t, a, 5.77215664901532870E-001);
  t = __fma_rn (t, a, 1.00000000000000000E+000);
  return t;
}


static double __internal_stirling_poly(double a)
{
  double x = 1.0 / a;
  double z = 0.0;
  z = __fma_rn (z, x, 8.3949872067208726e-004);
  z = __fma_rn (z, x, -5.1717909082605919e-005);
  z = __fma_rn (z, x, -5.9216643735369393e-004);
  z = __fma_rn (z, x, 6.9728137583658571e-005);
  z = __fma_rn (z, x, 7.8403922172006662e-004);
  z = __fma_rn (z, x, -2.2947209362139917e-004);
  z = __fma_rn (z, x, -2.6813271604938273e-003);
  z = __fma_rn (z, x, 3.4722222222222220e-003);
  z = __fma_rn (z, x, 8.3333333333333329e-002);
  z = __fma_rn (z, x, 1.0000000000000000e+000);
  return z;
}

static double __internal_tgamma_stirling(double a)
{
  if (a < 1.7162437695630274e+002) {

    volatile double t_hi, t_lo, e;



    double2 loga, prod;
    double z = __internal_stirling_poly (a);
    double b = a - 0.5;


    loga = __internal_log_ext_prec(a);


    t_hi = loga.y * b;
    t_lo = __fma_rn (loga.y, b, -t_hi);
    t_lo = __fma_rn (loga.x, b, t_lo);
    prod.y = e = t_hi + t_lo;
    prod.x = (t_hi - e) + t_lo;


    loga.y = -a;
    loga.x = 0.0;
    prod = __internal_ddadd_xgty (prod, loga);


    a = __cuda_exp(prod.y);

    if (!__cuda___isinf(a)) {



      a = __fma_rn (a, prod.x, a);
    }
    a = __fma_rn (a, 2.5066282746310007e+0, a * (-1.8328579980459167e-16));
    return a * z;
  } else {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
}

static double __cuda_tgamma(double a)
{
  double s, xx, x = a;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (__cuda_fabs(x) < 15.0) {




    if (x >= 0.0) {
      s = 1.0;
      xx = x;
      while (xx > 1.5) {
        s = __fma_rn(s, xx, -s);
        xx = xx - 1.0;
      }
      if (x >= 0.5) {
        xx = xx - 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      if (x < 0.5) {
        xx = xx * x;
      }
      s = s / xx;
    } else {
      xx = x;
      s = xx;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      while (xx < -0.5) {
        s = __fma_rn (s, xx, s);
        xx = xx + 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      s = s * xx;
      s = 1.0 / s;
    }
    return s;
  } else {
    if (x >= 0.0) {
      return __internal_tgamma_stirling (x);
    } else {
      double t;
      int quot;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      if (x < -185.0) {
        int negative;
        x = __cuda_floor(x);
        negative = ((x - (2.0 * __cuda_floor(0.5 * x))) == 1.0);
        return negative ? __longlong_as_double(0x8000000000000000ULL) : 0.0;
      }

      xx = __cuda_rint (__internal_twice(x));
      quot = (int)xx;
      xx = __fma_rn (-0.5, xx, x);
      xx = xx * 3.1415926535897931e+0;
      if (quot & 1) {
        xx = __internal_cos_kerneld (xx);
      } else {
        xx = __internal_sin_kerneld (xx);
      }
      if (quot & 2) {
        xx = -xx;
      }
      x = __cuda_fabs (x);
      s = __cuda_exp (-x);
      t = x - 0.5;
      if (x > 140.0) t = __internal_half(t);
      t = __cuda_pow (x, t);
      if (x > 140.0) s = s * t;
      s = s * __internal_stirling_poly (x);
      s = s * x;
      s = s * xx;
      s = 1.0 / s;
      s = __fma_rn (s, 1.2533141373155003e+0, (-9.1642899902295834e-17) * s);
      s = s / t;
      return s;
    }
  }
}

static double __internal_lgamma_pos(double a)
{
  double sum;
  double s, t;

  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return a;
  }
  if (a >= 3.0) {
    if (a >= 8.0) {



      s = 1.0 / a;
      t = s * s;
      sum = -0.1633436431e-2;
      sum = __fma_rn (sum, t, 0.83645878922e-3);
      sum = __fma_rn (sum, t, -0.5951896861197e-3);
      sum = __fma_rn (sum, t, 0.793650576493454e-3);
      sum = __fma_rn (sum, t, -0.277777777735865004e-2);
      sum = __fma_rn (sum, t, 0.833333333333331018375e-1);
      sum = __fma_rn (sum, s, 0.918938533204672);
      s = __internal_half(__cuda_log (a));
      t = a - 0.5;
      s = s * t;
      t = s - a;
      s = s + sum;
      t = t + s;
      return t;
    } else {
      a = a - 3.0;
      s = -4.02412642744125560E+003;
      s = __fma_rn (s, a, -2.97693796998962000E+005);
      s = __fma_rn (s, a, -6.38367087682528790E+006);
      s = __fma_rn (s, a, -5.57807214576539320E+007);
      s = __fma_rn (s, a, -2.24585140671479230E+008);
      s = __fma_rn (s, a, -4.70690608529125090E+008);
      s = __fma_rn (s, a, -7.62587065363263010E+008);
      s = __fma_rn (s, a, -9.71405112477113250E+008);
      t = a -1.02277248359873170E+003;
      t = __fma_rn (t, a, -1.34815350617954480E+005);
      t = __fma_rn (t, a, -4.64321188814343610E+006);
      t = __fma_rn (t, a, -6.48011106025542540E+007);
      t = __fma_rn (t, a, -4.19763847787431360E+008);
      t = __fma_rn (t, a, -1.25629926018000720E+009);
      t = __fma_rn (t, a, -1.40144133846491690E+009);
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5) {
    a = a - 2.0;
    t = 9.84839283076310610E-009;
    t = __fma_rn (t, a, -6.69743850483466500E-008);
    t = __fma_rn (t, a, 2.16565148880011450E-007);
    t = __fma_rn (t, a, -4.86170275781575260E-007);
    t = __fma_rn (t, a, 9.77962097401114400E-007);
    t = __fma_rn (t, a, -2.03041287574791810E-006);
    t = __fma_rn (t, a, 4.36119725805364580E-006);
    t = __fma_rn (t, a, -9.43829310866446590E-006);
    t = __fma_rn (t, a, 2.05106878496644220E-005);
    t = __fma_rn (t, a, -4.49271383742108440E-005);
    t = __fma_rn (t, a, 9.94570466342226000E-005);
    t = __fma_rn (t, a, -2.23154589559238440E-004);
    t = __fma_rn (t, a, 5.09669559149637430E-004);
    t = __fma_rn (t, a, -1.19275392649162300E-003);
    t = __fma_rn (t, a, 2.89051032936815490E-003);
    t = __fma_rn (t, a, -7.38555102806811700E-003);
    t = __fma_rn (t, a, 2.05808084278121250E-002);
    t = __fma_rn (t, a, -6.73523010532073720E-002);
    t = __fma_rn (t, a, 3.22467033424113040E-001);
    t = __fma_rn (t, a, 4.22784335098467190E-001);
    t = t * a;
    return t;
  } else if (a >= 0.7) {
    a = 1.0 - a;
    t = 1.17786911519331130E-002;
    t = __fma_rn (t, a, 3.89046747413522300E-002);
    t = __fma_rn (t, a, 5.90045711362049900E-002);
    t = __fma_rn (t, a, 6.02143305254344420E-002);
    t = __fma_rn (t, a, 5.61652708964839180E-002);
    t = __fma_rn (t, a, 5.75052755193461370E-002);
    t = __fma_rn (t, a, 6.21061973447320710E-002);
    t = __fma_rn (t, a, 6.67614724532521880E-002);
    t = __fma_rn (t, a, 7.14856037245421020E-002);
    t = __fma_rn (t, a, 7.69311251313347100E-002);
    t = __fma_rn (t, a, 8.33503129714946310E-002);
    t = __fma_rn (t, a, 9.09538288991182800E-002);
    t = __fma_rn (t, a, 1.00099591546322310E-001);
    t = __fma_rn (t, a, 1.11334278141734510E-001);
    t = __fma_rn (t, a, 1.25509666613462880E-001);
    t = __fma_rn (t, a, 1.44049896457704160E-001);
    t = __fma_rn (t, a, 1.69557177031481600E-001);
    t = __fma_rn (t, a, 2.07385551032182120E-001);
    t = __fma_rn (t, a, 2.70580808427600350E-001);
    t = __fma_rn (t, a, 4.00685634386517050E-001);
    t = __fma_rn (t, a, 8.22467033424113540E-001);
    t = __fma_rn (t, a, 5.77215664901532870E-001);
    t = t * a;
    return t;
  } else {
    t= -9.04051686831357990E-008;
    t = __fma_rn (t, a, 7.06814224969349250E-007);
    t = __fma_rn (t, a, -3.80702154637902830E-007);
    t = __fma_rn (t, a, -2.12880892189316100E-005);
    t = __fma_rn (t, a, 1.29108470307156190E-004);
    t = __fma_rn (t, a, -2.15932815215386580E-004);
    t = __fma_rn (t, a, -1.16484324388538480E-003);
    t = __fma_rn (t, a, 7.21883433044470670E-003);
    t = __fma_rn (t, a, -9.62194579514229560E-003);
    t = __fma_rn (t, a, -4.21977386992884450E-002);
    t = __fma_rn (t, a, 1.66538611813682460E-001);
    t = __fma_rn (t, a, -4.20026350606819980E-002);
    t = __fma_rn (t, a, -6.55878071519427450E-001);
    t = __fma_rn (t, a, 5.77215664901523870E-001);
    t = t * a;
    t = __fma_rn (t, a, a);
    return -__cuda_log (t);
  }
}

static double __cuda_lgamma(double a)
{
  double t;
  double i;
  long long int quot;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  t = __internal_lgamma_pos(__cuda_fabs(a));
  if (a >= 0.0) return t;
  a = __cuda_fabs(a);
  i = __cuda_floor(a);
  if (a == i) return __longlong_as_double(0x7ff0000000000000ULL);
  if (a < 1e-19) return -__cuda_log(a);
  i = __cuda_rint (2.0 * a);
  quot = (long long int)i;
  i = __fma_rn (-0.5, i, a);
  i = i * 3.1415926535897931e+0;
  if (quot & 1) {
    i = __internal_cos_kerneld(i);
  } else {
    i = __internal_sin_kerneld(i);
  }
  i = __cuda_fabs(i);
  t = __cuda_log(3.1415926535897931e+0 / (i * a)) - t;
  return t;
}

static double __cuda_ldexp(double a, int b)
{
  double fa = __cuda_fabs (a);
  if ((fa == 0.0) || (fa == __longlong_as_double(0x7ff0000000000000ULL)) || (!(fa <= __longlong_as_double(0x7ff0000000000000ULL)))) {
    return a + a;
  }
  if (b == 0) {
    return a;
  }
  if (b > 2200) b = 2200;
  if (b < -2200) b = -2200;
  if (__cuda_abs (b) < 1022) {
    return a * __internal_exp2i_kernel(b);
  }
  if (__cuda_abs (b) < 2044) {
    int bhalf = b / 2;
    return a * __internal_exp2i_kernel (bhalf) *
           __internal_exp2i_kernel (b - bhalf);
  } else {
    int bquarter = b / 4;
    double t = __internal_exp2i_kernel(bquarter);
    return a * t * t * t *__internal_exp2i_kernel (b - 3 * bquarter);
  }
}

static double __cuda_scalbn(double a, int b)
{

  return __cuda_ldexp(a, b);
}

static double __cuda_scalbln(double a, long int b)
{


  if (b < -2147483648L) b = -2147483648L;
  if (b > 2147483647L) b = 2147483647L;

  return __cuda_scalbn(a, (int)b);
}

static double __cuda_frexp(double a, int *b)
{
  double fa = __cuda_fabs(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 2.22507385850720140e-308) {
    a *= 18014398509481984.0;
    denorm = 54;
  } else {
    denorm = 0;
  }
  expo = (__double2hiint(a) >> 20) & 0x7ff;
  if ((fa == 0.0) || (expo == 0x7ff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 1022;
    a = __longlong_as_double((__double_as_longlong(a) & 0x800fffffffffffffULL)|
                              0x3fe0000000000000ULL);
  }
  *b = expo;
  return a;
}

static double __cuda_modf(double a, double *b)
{
  double t;
  if (__cuda___finite(a)) {
    t = __cuda_trunc(a);
    *b = t;
    t = a - t;
    return __cuda_copysign(t, a);
  } else if (__cuda___isinf(a)) {
    t = 0.0;
    *b = a;
    return __cuda_copysign(t, a);
  } else {
    *b = a + a;
    return a + a;
  }
}

static double __cuda_fmod(double a, double b)
{
  double orig_a = a;
  double orig_b = b;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (!((a <= __longlong_as_double(0x7ff0000000000000ULL)) && (b <= __longlong_as_double(0x7ff0000000000000ULL)))) {
      return orig_a + orig_b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    int bhi = __double2hiint(b);
    int blo = __double2loint(b);
    int ahi = __double2hiint(a);
    double scaled_b = 0.0;
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5;
    }
    return __cuda_copysign (a, orig_a);
  } else {
    return orig_a;
  }
}

static double __cuda_remainder(double a, double b)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot0 = 0;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  orig_a = a;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  return a;
}

static double __cuda_remquo(double a, double b, int *c)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot = 0;
  unsigned int sign;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    *c = quot;
    return a + b;
  }
  orig_a = a;
  sign = 0 - (__cuda___signbit(a) != __cuda___signbit(b));
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    *c = quot;
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *c = quot;
  return a;
}

static double __cuda_nextafter(double a, double b)
{
  unsigned long long int ia;
  unsigned long long int ib;
  ia = __double_as_longlong(a);
  ib = __double_as_longlong(b);
  if (__cuda___isnan(a) || __cuda___isnan(b)) return a + b;
  if (((ia | ib) << 1) == 0ULL) return b;
  if ((ia + ia) == 0ULL) {
    return __cuda_copysign (__longlong_as_double(0x0000000000000001ULL), b);
  }
  if ((a < b) && (a < 0.0)) ia--;
  if ((a < b) && (a > 0.0)) ia++;
  if ((a > b) && (a < 0.0)) ia++;
  if ((a > b) && (a > 0.0)) ia--;
  a = __longlong_as_double(ia);
  return a;
}

static double __cuda_nan(const char *s)
{
  unsigned long long i = 0;
  int c;
  int ovfl = 0;
  int invld = 0;
  if (*s == '0') {
    s++;
    if ((*s == 'x') || (*s == 'X')) {
      s++;
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x0fffffffffffffffULL) {
          ovfl = 1;
        }
        c = (((*s) >= 'A') && ((*s) <= 'F')) ? (*s + 'a' - 'A') : (*s);
        if ((c >= 'a') && (c <= 'f')) {
          c = c - 'a' + 10;
          i = i * 16 + c;
        } else if ((c >= '0') && (c <= '9')) {
          c = c - '0';
          i = i * 16 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    } else {
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x1fffffffffffffffULL) {
          ovfl = 1;
        }
        c = *s;
        if ((c >= '0') && (c <= '7')) {
          c = c - '0';
          i = i * 8 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    }
  } else {
    while (*s) {
      c = *s;
      if ((i > 1844674407370955161ULL) ||
          ((i == 1844674407370955161ULL) && (c > '5'))) {
        ovfl = 1;
      }
      if ((c >= '0') && (c <= '9')) {
        c = c - '0';
        i = i * 10 + c;
      } else {
        invld = 1;
      }
      s++;
    }
  }
  if (ovfl) {
    i = ~0ULL;
  }
  if (invld) {
    i = 0ULL;
  }
  i = (i & 0x000fffffffffffffULL) | 0x7ff8000000000000ULL;
  return __longlong_as_double(i);
}

static double __cuda_round(double a)
{
  double fa = __cuda_fabs(a);
  if (fa > 4503599627370496.0) {
    return a;
  } else {
    double u = __cuda_floor(fa + 0.5);
    if (fa < 0.5) u = 0;
    return __cuda_copysign(u, a);
  }
}

static long long int __cuda_llround(double a)
{

  if (a >= 9223372036854775807.0) return 0x7fffffffffffffffLL;
  if (a <= -9223372036854775808.0) return 0x8000000000000000LL;

  return (long long int)(__cuda_round(a));
}

static long int __cuda_lround(double a)
{

  return (long int)(__cuda_llround(a));
# 2326 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 3
}

static double __cuda_fdim(double a, double b)
{
  double t;
  t = a - b;
  if (a <= b) {
    t = 0.0;
  }
  return t;
}

static int __cuda_ilogb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return -((int)((unsigned int)-1 >> 1))-1;
  if (__cuda___isinf(a)) return ((int)((unsigned int)-1 >> 1));
  if (a == 0.0) return -((int)((unsigned int)-1 >> 1))-1;
  a = __cuda_fabs(a);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return ((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return expo;
  }
}

static double __cuda_logb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return a + a;
  a = __cuda_fabs(a);
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) return a;
  if (a == 0.0) return -__longlong_as_double(0x7ff0000000000000ULL);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return (double)((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return (double)expo;
  }
}

static double __cuda_fma(double a, double b, double c)
{
  return __fma_rn(a, b, c);
}
# 3735 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 94 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 227 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_00005971_00000000-4_quasirandomGenerator_SM13.cudafe1.stub.c" 2
struct __T20 {float *__par0;unsigned __par1;unsigned __par2;int __dummy_field;volatile char __dummy[4];};
struct __T21 {float *__par0;float *__par1;unsigned __par2;int __dummy_field;};
static void __sti____cudaRegisterAll_61_tmpxft_00005971_00000000_14_quasirandomGenerator_SM13_cpp1_ii_e31784a2(void) __attribute__((__constructor__));
static void __device_stub__Z26quasirandomGeneratorKernelPfjj(float *__par0, unsigned __par1, unsigned __par2){auto struct __T20 *__T24;
char __[256]; *(char**)&__T24 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T24->__par0 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T24->__par1 - (size_t)__T24) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T24->__par2 - (size_t)__T24) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, unsigned, unsigned))quasirandomGeneratorKernel__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, unsigned, unsigned))quasirandomGeneratorKernel__entry))); };}

}
static void quasirandomGeneratorKernel__entry( float * __cuda_0,unsigned __cuda_1,unsigned __cuda_2)
{__device_stub__Z26quasirandomGeneratorKernelPfjj( __cuda_0, __cuda_1, __cuda_2);}
extern "C"{

static void __device_stub__Z16inverseCNDKernelPfS_j(float *__par0, float *__par1, unsigned __par2){auto struct __T21 *__T211;
char __[256]; *(char**)&__T211 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T211->__par0 - (size_t)__T211) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T211->__par1 - (size_t)__T211) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T211->__par2 - (size_t)__T211) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, unsigned))inverseCNDKernel__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, unsigned))inverseCNDKernel__entry))); };}

}
static void inverseCNDKernel__entry( float * __cuda_0,float * __cuda_1,unsigned __cuda_2)
{__device_stub__Z16inverseCNDKernelPfS_j( __cuda_0, __cuda_1, __cuda_2);}
extern "C"{







static void __sti____cudaRegisterAll_61_tmpxft_00005971_00000000_14_quasirandomGenerator_SM13_cpp1_ii_e31784a2(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, unsigned))inverseCNDKernel__entry), (char*)"_Z16inverseCNDKernelPfS_j", "_Z16inverseCNDKernelPfS_j", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, unsigned, unsigned))quasirandomGeneratorKernel__entry), (char*)"_Z26quasirandomGeneratorKernelPfjj", "_Z26quasirandomGeneratorKernelPfjj", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_c_Table, (char*)"c_Table", "c_Table", 0, 372, 1, 0);}

}
# 55 "quasirandomGenerator_SM13.cu" 2
