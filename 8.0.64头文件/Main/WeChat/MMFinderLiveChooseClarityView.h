@interface MMFinderLiveChooseClarityView : MMPageSheetBaseView <MMFinderLiveChooseClarityTableDataDelegate>
{
    MMFinderLiveChooseClarityTableViewModel * _clarityMethodTableViewModel; // +0x8
    unsigned long long _fromScene; // +0x10
    id <MMFinderLiveChooseClarityDelegate> _operationDelegate; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    MMFinderLiveChooseClarityViewNavBar * _navBar; // +0x30
    MMTableView * _clarityMethodTableView; // +0x38
}
+ (id)changeModelArray:(id)arg1;
+ (id)transferToClarityModelArray:(id)arg1 liveTask:(id)arg2;
+ (id)getSwitchStreamClarityDataItemModelArray:(id)arg1 chooseCdnUrl:(id)arg2;
+ (BOOL)isCanUseCdnTransInfoWithModelArray:(id)arg1 chooseCdnUrl:(id)arg2;
+ (void)tagSelectStateForClarityDataArray:(id)arg1 chooseInfo:(id)arg2;
+ (id)getSelectedClarityDataItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithClarityMethodData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateData:(id)arg1 chooseInfo:(id)arg2;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentWidth;
- (double)contentViewHeight;
- (id)clarityMethodTableView;
- (double)getClarityTableHeight;
- (id)clarityMethodTableViewModel;
- (id)contentView;
- (id)navBar;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setClarityMethodTableView:(id)arg1;
- (void).cxx_destruct;
@end
