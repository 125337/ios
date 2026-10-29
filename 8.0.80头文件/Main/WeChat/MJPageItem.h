@interface MJPageItem : NSObject
{
    MJPageViewTitleItem * _titleView; // +0x8
    UIViewController * _contentViewController; // +0x10
    unsigned long long _tab; // +0x18
    unsigned long long _editContentType; // +0x20
    NSArray * _supportedSegmentTypes; // +0x28
}
- (id)initWithTitleView:(id)arg1 contentViewController:(id)arg2 tab:(unsigned long long)arg3;
- (id)initWithTitleView:(id)arg1 contentViewController:(id)arg2 tab:(unsigned long long)arg3 editContentType:(unsigned long long)arg4 supportedSegmentTypes:(id)arg5;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentViewController;
- (void)setContentViewController:(id)arg1;
- (unsigned long long)tab;
- (void)setTab:(unsigned long long)arg1;
- (unsigned long long)editContentType;
- (void)setEditContentType:(unsigned long long)arg1;
- (id)supportedSegmentTypes;
- (void)setSupportedSegmentTypes:(id)arg1;
- (void).cxx_destruct;
@end
