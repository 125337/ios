@interface MMFinderLiveAnchorTaskStatusCell : UICollectionViewCell
{
    BOOL _isSelected; // +0x8
    id /* block */ _onClick; // +0x10
    FinderLiveQuestInstance * _taskItem; // +0x18
    MMFinderLiveNewAnchorTaskViewModel * _taskVM; // +0x20
    long long _totalCnt; // +0x28
    long long _index; // +0x30
    MMUIImageView * _checkbox; // +0x38
    MMUILabel * _status; // +0x40
    MMUILabel * _date; // +0x48
    MMUIView * _leftLine; // +0x50
    MMUIView * _rightLine; // +0x58
    MMUILabel * _actionLabel; // +0x60
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setIsSelected:(BOOL)arg1;
- (void)setTotalCnt:(long long)arg1;
- (void)setIndex:(long long)arg1;
- (void)setTaskItem:(id)arg1;
- (void)checkLine;
- (void)layoutSubviews;
- (id)color;
- (void)layoutUI;
- (id)createShapeLayer;
- (void)onClickCell;
- (id /* block */)onClick;
- (void)setOnClick:(id /* block */)arg1;
- (id)taskItem;
- (id)taskVM;
- (void)setTaskVM:(id)arg1;
- (long long)totalCnt;
- (long long)index;
- (BOOL)isSelected;
- (id)checkbox;
- (void)setCheckbox:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (void).cxx_destruct;
@end
