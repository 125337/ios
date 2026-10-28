@interface EmoticonCustomSortInsertBrickView : MMUIView
{
    UIImageView * _emoticonView; // +0x8
    MMBadgeView * _countView; // +0x10
    EmoticonCustomSortSingleBrick * _mainBrick; // +0x18
    EmoticonCustomSortSingleBrick * _midBrick; // +0x20
    EmoticonCustomSortSingleBrick * _bottomBrick; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)genBrickBGView;
- (void)updateWithWrap:(id)arg1 andTotalCount:(unsigned long long)arg2;
- (id)countView;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void)setCountView:(id)arg1;
- (id)mainBrick;
- (void)setMainBrick:(id)arg1;
- (id)midBrick;
- (void)setMidBrick:(id)arg1;
- (id)bottomBrick;
- (void)setBottomBrick:(id)arg1;
- (void).cxx_destruct;
@end
