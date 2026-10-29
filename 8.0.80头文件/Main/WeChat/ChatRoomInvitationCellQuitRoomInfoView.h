@interface ChatRoomInvitationCellQuitRoomInfoView : MMUIView <ILinkEventExt>
{
    UIImageView * _iconView; // +0x8
    RichTextView * _quitRoomInfoLabel; // +0x10
    id <ChatRoomInvitationCellQuitRoomInfoViewDelegate> _delegate; // +0x18
    CContact * _contact; // +0x20
    NSString * _quitRoomInfo; // +0x28
}
- (id)initWithContact:(id)arg1 quitRoomInfo:(id)arg2;
- (void)initView;
- (id)getQuitRoomInfoIconImage;
- (id)getQuitRoomInfoLabelTextColor;
- (id)getQuitRoomInfoTitleWithDisplayName:(id)arg1 quitRoomInfo:(id)arg2 sex:(unsigned int)arg3;
- (void)setupLayout;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)quitRoomInfoLabel;
- (void)setQuitRoomInfoLabel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)quitRoomInfo;
- (void)setQuitRoomInfo:(id)arg1;
- (void).cxx_destruct;
@end
