@interface WCFinderJumpSearchUGCParams : NSObject
{
    unsigned int _search_scene; // +0x8
    unsigned int _comment_scene; // +0xc
    unsigned long long _object_id; // +0x10
    NSString * _stream_title; // +0x18
    NSString * _query; // +0x20
    NSString * _session_buffer; // +0x28
}
- (unsigned long long)object_id;
- (void)setObject_id:(unsigned long long)arg1;
- (id)stream_title;
- (void)setStream_title:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)session_buffer;
- (void)setSession_buffer:(id)arg1;
- (unsigned int)search_scene;
- (void)setSearch_scene:(unsigned int)arg1;
- (unsigned int)comment_scene;
- (void)setComment_scene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

