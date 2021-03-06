/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSASAlbum, NSString, <NSObject>;

@interface MSASPersonModelItem : NSObject <NSCopying> {
    int _errorCount;
    MSASAlbum *_album;
    NSString *_albumGUID;
    <NSObject> *_object;
}

@property int errorCount;
@property(retain) MSASAlbum * album;
@property(retain) NSString * albumGUID;
@property(retain) <NSObject> * object;


- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (id)album;
- (void)setAlbum:(id)arg1;
- (int)errorCount;
- (void)setObject:(id)arg1;
- (id)object;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setErrorCount:(int)arg1;

@end
