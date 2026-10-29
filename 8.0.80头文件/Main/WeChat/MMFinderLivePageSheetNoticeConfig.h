@interface MMFinderLivePageSheetNoticeConfig : NSObject
{
    NSString * _title; // +0x8
    NSString * _content; // +0x10
    NSMutableArray * _mActions; // +0x18
}
- (void)addAction:(id)arg1;
- (id)mActions;
- (id)actions;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void)setMActions:(id)arg1;
- (void).cxx_destruct;
@end
