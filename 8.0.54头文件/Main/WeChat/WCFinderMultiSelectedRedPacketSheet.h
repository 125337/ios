@interface WCFinderMultiSelectedRedPacketSheet : WCActionSheet <ILinkEventExt, WCFinderCarouseDelegate, WCFinderCarouselDatasource>
{
    id <WCFinderMultiSelectedRedPacketSheetDelegate> _sheetDelegate; // +0x8
    UIView * _contentView; // +0x10
    NSArray * _redPacketArray; // +0x18
    long long _curSelectIndex; // +0x20
    UIButton * _acceptBtn; // +0x28
}
- (id)initWithRedPacketArray:(id)arg1;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (double)contentHeight;
- (id)createContentView;
- (void)onClose;
- (void)onClickAccept;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)getCurSelectRedPacketInfo;
- (void)carouselView:(id)arg1 didEndScrollAtIndex:(long long)arg2 indexPathRow:(long long)arg3;
- (void)updateAcceptBtnState;
- (long long)numbersForCarousel:(id)arg1;
- (id)viewForCarousel:(id)arg1 indexPath:(id)arg2 index:(long long)arg3;
- (id)sheetDelegate;
- (void)setSheetDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)redPacketArray;
- (void)setRedPacketArray:(id)arg1;
- (long long)curSelectIndex;
- (void)setCurSelectIndex:(long long)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (void).cxx_destruct;
@end

