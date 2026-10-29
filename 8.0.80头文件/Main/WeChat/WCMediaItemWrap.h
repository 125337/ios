@interface WCMediaItemWrap : NSObject
{
    unsigned int index; // +0x8
    WCMediaItem * mediaItem; // +0x10
    WCDataItem * parent; // +0x18
}
- (id)init;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
