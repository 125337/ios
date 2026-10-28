@interface ShakeTvHistoryView : MMUIView <IShakeTvHistoryMgrExt>
{
    NSArray * _arrTVItem; // +0x8
    id <ShakeTvHistoryViewDelegate> delegate; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onShakeTvHistoryDataChange;
- (void)refreshData;
- (unsigned int)getBtnWidth;
- (unsigned int)getBtnCnt;
- (unsigned int)getXOffset;
- (void)layoutAllView;
- (void)onClcikIconBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
