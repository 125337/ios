@interface WCTogetherDisplayText : NSObject
{
    BOOL _isRichText; // +0x8
    WCTogetherDisplayInfo * _displayInfo; // +0x10
    NSString * _togetherText; // +0x18
    NSArray * _togetherUsers; // +0x20
}
+ (id)displayTextFromDisplayInfo:(id)arg1 isRichText:(BOOL)arg2;
- (void)generateTogetherText;
- (id)generateFriendsTextForContacts:(id)arg1 isRichText:(BOOL)arg2;
- (id)generateTextForContact:(id)arg1 isRichText:(BOOL)arg2;
- (id)displayInfo;
- (BOOL)isRichText;
- (id)togetherText;
- (id)togetherUsers;
- (void).cxx_destruct;
@end
