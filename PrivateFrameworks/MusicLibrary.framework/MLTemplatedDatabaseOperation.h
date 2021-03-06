/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSDictionary, MLActiveTransaction, NSUUID;

@interface MLTemplatedDatabaseOperation : MLLibraryOperation  {
    unsigned int _type;
    NSUUID *_uuid;
    NSDictionary *_attributes;
    MLActiveTransaction *_transaction;
}

@property(readonly) unsigned int type;
@property(readonly) NSUUID * uuid;
@property(retain) NSDictionary * attributes;
@property(retain) MLActiveTransaction * transaction;

+ (id)databaseOperationForType:(unsigned int)arg1 withTransaction:(id)arg2 library:(id)arg3;

- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (id)_operationTypeDescription;
- (id)initWithLibrary:(id)arg1 transaction:(id)arg2;
- (void)setTransaction:(id)arg1;
- (id)transaction;
- (id)uuid;
- (BOOL)isEqual:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (unsigned int)type;

@end
