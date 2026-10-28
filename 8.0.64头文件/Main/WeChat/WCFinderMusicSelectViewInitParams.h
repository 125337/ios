@interface WCFinderMusicSelectViewInitParams : NSObject
{
    BOOL _ostBtnDefaultOn; // +0x8
    NSString * _ostBtnTitle; // +0x10
    unsigned long long _btnOption; // +0x18
}
+ (id)defaultParams;
- (id)ostBtnTitle;
- (void)setOstBtnTitle:(id)arg1;
- (unsigned long long)btnOption;
- (void)setBtnOption:(unsigned long long)arg1;
- (BOOL)ostBtnDefaultOn;
- (void)setOstBtnDefaultOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
