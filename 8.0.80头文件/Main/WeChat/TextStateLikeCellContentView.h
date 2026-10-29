@interface TextStateLikeCellContentView : UIView
{
    BOOL _shouldShowPreview; // +0x8
    id <TextStateLikeCellContentViewDelegate> _delegate; // +0x10
    long long _cardReportScene; // +0x18
    unsigned long long _headClickScene; // +0x20
    NSString * _iconReportViewId; // +0x28
    id <TextStateBaseNotifyInfo> _info; // +0x30
    UILabel * _timelabel; // +0x38
    UIView * _picImageView; // +0x40
    UILabel * _usernameLabel; // +0x48
    UILabel * _referenceLabel; // +0x50
    UIImageView * _emojiImageView; // +0x58
    UIView * _headImageView; // +0x60
    TextStateItemView * _iconView; // +0x68
    CContact * _contact; // +0x70
    WCFinderFeedContentTextView * _textView; // +0x78
}
+ (double)getCellHight;
- (void)configInfo:(id)arg1;
- (void)didMoveToWindow;
- (void)reportIconExposure;
- (id)createItemView;
- (void)onTapTextStateViewForCard;
- (id)createWebImageViewWithUrl:(id)arg1;
- (id)createHeadImageViewWithUserName:(id)arg1;
- (void)onClickHeadImage;
- (id)usernameLabel;
- (id)emojiImageView;
- (id)referenceLabel;
- (id)timelabel;
- (id)picImageView;
- (id)generatePicImageView;
- (id)generatePicImageViewInner:(id)arg1 mediaItem:(id)arg2 iconDescription:(id)arg3;
- (id)genTextStateByCommentThumbMessage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowPreview;
- (void)setShouldShowPreview:(BOOL)arg1;
- (long long)cardReportScene;
- (void)setCardReportScene:(long long)arg1;
- (unsigned long long)headClickScene;
- (void)setHeadClickScene:(unsigned long long)arg1;
- (id)iconReportViewId;
- (void)setIconReportViewId:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void)setTimelabel:(id)arg1;
- (void)setPicImageView:(id)arg1;
- (void)setUsernameLabel:(id)arg1;
- (void)setReferenceLabel:(id)arg1;
- (void)setEmojiImageView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
