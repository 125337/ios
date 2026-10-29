@interface NoteListContentParseResult : NSObject
{
    FavoritesItem * _item; // +0x8
    NSData * _bytes; // +0x10
    NSArray * _previews; // +0x18
}
- (id)item;
- (void)setItem:(id)arg1;
- (id)bytes;
- (void)setBytes:(id)arg1;
- (id)previews;
- (void)setPreviews:(id)arg1;
- (void).cxx_destruct;
@end
