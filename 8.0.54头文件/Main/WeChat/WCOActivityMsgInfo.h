@interface WCOActivityMsgInfo : NSObject <PBCoding>
{
    int _type; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _imgUrl; // +0x20
    NSString * _startBtnTxt; // +0x28
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_startBtnTxt;
+ (void)initialize;
- (id)getPBPropertyTable;
- (int)type;
- (void)setType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)startBtnTxt;
- (void)setStartBtnTxt:(id)arg1;
- (void).cxx_destruct;
@end

