@interface WCPlayerConfigFullScreenProgressBarParams : NSObject
{
    BOOL _bForbidAutoHidden; // +0x8
    BOOL _forbidensSeek; // +0x9
    BOOL _forbidensTouchHlighlight; // +0xa
    BOOL _autoExpandProgressOnce; // +0xb
    UIImage * _dotActiveImage; // +0x10
    UIImage * _dotInactiveImage; // +0x18
}
- (BOOL)bForbidAutoHidden;
- (void)setBForbidAutoHidden:(BOOL)arg1;
- (BOOL)forbidensSeek;
- (void)setForbidensSeek:(BOOL)arg1;
- (BOOL)forbidensTouchHlighlight;
- (void)setForbidensTouchHlighlight:(BOOL)arg1;
- (id)dotActiveImage;
- (void)setDotActiveImage:(id)arg1;
- (id)dotInactiveImage;
- (void)setDotInactiveImage:(id)arg1;
- (BOOL)autoExpandProgressOnce;
- (void)setAutoExpandProgressOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
