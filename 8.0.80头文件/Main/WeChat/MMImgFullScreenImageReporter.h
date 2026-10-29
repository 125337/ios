@interface MMImgFullScreenImageReporter : NSObject
{
    int _fromScene; // +0x8
    MMImgDataItem * _item; // +0x10
}
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end
