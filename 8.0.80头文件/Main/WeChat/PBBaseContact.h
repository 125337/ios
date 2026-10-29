@interface PBBaseContact : NSObject <PBCoding>
{
    unsigned int _conType; // +0x8
    unsigned int _sex; // +0xc
    unsigned int _type; // +0x10
    unsigned int _chatState; // +0x14
    unsigned int _qquin; // +0x18
    unsigned int _friendScene; // +0x1c
    unsigned int _imgKey; // +0x20
    unsigned int _extKey; // +0x24
    unsigned int _imgKeyAtLastGet; // +0x28
    unsigned int _extKeyAtLastGet; // +0x2c
    unsigned int _draftTime; // +0x30
    unsigned int _draftStatus; // +0x34
    NSString * _userName; // +0x38
    NSString * _aliasName; // +0x40
    NSString * _nickName; // +0x48
    NSString * _fullPy; // +0x50
    NSString * _remark; // +0x58
    NSString * _remarkPyshort; // +0x60
    NSString * _remarkPyfull; // +0x68
    unsigned long long _typeExt; // +0x70
    NSString * _imgStatus; // +0x78
    NSString * _hdimgStatus; // +0x80
    NSString * _headImgUrl; // +0x88
    NSString * _headHdimgUrl; // +0x90
    NSString * _draft; // +0x98
    NSString * _qqnickName; // +0xa0
    NSString * _qqremark; // +0xa8
    NSString * _mobileIdentify; // +0xb0
    NSString * _atUserList; // +0xb8
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_aliasName;
+ (void)PBArrayAdd_conType;
+ (void)PBArrayAdd_nickName;
+ (void)PBArrayAdd_fullPy;
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_remarkPyshort;
+ (void)PBArrayAdd_remarkPyfull;
+ (void)PBArrayAdd_sex;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_chatState;
+ (void)PBArrayAdd_imgStatus;
+ (void)PBArrayAdd_hdimgStatus;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_headHdimgUrl;
+ (void)PBArrayAdd_draft;
+ (void)PBArrayAdd_qquin;
+ (void)PBArrayAdd_qqnickName;
+ (void)PBArrayAdd_qqremark;
+ (void)PBArrayAdd_mobileIdentify;
+ (void)PBArrayAdd_friendScene;
+ (void)PBArrayAdd_imgKey;
+ (void)PBArrayAdd_extKey;
+ (void)PBArrayAdd_imgKeyAtLastGet;
+ (void)PBArrayAdd_extKeyAtLastGet;
+ (void)PBArrayAdd_draftTime;
+ (void)PBArrayAdd_atUserList;
+ (void)PBArrayAdd_typeExt;
+ (void)PBArrayAdd_draftStatus;
+ (void)initialize;
- (id)toCBaseContact;
- (void)setFromCBaseContact:(id)arg1;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)aliasName;
- (void)setAliasName:(id)arg1;
- (unsigned int)conType;
- (void)setConType:(unsigned int)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)fullPy;
- (void)setFullPy:(id)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)remarkPyshort;
- (void)setRemarkPyshort:(id)arg1;
- (id)remarkPyfull;
- (void)setRemarkPyfull:(id)arg1;
- (unsigned int)sex;
- (void)setSex:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)typeExt;
- (void)setTypeExt:(unsigned long long)arg1;
- (unsigned int)chatState;
- (void)setChatState:(unsigned int)arg1;
- (id)imgStatus;
- (void)setImgStatus:(id)arg1;
- (id)hdimgStatus;
- (void)setHdimgStatus:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)headHdimgUrl;
- (void)setHeadHdimgUrl:(id)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (unsigned int)qquin;
- (void)setQquin:(unsigned int)arg1;
- (id)qqnickName;
- (void)setQqnickName:(id)arg1;
- (id)qqremark;
- (void)setQqremark:(id)arg1;
- (id)mobileIdentify;
- (void)setMobileIdentify:(id)arg1;
- (unsigned int)friendScene;
- (void)setFriendScene:(unsigned int)arg1;
- (unsigned int)imgKey;
- (void)setImgKey:(unsigned int)arg1;
- (unsigned int)extKey;
- (void)setExtKey:(unsigned int)arg1;
- (unsigned int)imgKeyAtLastGet;
- (void)setImgKeyAtLastGet:(unsigned int)arg1;
- (unsigned int)extKeyAtLastGet;
- (void)setExtKeyAtLastGet:(unsigned int)arg1;
- (unsigned int)draftTime;
- (void)setDraftTime:(unsigned int)arg1;
- (id)atUserList;
- (void)setAtUserList:(id)arg1;
- (unsigned int)draftStatus;
- (void)setDraftStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
