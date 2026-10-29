@interface MMFinderLivePkTaskedBonusProgressDescriptionItem : NSObject
{
    MMFinderLivePkTaskedBonusTaskItem * _taskItem; // +0x8
    double _progress; // +0x10
    NSAttributedString * _progressDescription; // +0x18
}
- (id)taskItem;
- (void)setTaskItem:(id)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (id)progressDescription;
- (void)setProgressDescription:(id)arg1;
- (void).cxx_destruct;
@end
