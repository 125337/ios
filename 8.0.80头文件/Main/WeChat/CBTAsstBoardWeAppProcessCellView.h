@interface CBTAsstBoardWeAppProcessCellView : CBTAsstBoardBaseCellView <CBTAsstBoardWeAppProcessViewModelUIDelegate>
{
    ChatBotVOIPBoardViewWeAppProcessView * _weAppProcessView; // +0x8
}
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutWeAppProcessView:(CGRect)arg1;
- (void)onRecvProcessData:(id)arg1;
- (void)onRecvPOIProcessData:(id)arg1;
- (void)onStopProcess:(BOOL)arg1;
- (void)onClearProcessView;
- (id)weAppProcessView;
- (void)setWeAppProcessView:(id)arg1;
- (void).cxx_destruct;
@end
