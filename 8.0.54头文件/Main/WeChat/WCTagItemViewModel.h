@interface WCTagItemViewModel : NSObject
{
    WCTagItem * _tagItem; // +0x8
    CGRect _tagViewFrame; // +0x10
}
- (id)initWithTagItem:(id)arg1 tagViewFrame:(CGRect)arg2;
- (id)tagImage;
- (id)tagView;
- (id)tagItem;
- (void)setTagItem:(id)arg1;
- (CGRect)tagViewFrame;
- (void)setTagViewFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

