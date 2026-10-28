@interface WCMegaVideoBulletComment : NSObject <WCTColumnCoding, PBCoding>
{
    int _extFlag; // +0x8
    unsigned long long _commentId; // +0x10
    NSString * _content; // +0x18
    unsigned long long _videoTimestamp; // +0x20
    unsigned long long _createTime; // +0x28
}
+ (void)PBArrayAdd_commentId;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_videoTimestamp;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_extFlag;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoBulletCommentInfo:(id)arg1;
- (id)description;
- (double)appearPoint;
- (BOOL)isMine;
- (BOOL)isAuthor;
- (BOOL)isBothMineAndAuthor;
- (id)bulletItem;
- (unsigned long long)commentId;
- (void)setCommentId:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)videoTimestamp;
- (void)setVideoTimestamp:(unsigned long long)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (int)extFlag;
- (void)setExtFlag:(int)arg1;
- (void).cxx_destruct;
@end
