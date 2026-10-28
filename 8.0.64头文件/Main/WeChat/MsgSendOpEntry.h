@interface MsgSendOpEntry : NSObject
{
    BOOL _voice; // +0x8
    BOOL _emoji; // +0x9
    BOOL _hideCameraEmoji; // +0xa
    BOOL _hideGameEmoji; // +0xb
    BOOL _sendBtn; // +0xc
    BOOL _dictation; // +0xd
    BOOL _hideAttachBtn; // +0xe
    BOOL _voice_input; // +0xf
    BOOL _image; // +0x10
    BOOL _video; // +0x11
    BOOL _location; // +0x12
    BOOL _location_real_time; // +0x13
    BOOL _share_card; // +0x14
    BOOL _file; // +0x15
    BOOL _favorite; // +0x16
    BOOL _video_voip; // +0x17
    BOOL _voice_voip; // +0x18
    BOOL _multi_voip; // +0x19
    BOOL _hong_bao; // +0x1a
    BOOL _transfer_money; // +0x1b
    BOOL _ka_quan; // +0x1c
    BOOL _enterprise_brand; // +0x1d
    BOOL _chatroomtool; // +0x1e
    BOOL _solitaireEntry; // +0x1f
    BOOL _roomLiveEntry; // +0x20
    BOOL _musicSearch; // +0x21
    BOOL _finder; // +0x22
    BOOL _sendGift; // +0x23
}
- (id)init;
- (BOOL)voice;
- (void)setVoice:(BOOL)arg1;
- (BOOL)emoji;
- (void)setEmoji:(BOOL)arg1;
- (BOOL)hideCameraEmoji;
- (void)setHideCameraEmoji:(BOOL)arg1;
- (BOOL)hideGameEmoji;
- (void)setHideGameEmoji:(BOOL)arg1;
- (BOOL)sendBtn;
- (void)setSendBtn:(BOOL)arg1;
- (BOOL)dictation;
- (void)setDictation:(BOOL)arg1;
- (BOOL)hideAttachBtn;
- (void)setHideAttachBtn:(BOOL)arg1;
- (BOOL)voice_input;
- (void)setVoice_input:(BOOL)arg1;
- (BOOL)image;
- (void)setImage:(BOOL)arg1;
- (BOOL)video;
- (void)setVideo:(BOOL)arg1;
- (BOOL)location;
- (void)setLocation:(BOOL)arg1;
- (BOOL)location_real_time;
- (void)setLocation_real_time:(BOOL)arg1;
- (BOOL)share_card;
- (void)setShare_card:(BOOL)arg1;
- (BOOL)file;
- (void)setFile:(BOOL)arg1;
- (BOOL)favorite;
- (void)setFavorite:(BOOL)arg1;
- (BOOL)video_voip;
- (void)setVideo_voip:(BOOL)arg1;
- (BOOL)voice_voip;
- (void)setVoice_voip:(BOOL)arg1;
- (BOOL)multi_voip;
- (void)setMulti_voip:(BOOL)arg1;
- (BOOL)hong_bao;
- (void)setHong_bao:(BOOL)arg1;
- (BOOL)transfer_money;
- (void)setTransfer_money:(BOOL)arg1;
- (BOOL)ka_quan;
- (void)setKa_quan:(BOOL)arg1;
- (BOOL)enterprise_brand;
- (void)setEnterprise_brand:(BOOL)arg1;
- (BOOL)chatroomtool;
- (void)setChatroomtool:(BOOL)arg1;
- (BOOL)solitaireEntry;
- (void)setSolitaireEntry:(BOOL)arg1;
- (BOOL)roomLiveEntry;
- (void)setRoomLiveEntry:(BOOL)arg1;
- (BOOL)musicSearch;
- (void)setMusicSearch:(BOOL)arg1;
- (BOOL)finder;
- (void)setFinder:(BOOL)arg1;
- (BOOL)sendGift;
- (void)setSendGift:(BOOL)arg1;
@end
