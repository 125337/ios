@interface CBTMomentInteractionCellView : UIView <ICBTContactGetExt>
{
    SyncMomentInterationResp_InterationSyncInfo * _interactionInfo; // +0x8
    MMHeadImageView * _headView; // +0x10
    UILabel * _nickNameLabel; // +0x18
    UILabel * _commentLabel; // +0x20
    UILabel * _timeLabel; // +0x28
    RichTextView * _feedTextContentLabel; // +0x30
    MMWebImageView * _feedImageView; // +0x38
    UIImageView * _thumbView; // +0x40
    CContact * _contact; // +0x48
    CContact * _refContact; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 interactionInfo:(id)arg2;
- (void)layoutContentViews;
- (void)layoutHeadImageView;
- (void)layoutNickNameLabel;
- (void)layoutTimeLabel;
- (void)layoutCommentContentLabel;
- (void)layoutThumbView;
- (void)layoutFeedContentView;
- (void)loadContact;
- (void)loadRefContact;
- (id)getHeadImageUrl;
- (id)getNickName;
- (id)getRefNickname;
- (id)getCommentContent;
- (id)getTimeString;
- (id)getFeedImageUrl;
- (id)getFeedTextContent;
- (void)onGetContactFromServer:(id)arg1;
- (id)interactionInfo;
- (void)setInteractionInfo:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)feedTextContentLabel;
- (void)setFeedTextContentLabel:(id)arg1;
- (id)feedImageView;
- (void)setFeedImageView:(id)arg1;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)refContact;
- (void)setRefContact:(id)arg1;
- (void).cxx_destruct;
@end
