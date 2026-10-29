@interface WCImageFullScreenParams : NSObject
{
    BOOL _bNeedEdit; // +0x8
    BOOL _bFrom3DTouch; // +0x9
    BOOL _bForbidLongPress; // +0xa
    BOOL _bSilencePlayLivePhotos; // +0xb
    unsigned int _index; // +0xc
    NSArray * _mediaDataArr; // +0x10
    NSArray * _originViewArr; // +0x18
    unsigned long long _contentItemScene; // +0x20
    WCMomentsPageContext * _pageContext; // +0x28
}
- (id)initWithMediaDataArr:(id)arg1 originViewArr:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (id)mediaDataArr;
- (void)setMediaDataArr:(id)arg1;
- (id)originViewArr;
- (void)setOriginViewArr:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (BOOL)bNeedEdit;
- (void)setBNeedEdit:(BOOL)arg1;
- (BOOL)bFrom3DTouch;
- (void)setBFrom3DTouch:(BOOL)arg1;
- (BOOL)bForbidLongPress;
- (void)setBForbidLongPress:(BOOL)arg1;
- (BOOL)bSilencePlayLivePhotos;
- (void)setBSilencePlayLivePhotos:(BOOL)arg1;
- (void).cxx_destruct;
@end

