@interface LocationThumbTask : MMObject
{
    double _extraHeight; // +0x8
    NSString * _initialChatname; // +0x10
    NSString * _chatname; // +0x18
    unsigned int _msgLocalID; // +0x20
    double _latitude; // +0x28
    double _longitude; // +0x30
    CGSize _thumbSize; // +0x38
    CGPoint _mapPinOffset; // +0x48
    double _mapScale; // +0x58
    BOOL _isSender; // +0x60
    BOOL _disableMask; // +0x61
    UIView * _extraView; // +0x68
    BOOL _isInDarkMode; // +0x70
    NSString * _buildingId; // +0x78
    NSString * _floorName; // +0x80
    NSString * _tmpThumbID; // +0x88
}
+ (id)getThumbIDWithChatName:(id)arg1 MsgLocalID:(unsigned int)arg2;
- (id)init;
- (id)getThumbID;
- (double)extraHeight;
- (void)setExtraHeight:(double)arg1;
- (id)initialChatname;
- (void)setInitialChatname:(id)arg1;
- (id)chatname;
- (void)setChatname:(id)arg1;
- (unsigned int)msgLocalID;
- (void)setMsgLocalID:(unsigned int)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)mapScale;
- (void)setMapScale:(double)arg1;
- (CGSize)thumbSize;
- (void)setThumbSize:(CGSize)arg1;
- (CGPoint)mapPinOffset;
- (void)setMapPinOffset:(CGPoint)arg1;
- (BOOL)isSender;
- (void)setIsSender:(BOOL)arg1;
- (BOOL)disableMask;
- (void)setDisableMask:(BOOL)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)floorName;
- (void)setFloorName:(id)arg1;
- (id)extraView;
- (void)setExtraView:(id)arg1;
- (id)tmpThumbID;
- (void)setTmpThumbID:(id)arg1;
- (void).cxx_destruct;
@end

