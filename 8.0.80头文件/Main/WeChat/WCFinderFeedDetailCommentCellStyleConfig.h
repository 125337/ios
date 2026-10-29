@interface WCFinderFeedDetailCommentCellStyleConfig : NSObject
{
    BOOL _autoUpdateAvatar; // +0x8
    BOOL _enableRefComment; // +0x9
    BOOL _enableTemplateComment; // +0xa
    BOOL _enableBottomJumpInfo; // +0xb
    double _avatarLeftMargin; // +0x10
    double _avatarRightMargin; // +0x18
    double _avatarTopMargin; // +0x20
    double _avatarSize; // +0x28
    double _nickNameTopMargin; // +0x30
    double _textViewTopMargin; // +0x38
    double _textViewRightMargin; // +0x40
    unsigned long long _nickNameFontSize; // +0x48
    unsigned long long _contentFontSize; // +0x50
    unsigned long long _timeFontSize; // +0x58
    unsigned long long _unExpandLineNum; // +0x60
    unsigned long long _refUnExpandLineNum; // +0x68
    double _lineSpacing; // +0x70
    UIColor * _backgroundColor; // +0x78
    double _refCommentTopMargin; // +0x80
    double _refCommentBottomMargin; // +0x88
    double _refCommentLineWidth; // +0x90
    double _refCommentLeftPadding; // +0x98
}
+ (id)configForRootComment:(BOOL)arg1;
+ (id)rootCommentConfig;
+ (id)subCommentConfig;
- (id)init;
- (BOOL)isRootComment;
- (double)avatarLeftMargin;
- (void)setAvatarLeftMargin:(double)arg1;
- (double)avatarRightMargin;
- (void)setAvatarRightMargin:(double)arg1;
- (double)avatarTopMargin;
- (void)setAvatarTopMargin:(double)arg1;
- (double)avatarSize;
- (void)setAvatarSize:(double)arg1;
- (double)nickNameTopMargin;
- (void)setNickNameTopMargin:(double)arg1;
- (double)textViewTopMargin;
- (void)setTextViewTopMargin:(double)arg1;
- (double)textViewRightMargin;
- (void)setTextViewRightMargin:(double)arg1;
- (unsigned long long)nickNameFontSize;
- (void)setNickNameFontSize:(unsigned long long)arg1;
- (unsigned long long)contentFontSize;
- (void)setContentFontSize:(unsigned long long)arg1;
- (unsigned long long)timeFontSize;
- (void)setTimeFontSize:(unsigned long long)arg1;
- (unsigned long long)unExpandLineNum;
- (void)setUnExpandLineNum:(unsigned long long)arg1;
- (unsigned long long)refUnExpandLineNum;
- (void)setRefUnExpandLineNum:(unsigned long long)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (BOOL)autoUpdateAvatar;
- (void)setAutoUpdateAvatar:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)enableRefComment;
- (void)setEnableRefComment:(BOOL)arg1;
- (BOOL)enableTemplateComment;
- (void)setEnableTemplateComment:(BOOL)arg1;
- (BOOL)enableBottomJumpInfo;
- (void)setEnableBottomJumpInfo:(BOOL)arg1;
- (double)refCommentTopMargin;
- (void)setRefCommentTopMargin:(double)arg1;
- (double)refCommentBottomMargin;
- (void)setRefCommentBottomMargin:(double)arg1;
- (double)refCommentLineWidth;
- (void)setRefCommentLineWidth:(double)arg1;
- (double)refCommentLeftPadding;
- (void)setRefCommentLeftPadding:(double)arg1;
- (void).cxx_destruct;
@end
