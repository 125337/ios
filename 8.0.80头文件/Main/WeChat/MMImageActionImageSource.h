@interface MMImageActionImageSource : MMImageActionSheetItem
{
    NSString * _sourceUrl; // +0x8
}
- (id)init;
- (BOOL)isHidden;
- (void)handleWithImage;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end
