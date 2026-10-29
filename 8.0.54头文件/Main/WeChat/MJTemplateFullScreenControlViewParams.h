@interface MJTemplateFullScreenControlViewParams : NSObject
{
    BOOL _bForbidAutoHidden; // +0x8
    BOOL _forbidensSeek; // +0x9
    BOOL _forbidensTouchHlighlight; // +0xa
    WCMomentsTemplateShareInfo * _shareInfo; // +0x10
    double _videoDuration; // +0x18
    UIImage * _dotActiveImage; // +0x20
    UIImage * _dotInactiveImage; // +0x28
}
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
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
- (void).cxx_destruct;
@end

