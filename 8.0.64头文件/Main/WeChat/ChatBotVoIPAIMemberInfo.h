@interface ChatBotVoIPAIMemberInfo : NSObject <IContactMgrExt>
{
    NSString * _identifier; // +0x8
    CContact * _contact; // +0x10
    NSString * _nickName; // +0x18
    NSString * _headImage; // +0x20
    NSString * _headImageName; // +0x28
}
- (id)initWithUsername:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithPB:(id)arg1;
- (id)convertToPB;
- (id)identifier;
- (void)updateContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)headImageName;
- (void)setHeadImageName:(id)arg1;
- (void).cxx_destruct;
@end
