@interface WCFinderCommentListCGIParam : NSObject
{
    BOOL _fetchObject; // +0x8
    int _scene; // +0xc
    int _pullScene; // +0x10
    int _contentType; // +0x14
    unsigned long long _objectId; // +0x18
    unsigned long long _refCommentID; // +0x20
    unsigned long long _rootCommentID; // +0x28
    NSData * _lastBuffer; // +0x30
    NSString * _finderUsername; // +0x38
    unsigned long long _direction; // +0x40
    NSString * _nonceID; // +0x48
    unsigned long long _identityScene; // +0x50
    NSData * _likeListBuffer; // +0x58
    FinderGetCommentListCtx * _commentCtx; // +0x60
    NSString * _enterSessionId; // +0x68
    unsigned long long _sortType; // +0x70
    unsigned long long _selectedType; // +0x78
}
- (id)genRequest;
- (id)fullDescription;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (unsigned long long)rootCommentID;
- (void)setRootCommentID:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)fetchObject;
- (void)setFetchObject:(BOOL)arg1;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)identityScene;
- (void)setIdentityScene:(unsigned long long)arg1;
- (int)pullScene;
- (void)setPullScene:(int)arg1;
- (id)likeListBuffer;
- (void)setLikeListBuffer:(id)arg1;
- (id)commentCtx;
- (void)setCommentCtx:(id)arg1;
- (id)enterSessionId;
- (void)setEnterSessionId:(id)arg1;
- (unsigned long long)sortType;
- (void)setSortType:(unsigned long long)arg1;
- (unsigned long long)selectedType;
- (void)setSelectedType:(unsigned long long)arg1;
- (int)contentType;
- (void)setContentType:(int)arg1;
- (void).cxx_destruct;
@end
