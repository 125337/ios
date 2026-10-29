@interface NotifyMsg : NSObject
{
    NSNumber * _msgId; // +0x8
    NSString * _talker; // +0x10
    NSNumber * _headerShowType; // +0x18
    NSNumber * _dataType; // +0x20
    NSString * _title; // +0x28
    NSString * _avatarUrl; // +0x30
    NSString * _displayName; // +0x38
    NSNumber * _createTime; // +0x40
    BizPayAlbum * _bizPayAlbum; // +0x48
    NSNumber * _unRead; // +0x50
    NSString * _msgContent; // +0x58
    NSString * _msgSource; // +0x60
    NSDictionary * _extraInfo; // +0x68
    NSNumber * _mergeCount; // +0x70
    NSNumber * _mergeShowTime; // +0x78
    NSNumber * _messageId; // +0x80
    NSNumber * _notifyMsgBlockFlag; // +0x88
    NSNumber * _foldBlockMsgUnRead; // +0x90
    NSNumber * _hasSharedServiceType; // +0x98
}
+ (id)makeWithMsgId:(id)arg1 talker:(id)arg2 headerShowType:(id)arg3 dataType:(id)arg4 title:(id)arg5 avatarUrl:(id)arg6 displayName:(id)arg7 createTime:(id)arg8 bizPayAlbum:(id)arg9 unRead:(id)arg10 msgContent:(id)arg11 msgSource:(id)arg12 extraInfo:(id)arg13 mergeCount:(id)arg14 mergeShowTime:(id)arg15 messageId:(id)arg16 notifyMsgBlockFlag:(id)arg17 foldBlockMsgUnRead:(id)arg18 hasSharedServiceType:(id)arg19;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)talker;
- (void)setTalker:(id)arg1;
- (id)headerShowType;
- (void)setHeaderShowType:(id)arg1;
- (id)dataType;
- (void)setDataType:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (id)bizPayAlbum;
- (void)setBizPayAlbum:(id)arg1;
- (id)unRead;
- (void)setUnRead:(id)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)mergeCount;
- (void)setMergeCount:(id)arg1;
- (id)mergeShowTime;
- (void)setMergeShowTime:(id)arg1;
- (id)messageId;
- (void)setMessageId:(id)arg1;
- (id)notifyMsgBlockFlag;
- (void)setNotifyMsgBlockFlag:(id)arg1;
- (id)foldBlockMsgUnRead;
- (void)setFoldBlockMsgUnRead:(id)arg1;
- (id)hasSharedServiceType;
- (void)setHasSharedServiceType:(id)arg1;
- (void).cxx_destruct;
@end
