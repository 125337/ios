@interface MJShootComposingFaceManagerConfig : NSObject
{
    unsigned long long _faceIDState; // +0x8
    MJFaceIDGuideInfo * _faceIDGuideInfo; // +0x10
    MJShootComposingViewLayout * _composingViewLayout; // +0x18
}
- (id)description;
- (unsigned long long)faceIDState;
- (void)setFaceIDState:(unsigned long long)arg1;
- (id)faceIDGuideInfo;
- (void)setFaceIDGuideInfo:(id)arg1;
- (id)composingViewLayout;
- (void)setComposingViewLayout:(id)arg1;
- (void).cxx_destruct;
@end
