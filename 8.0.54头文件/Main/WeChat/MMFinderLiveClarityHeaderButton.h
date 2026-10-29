@interface MMFinderLiveClarityHeaderButton : UIView
{
    id /* block */ _selfSizeChangeCallback; // +0x8
    id /* block */ _onTapCallback; // +0x10
    MMUILabel * _clarityLabel; // +0x18
    UIImageView * _arrowImgView; // +0x20
    MMFinderLiveChooseClarityDataItem * _clarityDataItem; // +0x28
}
- (id)init;
- (void)updateBorderLayer;
- (void)addTapGesture;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutClarityLabel;
- (void)layoutArrowImgView;
- (CGSize)getSelfSize;
- (void)updateClarityDataItem:(id)arg1;
- (BOOL)isClarityDataItemValid;
- (void)handleClarityTapGesture:(id)arg1;
- (id /* block */)selfSizeChangeCallback;
- (void)setSelfSizeChangeCallback:(id /* block */)arg1;
- (id /* block */)onTapCallback;
- (void)setOnTapCallback:(id /* block */)arg1;
- (id)clarityLabel;
- (void)setClarityLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)clarityDataItem;
- (void)setClarityDataItem:(id)arg1;
- (void).cxx_destruct;
@end

