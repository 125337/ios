@interface MMImageActionCircleToSearchItem : MMImageActionSheetItem
{
    unsigned long long _scene; // +0x8
}
- (id)init;
- (void)setScene:(unsigned long long)arg1;
- (void)onImageActionSheetDidAppear;
- (unsigned long long)scene;
@end
