@interface GameChatThinGroupCellLayout : GameChatGroupCellLayout
{
    double _collectionViewSpace; // +0x110
    double _topLabelSpace; // +0x118
    long long _secondaryLabelMaxLine; // +0x120
    double _conditonLineTopSpace; // +0x128
    double _addtionalConditonTopSpace; // +0x130
    double _addtionalConditonBottomSpace; // +0x138
    double _bulletMsgViewTopMargin; // +0x140
    double _extraSpace; // +0x148
}
- (id)init;
- (double)collectionViewSpace;
- (void)setCollectionViewSpace:(double)arg1;
- (double)topLabelSpace;
- (void)setTopLabelSpace:(double)arg1;
- (long long)secondaryLabelMaxLine;
- (void)setSecondaryLabelMaxLine:(long long)arg1;
- (double)conditonLineTopSpace;
- (void)setConditonLineTopSpace:(double)arg1;
- (double)addtionalConditonTopSpace;
- (void)setAddtionalConditonTopSpace:(double)arg1;
- (double)addtionalConditonBottomSpace;
- (void)setAddtionalConditonBottomSpace:(double)arg1;
- (double)bulletMsgViewTopMargin;
- (void)setBulletMsgViewTopMargin:(double)arg1;
- (double)extraSpace;
- (void)setExtraSpace:(double)arg1;
@end

