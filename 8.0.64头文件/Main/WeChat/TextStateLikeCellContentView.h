@interface TextStateLikeCellContentView : UIView
{
    BOOL _shouldShowPreview; // +0x8
    id <TextStateLikeCellContentViewDelegate> _delegate; // +0x10
    id <TextStateBaseNotifyInfo> _info; // +0x18
    UILabel * _timelabel; // +0x20
    UIView * _picImageView; // +0x28
    UILabel * _usernameLabel; // +0x30
    UILabel * _referenceLabel; // +0x38
    UIImageView * _emojiImageView; // +0x40
    UIView * _headImageView; // +0x48
    TextStateItemView * _iconView; // +0x50
    CContact * _contact; // +0x58
    WCFinderFeedContentTextView * _textView; // +0x60
}
+ (double)getCellHight;
- (void)configInfo:(id)arg1;
- (id)createItemView;
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
