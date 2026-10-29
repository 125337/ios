@interface CBTMomentContentCellModel : CBTMomentBaseCellModel <ICBTContactGetExt>
{
    BOOL _likeBtnSelected; // +0x8
    BOOL _uninterestedBtnSelected; // +0x9
    BOOL _ownPost; // +0xa
    BOOL _inDetailPage; // +0xb
    BOOL _needReCalculateHeight; // +0xc
    CBTMomentContentCellModel * _momentModel; // +0x10
    ChatBotMomentItem * _momentItem; // +0x18
    id <CBTMomentContentCellModelDelegate> _delegate; // +0x20
    NSString * _reuseIdentifier; // +0x28
    NSAttributedString * _likeUserListText; // +0x30
    NSMutableArray * _commentList; // +0x38
    NSMutableArray * _likeUserContactsNeedRequestFromServer; // +0x40
    NSMutableArray * _commentUserContactsNeedRequestFromServer; // +0x48
}
+ (double)getMultiImageHeightWidth:(double)arg1;
+ (id)contentTextFont;
+ (id)getNickNameWithMomentUserInfo:(id)arg1 defaultName:(id)arg2;
+ (id)getNickNameWithMomentUserInfo:(id)arg1;
- (id)initWithMomentItem:(id)arg1 ownPost:(BOOL)arg2 delegate:(id)arg3;
- (void)setNeedReCalculateHeight;
- (BOOL)isPrivateMoment;
- (void)setPrivateMoment:(BOOL)arg1;
- (double)cellHeightWithWidth:(double)arg1;
- (BOOL)hasMediaContent;
- (void)generateLikeUserListText;
- (void)generateCommentList;
- (double)getCommentListHeight:(double)arg1;
- (double)getLikeUserListHeight:(double)arg1;
- (double)calculateAttributedStringHeight:(id)arg1 width:(double)arg2;
- (double)getMediaContentHeight:(double)arg1;
- (double)getContentTextHeight:(double)arg1;
- (void)likeBtnClicked;
- (void)uninterestedBtnClicked;
- (void)commentWithReplyCommentIndex:(long long)arg1;
- (void)onConfigPrivateBtnTapped;
- (void)onGetContactFromServer:(id)arg1;
- (id)momentModel;
- (id)momentItem;
- (void)setMomentItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)likeBtnSelected;
- (void)setLikeBtnSelected:(BOOL)arg1;
- (BOOL)uninterestedBtnSelected;
- (void)setUninterestedBtnSelected:(BOOL)arg1;
- (BOOL)isOwnPost;
- (void)setOwnPost:(BOOL)arg1;
- (id)reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (BOOL)inDetailPage;
- (void)setInDetailPage:(BOOL)arg1;
- (id)likeUserListText;
- (void)setLikeUserListText:(id)arg1;
- (id)commentList;
- (void)setCommentList:(id)arg1;
- (BOOL)needReCalculateHeight;
- (void)setNeedReCalculateHeight:(BOOL)arg1;
- (id)likeUserContactsNeedRequestFromServer;
- (void)setLikeUserContactsNeedRequestFromServer:(id)arg1;
- (id)commentUserContactsNeedRequestFromServer;
- (void)setCommentUserContactsNeedRequestFromServer:(id)arg1;
- (void).cxx_destruct;
@end
