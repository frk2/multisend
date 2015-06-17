sudo ethtool --offload  eth0 gso off  tso off gro off
sudo ethtool --offload  eth2 gso off  tso off gro off
sudo ./cellsim $1 $2 68:5b:35:a3:0b:71 00:18:0a:02:a2:0e eth0 eth2
