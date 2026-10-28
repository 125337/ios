@interface ShakeTvItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    BOOL _isAutoplay; // +0x8
    NSString * _tvId; // +0x10
    NSString * _title; // +0x18
    NSString * _topic; // +0x20
    NSString * _thumbUrl; // +0x28
    NSString * _playUrl; // +0x30
    NSString * _playStatid; // +0x38
    NSString * _actionUrl; // +0x40
    NSString * _actionStatid; // +0x48
    NSString * _shareUrl; // +0x50
    NSMutableArray * _actionLists; // +0x58
    NSString * _subTitle; // +0x60
}
+ (void)PBArrayAdd_tvId;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_playUrl;
+ (void)PBArrayAdd_playStatid;
+ (void)PBArrayAdd_actionUrl;
+ (void)PBArrayAdd_actionStatid;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_actionLists;
+ (void)PBArrayAdd_isAutoplay;
+ (void)PBArrayAdd_subTitle;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)tvId;
- (void)setTvId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (id)playStatid;
- (void)setPlayStatid:(id)arg1;
- (id)actionUrl;
- (void)setActionUrl:(id)arg1;
- (id)actionStatid;
- (void)setActionStatid:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)actionLists;
- (void)setActionLists:(id)arg1;
- (BOOL)isAutoplay;
- (void)setIsAutoplay:(BOOL)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end
