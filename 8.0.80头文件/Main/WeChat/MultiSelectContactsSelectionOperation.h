@interface MultiSelectContactsSelectionOperation : NSObject
{
    unsigned long long _selectionType; // +0x8
    long long _selectionCount; // +0x10
    long long _selectionFriCount; // +0x18
}
- (unsigned long long)selectionType;
- (void)setSelectionType:(unsigned long long)arg1;
- (long long)selectionCount;
- (void)setSelectionCount:(long long)arg1;
- (long long)selectionFriCount;
- (void)setSelectionFriCount:(long long)arg1;
@end
