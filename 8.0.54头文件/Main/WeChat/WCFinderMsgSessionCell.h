@interface WCFinderMsgSessionCell : MMBaseSessionTableViewCell <WCFinderMsgSessionNicknameTailViewDelegate>
{
    WCFinderMsgSessionCellViewModel * _viewModel; // +0x48
    WCFinderMsgSessionNicknameTailView * _tailView; // +0x50
}
- (void)prepareForReuse;
- (void)updateWithSessionCellData:(id)arg1;
- (id)genMessageListTimeStringByUInt:(unsigned int)arg1;
- (id)GetNickNameTailView;
- (void)onTailViewNeedLayout;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (void).cxx_destruct;
@end

