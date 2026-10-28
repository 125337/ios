@interface CaraContact : NSObject <CaraNativeContactBase>
{
    CContact * _contact; // +0x8
}
- (id)initWithContact:(id)arg1;
- (id)username;
- (BOOL)isPrivate;
- (BOOL)isGroup;
- (BOOL)isOpenIM;
- (BOOL)isMute;
- (BOOL)isMinimized;
- (BOOL)isSessionStickyOnTop;
- (id)getDisplayName;
- (id)zidl;
- (id)contact;
- (void).cxx_destruct;
@end
