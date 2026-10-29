@interface ChatBotVoIPRoomInfo : NSObject <IContactMgrExt>
{
    unsigned int _roomType; // +0x8
    unsigned int _openScene; // +0xc
    int _bizType; // +0x10
    NSString * _identifier; // +0x18
    CContact * _chatBot; // +0x20
    NSArray * _chatBotArr; // +0x28
    NSString * _roomHeadImage; // +0x30
    NSString * _roomNickName; // +0x38
    NSMutableDictionary * _transferData; // +0x40
    ChatBotVoIPRoomInfoPB_ExtInfo * _extInfo; // +0x48
}
- (id)initWithContact:(id)arg1;
- (id)initWithPB:(id)arg1;
- (id)convertToPB;
- (id)identifier;
- (void)fetchRoomInfo;
- (void)onUpdateContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (unsigned int)roomType;
- (void)setRoomType:(unsigned int)arg1;
- (unsigned int)openScene;
- (void)setOpenScene:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (id)chatBot;
- (void)setChatBot:(id)arg1;
- (id)chatBotArr;
- (void)setChatBotArr:(id)arg1;
- (id)roomHeadImage;
- (void)setRoomHeadImage:(id)arg1;
- (id)roomNickName;
- (void)setRoomNickName:(id)arg1;
- (id)transferData;
- (void)setTransferData:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (void).cxx_destruct;
@end
