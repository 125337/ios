@interface MJSnapMarksView : UIView
{
    MJRulerView * _backingRulerView; // +0x8
    id <MJTimelineVisibleRectDataSource> _dataSource; // +0x10
    MJSnapMarksViewLayout * _layout; // +0x18
}
- (id)initWithLayout:(id)arg1;
- (void)setupViews;
- (void)bindViews;
- (void)redrawSnapMarks;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)layout;
- (void).cxx_destruct;
@end
