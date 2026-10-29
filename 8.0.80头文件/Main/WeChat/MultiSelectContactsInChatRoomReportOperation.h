@interface MultiSelectContactsInChatRoomReportOperation : NSObject
{
    unsigned long long _selectionType; // +0x8
    NSMutableDictionary * _dicSelectionContact; // +0x10
}
- (unsigned long long)selectionType;
- (void)setSelectionType:(unsigned long long)arg1;
- (id)dicSelectionContact;
- (void)setDicSelectionContact:(id)arg1;
- (void).cxx_destruct;
@end
