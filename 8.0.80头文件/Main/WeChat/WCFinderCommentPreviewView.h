@interface WCFinderCommentPreviewView : UIView <WCFinderQRCodeCgiDelegate, WCFinderPreviewView>
{
    WCFinderFeedContentVM * _contentVM; // +0x8
    WCFinderComment * _mainComment; // +0x10
    UIView * _contentContainer; // +0x18
    UIView * _contentView; // +0x20
    WCFinderRichTextView * _nicknameLabel; // +0x28
    UIView * _contactCard; // +0x30
    UIImageView * _feedCover; // +0x38
    UIImageView * _finderLogo; // +0x40
    WXMASConstraint * _finderLogoTop; // +0x48
    WXMASConstraint * _finderLogoCenter; // +0x50
    UILabel * _contactNickname; // +0x58
    UIImageView * _qrCodeView; // +0x60
    WCFinderSizingRichTextView * _feedDescLabel; // +0x68
}
+ (BOOL)shouldShowLongPressActionView:(id)arg1;
+ (id)makeImageLongPressActionView:(id)arg1;
+ (void)handleJumpWithParams:(id)arg1 actionType:(id)arg2 fromNav:(id)arg3 entryScene:(unsigned long long)arg4 cardType:(int)arg5;
+ (void)handleJumpWithCodeResp:(id)arg1 fromNav:(id)arg2 entryScene:(unsigned long long)arg3 cardType:(int)arg4;
+ (void)jumpToComment:(id)arg1 encryptTid:(id)arg2 nonceId:(id)arg3 commentId:(unsigned long long)arg4 fromNav:(id)arg5 entryScene:(unsigned long long)arg6 cardType:(int)arg7;
+ (BOOL)supportPreview:(id)arg1 contentVM:(id)arg2;
+ (BOOL)commentHasPreviewContent:(id)arg1;
- (id)previewType;
- (id)passArguments;
- (void)reportForward:(id)arg1 commentScene:(int)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentVM:(id)arg1;
- (void)setComment:(id)arg1 focus:(long long)arg2;
- (void)qrcodeCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qrcodeCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)contentVM;
- (id)mainComment;
- (void)setMainComment:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)contactCard;
- (void)setContactCard:(id)arg1;
- (id)feedCover;
- (void)setFeedCover:(id)arg1;
- (id)finderLogo;
- (void)setFinderLogo:(id)arg1;
- (id)finderLogoTop;
- (void)setFinderLogoTop:(id)arg1;
- (id)finderLogoCenter;
- (void)setFinderLogoCenter:(id)arg1;
- (id)contactNickname;
- (void)setContactNickname:(id)arg1;
- (id)qrCodeView;
- (void)setQrCodeView:(id)arg1;
- (id)feedDescLabel;
- (void)setFeedDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
