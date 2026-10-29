@interface WCFImageTaskInfo : NSObject
{
    CdnSnsTaskInfo * _cdn; // +0x8
    WCFImageKey * _imageKey; // +0x10
    unsigned long long _scene; // +0x18
    unsigned long long _feedMediaType; // +0x20
    NSString * _tid; // +0x28
}
- (id)initWithImageKey:(id)arg1 cdnTask:(id)arg2;
- (long long)type;
- (id)cdn;
- (void)setCdn:(id)arg1;
- (id)imageKey;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)feedMediaType;
- (void)setFeedMediaType:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void).cxx_destruct;
@end

