#ifndef PACKETSOCKET_HH
#define PACKETSOCKET_HH

#include <string>
#include <vector>
#include "macaddr.hh"

class PacketSocket
{
private:
  int sock;

  const MACAddress _from_filter;
  const MACAddress _to_filter;
  bool _outgoing;
  
  int get_index( const std::string & name ) const;

public:
  PacketSocket( const std::string & s_interface,
		const std::string & s_from_filter,
		const std::string & s_to_filter,
        bool is_outgoing
              );

  std::pair<std::vector< std::string >, std::vector< std::string >> recv_raw( void );
  void send_raw( const std::string & input );
  int fd( void ) const { return sock; }
};

#endif
