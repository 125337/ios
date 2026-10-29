@interface VideoCapture : NSObject
{
    Ptr<cv::VideoCapture> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::VideoCapture>)arg1;
- (id)initWithNativePtr:(Ptr<cv::VideoCapture>)arg1;
- (id)init;
- (id)initWithFilename:(id)arg1 apiPreference:(int)arg2;
- (id)initWithFilename:(id)arg1;
- (id)initWithFilename:(id)arg1 apiPreference:(int)arg2 params:(id)arg3;
- (id)initWithIndex:(int)arg1 apiPreference:(int)arg2;
- (id)initWithIndex:(int)arg1;
- (id)initWithIndex:(int)arg1 apiPreference:(int)arg2 params:(id)arg3;
- (BOOL)open:(id)arg1 apiPreference:(int)arg2;
- (BOOL)open:(id)arg1;
- (BOOL)open:(id)arg1 apiPreference:(int)arg2 params:(id)arg3;
- (BOOL)openWithIndex:(int)arg1 apiPreference:(int)arg2;
- (BOOL)openWithIndex:(int)arg1;
- (BOOL)openWithIndexAndParameters:(int)arg1 apiPreference:(int)arg2 params:(id)arg3;
- (BOOL)isOpened;
- (BOOL)grab;
- (BOOL)retrieve:(id)arg1 flag:(int)arg2;
- (BOOL)retrieve:(id)arg1;
- (BOOL)read:(id)arg1;
- (BOOL)set:(int)arg1 value:(double)arg2;
- (double)get:(int)arg1;
- (id)getBackendName;
- (void)setExceptionMode:(BOOL)arg1;
- (BOOL)getExceptionMode;
- (Ptr<cv::VideoCapture>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
