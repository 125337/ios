@interface WCFinderDynamicIconFetchTask : NSObject
{
    BOOL _filled; // +0x8
    NSMutableArray * _callbackList; // +0x10
    UIImage * _image; // +0x18
}
+ (id)keyForUrl:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (id)keyForDynamaicConfig:(id)arg1;
+ (id)singleTask:(id)arg1;
+ (id)dynamicImageTaskWithDark:(id)arg1 light:(id)arg2;
- (void)addImageLoadCallback:(id /* block */)arg1;
- (BOOL)isFinish;
- (void)setImage:(id)arg1;
- (id)callbackList;
- (void)setCallbackList:(id)arg1;
- (BOOL)filled;
- (void)setFilled:(BOOL)arg1;
- (id)image;
- (void).cxx_destruct;
@end
